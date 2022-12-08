/*
#include "serialJames.h"
#include <QDebug>
#include <QtSerialPort/QSerialPortInfo>

SerialJames::SerialJames(QObject *parent) : QObject{parent}
{
    this->serialPort = new QSerialPort(this);
    this->serialPort->setBaudRate(QSerialPort::Baud19200);
    this->serialPort->setDataBits(QSerialPort::Data8);
    this->serialPort->setParity(QSerialPort::NoParity);
    this->serialPort->setStopBits(QSerialPort::OneStop);
    connect(serialPort, &QSerialPort::readyRead, this, &SerialJames::handleReadyRead);
}

SerialJames::SerialJames(QSerialPort *port, QObject *parent) : QObject(parent), serialPort(port)
{
    connect(serialPort, &QSerialPort::readyRead, this, &SerialJames::handleReadyRead);
}

SerialJames::~SerialJames() {
    this->serialPort->close();
}

void SerialJames::handleReadyRead() {
    this->dataBuffer = this->serialPort->readAll();
    this->cmdBuffer += dataBuffer;

    if (cmdBuffer.contains(0x04)) {
        int n = cmdBuffer.count(0x04);
        QList<QByteArray> parts = cmdBuffer.split(0x04);
        for (int i = 0; i < n; i++) {
            QByteArray cmd_data;
            cmd_data = parts[i];
            this->cmdBuffer = cmdBuffer.remove(0, cmd_data.length());
        }
    }
    emit readerDataReady(&dataBuffer);
}

bool SerialJames::openPort(QSerialPortInfo& port) {
    this->serialPort->setPort(port);
    if (!this->serialPort->open(QIODevice::ReadWrite)) {
       return false;
    }
    return true;
}

void SerialJames::close() {
    if (this->serialPort != nullptr) {
        this->serialPort->close();
    }
}
*/
