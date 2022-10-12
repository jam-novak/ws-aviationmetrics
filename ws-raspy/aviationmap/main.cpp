#include "mainwindow.h"

#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/map.qml")));
    return a.exec();
}
