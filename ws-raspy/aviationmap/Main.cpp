#include "mainwindow.h"
#include "Animation.h"
#include "PrimaryFlightData.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/map.qml"));
    //engine.load(QUrl(QStringLiteral("qrc:/map.qml")));
    QObject::connect(
                &engine,
                &QQmlApplicationEngine::objectCreated,
                &a,
                [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    const QUrl url1(QStringLiteral("qrc:/flightinstrumentstest.qml"));
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
    MyGlobalObject* myGlobal = new MyGlobalObject();
    myGlobal->test("TEXT FROM C++");
    engine.rootContext()->setContextProperty("myGlobalObject", myGlobal);
    // the object will be available in QML with name "myGlobalObject"

    engine.load(url);
    //engine.load(url1);
    return a.exec();

}
