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
};

#endif // MYGLOBALOBJECT_H
