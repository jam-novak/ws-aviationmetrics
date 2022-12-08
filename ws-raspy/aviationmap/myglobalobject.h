#ifndef MYGLOBALOBJECT_H
#define MYGLOBALOBJECT_H

#include <QObject>
#include "csv.h"

class MyGlobalObject : public QObject
{

    Q_OBJECT

    public:
    CSV csv;
    MyGlobalObject(CSV csv);

    public slots:
    void test(const QString &text);
    qreal getLatitude();
    qreal getLongitude();
    double getAirspeed();
    double getSteigrate();
    double getRoll();
    double getAltitude();
    double getPressure();
};

#endif // MYGLOBALOBJECT_H
