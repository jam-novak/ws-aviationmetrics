#ifndef MYGLOBALOBJECT_H
#define MYGLOBALOBJECT_H

#include <QObject>
#include "csv.h"


class MyGlobalObject : public QObject
{

    Q_OBJECT

    public:
    CSV csv;
    MyGlobalObject(CSV &csv);

    public slots:
    void test(const QString &text);
    //getter
    qreal getLatitude();
    qreal getLongitude();
    double getAirspeed();
    double getSteigrate();
    double getRoll();
    double getAltitude();
    double getPressure();
    //modes
    void startFlight();
    void viewFlight();

    signals:
    //modes
    void readyForTakeoff();
    void reviewFlight();
    //getter
    void latitudesignal();
    void longitudesignal();
    void airspeedsignal();
    void steigratesignal();
    void rollsignal();
    void altitudesignal();
    void pressuresignal();

};

#endif // MYGLOBALOBJECT_H
