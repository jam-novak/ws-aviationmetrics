#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QObject>
#include <QDir>
#include <QDateTime>

class CSV: public QObject
{

    Q_OBJECT

    private:
        qreal latitude;
        qreal longitude;
        double airspeed;
        double steigrate;
        double roll;
        double altitude;
        double pressure;

        QStringList data;
        QVector<QVector<QString>> vectorOfVectorsOfStrings;
        int counter;

    public:
        CSV(QObject *parent = nullptr); //constructor
        CSV(CSV &other);                //copy constructor
        CSV& operator=(const CSV& csv); //assignment operator (overloaded operator)
        void getData();


    public slots:
        //void create(QByteArray *data);
        qreal getLatitude();
        qreal getLongitude();
        double getAirspeed();
        double getSteigrate();
        double getRoll();
        double getAltitude();
        double getPressure();


};

#endif // CSV_H
