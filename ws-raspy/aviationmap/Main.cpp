#include "csv.h"
#include "myglobalobject.h"
#include "Animation.h"
#include "primaryFlightData.h"
#include "serialJames.h"
#include <qapplication.h>
#include <stdio.h>
#include <stdlib.h>
#include <QtGlobal>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>
#include <QQmlContext>
#include <QSerialPortInfo>
#include <QTextStream>

static const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(0);


void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    const char *file = context.file ? context.file : "";
    const char *function = context.function ? context.function : "";
    QFile errorfile("/home/jam/Documents/ws-aviationmetrics/ws-raspy/errorlog/errorlog.txt");
    QTextStream stream(&errorfile);


    if(errorfile.open(QIODevice::WriteOnly | QIODevice::Text)){
    stream << QDateTime::currentDateTimeUtc().toString() << "\n";

    switch (type) {
    case QtDebugMsg:
        stream << "Debug:" << localMsg.constData() << file << context.line << function;
        break;
    case QtInfoMsg:
        stream << "Info: " << localMsg.constData() << file << context.line << function;
        break;
    case QtWarningMsg:
        stream << "Warning: " << localMsg.constData() << file << context.line << function;
        break;
    case QtCriticalMsg:
        stream << "Critical: " << localMsg.constData() << file << context.line << function;
        break;
    case QtFatalMsg:
        stream << "Fatal: " << localMsg.constData() << file << context.line << function;
        break;
    }
    stream << "\n";

    (*QT_DEFAULT_MESSAGE_HANDLER)(type, context, msg);

    }else{
        qDebug() << "file not open";
    }
}

int main(int argc, char *argv[])
{
    CSV csv;
    QApplication a(argc, argv);
    QQmlApplicationEngine engine;
    SerialJames serialJames;
    csv.getDataFromCSV();

    qInstallMessageHandler(myMessageOutput);


    //map
    QUrl url(QStringLiteral("qrc:/Map.qml"));
    //engine.load(QUrl(QStringLiteral("qrc:/map.qml")));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &a,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
    Qt::QueuedConnection);

    //test
    QUrl url1(QStringLiteral("qrc:/flightinstrumentstest.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &a,
        [url1](QObject *obj, const QUrl &objUrl) {
            if (!obj && url1 == objUrl)
                QCoreApplication::exit(-1);
        },
    Qt::QueuedConnection);

    //startmenu
    QUrl url2(QStringLiteral("qrc:/Menu.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &a,
        [url1](QObject *obj, const QUrl &objUrl) {
            if (!obj && url1 == objUrl)
                QCoreApplication::exit(-1);
        },
    Qt::QueuedConnection);

    PrimaryFlightData *pfd = new PrimaryFlightData;
    Animation *animation = new Animation;
    animation->setPfd(pfd);
    engine.rootContext()->setContextProperty("pfd", pfd);


    // add global c++ object to the QML context as a property
    MyGlobalObject* myGlobal = new MyGlobalObject(csv);
    myGlobal->test("TEXT FROM C++");
    engine.rootContext()->setContextProperty("myGlobalObject", myGlobal);
    // the object will be available in QML with name "myGlobalObject"

    //setup signal slots
    //menu mode

    QObject::connect(myGlobal, &MyGlobalObject::readyForTakeoff,
                     &a,
                     [&engine, &url, &serialJames](){
        engine.load(url);
        //qDebug() << "signal empfangen";

        QList ports = QSerialPortInfo::availablePorts();
        for (auto& port : ports) {

            qDebug() << "port: " << port.portName();

            if (port.portName() == "/dev/tty50") {
                if (serialJames.openPort(port)){
                   qDebug() << "Opened port " << port.portName();
                }
            }
        }

    }); //lambda function = gleich hier ausgetipselt

    //serial data to csv
    QObject::connect(&serialJames, &SerialJames::readerDataReady, &csv, &CSV::writeData);

    //csv data
    QObject::connect(myGlobal, &MyGlobalObject::latitudesignal, &csv, &CSV::getLatitude);
    QObject::connect(myGlobal, &MyGlobalObject::longitudesignal, &csv, &CSV::getLongitude);
    QObject::connect(myGlobal, &MyGlobalObject::airspeedsignal, &csv, &CSV::getAirspeed);
    QObject::connect(myGlobal, &MyGlobalObject::altitudesignal, &csv, &CSV::getAltitude);
    QObject::connect(myGlobal, &MyGlobalObject::pressuresignal, &csv, &CSV::getPressure);
    QObject::connect(myGlobal, &MyGlobalObject::rollsignal, &csv, &CSV::getRoll);
    QObject::connect(myGlobal, &MyGlobalObject::steigratesignal, &csv, &CSV::getSteigrate);
    QObject::connect(myGlobal, &MyGlobalObject::counterup, &csv, &CSV::setCounter);

    //engine.load(url);
    //engine.load(url1);
    engine.load(url);
    return a.exec();

}
