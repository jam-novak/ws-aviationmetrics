#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>

class CSV
{

    public:
        qreal latitude;
        qreal longitude;
        double airspeed;
        double steigrate;
        double roll;
        double altitude;
        double pressure;

        CSV(void);
        void create();
        void getCoordinate();
        qreal getLatitude();
        qreal getLongitude();
        double getAirspeed();
        double getSteigrate();
        double getRoll();
        double getAltitude();
        double getPressure();


};

#endif // CSV_H
