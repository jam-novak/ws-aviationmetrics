#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/map.qml"));
    //engine.load(QUrl(QStringLiteral("qrc:/map.qml")));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &a, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    /* GeneralMagic Key
    //! [Set token safely]
    // go to https://developer.generalmagic.com to get your token
    engine.rootContext()->setContextProperty("__my_secret_token", "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJhdWQiOiJlNDZhNTk1Zi02ZTkwLTRhOGUtYmQzOS03MjM2NjU1MDM3YjYiLCJleHAiOjE2OTA3NTA4MDAsImlzcyI6IkdlbmVyYWwgTWFnaWMiLCJqdGkiOiI1MmVkMmE5ZS0yNTJlLTQ0NWMtYTkxOC04ODI3ODU0MzQwM2UiLCJuYmYiOjE2NjYwODk4MDZ9.ouoFp50dWib9XKkksqxQUVW5Sw9dZ1eyaLfJ6SPrPRv57BbXZoz_KHKgYs8hr7tE88RPxjCOjlBHHjdXlpHekw" /*YOUR_TOKEN);
    // alternatively you can use :
    // qputenv("GEM_TOKEN", "your token");
    //! [Set token safely]
    //! */

    // add global c++ object to the QML context as a property
    MyGlobalObject* myGlobal = new MyGlobalObject();
    myGlobal->test("TEXT FROM C++");
    engine.rootContext()->setContextProperty("myGlobalObject", myGlobal);
    // the object will be available in QML with name "myGlobalObject"

    engine.load(url);
    return a.exec();

}
