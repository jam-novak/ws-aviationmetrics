#include "main.h"
#include <QSerialPortInfo>

int main(int argc, char *argv[])
{
    CSV csv;
    QApplication a(argc, argv);
    QQmlApplicationEngine engine;
    SerialJames serialJames;

    csv.getData();


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
    }, Qt::QueuedConnection);

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
    //QObject::connect(&serialJames, &SerialJames::readerDataReady, &csv, &CSV::create);

    //csv data
    QObject::connect(myGlobal, &MyGlobalObject::latitudesignal, &csv, &CSV::getLatitude);
    QObject::connect(myGlobal, &MyGlobalObject::longitudesignal, &csv, &CSV::getLongitude);
    QObject::connect(myGlobal, &MyGlobalObject::airspeedsignal, &csv, &CSV::getAirspeed);
    QObject::connect(myGlobal, &MyGlobalObject::altitudesignal, &csv, &CSV::getAltitude);
    QObject::connect(myGlobal, &MyGlobalObject::pressuresignal, &csv, &CSV::getPressure);
    QObject::connect(myGlobal, &MyGlobalObject::rollsignal, &csv, &CSV::getRoll);
    QObject::connect(myGlobal, &MyGlobalObject::steigratesignal, &csv, &CSV::getSteigrate);

    //engine.load(url);
    //engine.load(url1);
    engine.load(url);
    return a.exec();

}
