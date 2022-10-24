#include "myglobalobject.h"
#include "csv.h"

MyGlobalObject::MyGlobalObject()
{

}

void MyGlobalObject::test(const QString &text){

    csv csv;
    qDebug() << "test" << text;
    csv.getCoordinate();

}

qreal MyGlobalObject::getLatitude(){
   csv csv;
   return csv.getLatitude();

}

qreal MyGlobalObject::getLongitude(){
    csv csv;
    return csv.getLongitude();

}
