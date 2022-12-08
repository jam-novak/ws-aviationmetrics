#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(&this->mySerialPortReader, SIGNAL(sendData(QByteArray)), this, SLOT(getData(QByteArray)));
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickWidget->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

