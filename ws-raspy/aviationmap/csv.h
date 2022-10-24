#ifndef CSV_H
#define CSV_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>

class csv
{

    public:
        csv(void);
        void getCoordinate();
        qreal getLatitude();
        qreal getLongitude();



};

#endif // CSV_H
