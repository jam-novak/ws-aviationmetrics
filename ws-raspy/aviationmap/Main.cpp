#include "main.h"


int main(int argc, char *argv[])
{
    CSV csv;
    QApplication a(argc, argv);
    QQmlApplicationEngine engine;

    //map
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

    //test
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

    //startmenu
    const QUrl url2(QStringLiteral("qrc:/Menu.qml"));
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
    //engine.load(url);
    //engine.load(url1);
    engine.load(url2);
    return a.exec();

}
