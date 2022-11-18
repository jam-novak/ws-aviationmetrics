#ifndef MYGLOBALOBJECT_H
#define MYGLOBALOBJECT_H

#include <QObject>

class MyGlobalObject : public QObject
{

    Q_OBJECT

    public:
    MyGlobalObject();

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
