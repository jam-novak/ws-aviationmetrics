
#ifndef SERIALJAMES_H
#define SERIALJAMES_H

#include <QObject>
#include <QtSerialPort/QSerialPort>


class SerialJames : public QObject
{
    Q_OBJECT

private:
    QSerialPort *serialPort = nullptr;
    QByteArray dataBuffer;

public:
    explicit SerialJames(QObject *parent = nullptr);
    explicit SerialJames(QSerialPort* serialPort, QObject *parent = nullptr);
    ~SerialJames();
    bool openPort(QSerialPortInfo& port);
    void close();

signals:
    void readerDataReady(QByteArray *data);

private slots:
    void handleReadyRead();

};

#endif // SERIALJAMES_H
