#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QObject>

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
        void getCoordinate();
        qreal getLatitude();
        qreal getLongitude();
        double getAirspeed();
        double getSteigrate();
        double getRoll();
        double getAltitude();
        double getPressure();

    public slots:
        void create(QByteArray *data);


};

#endif // CSV_H
