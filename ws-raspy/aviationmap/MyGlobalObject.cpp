#include "myglobalobject.h"
#include "csv.h"

MyGlobalObject::MyGlobalObject(CSV csv)
{
    this->csv = csv;
}

void MyGlobalObject::test(const QString &text){

    qDebug() << "test" << text;
    csv.getCoordinate();

}

qreal MyGlobalObject::getLatitude(){
   return csv.getLatitude();

}

qreal MyGlobalObject::getLongitude(){
    return csv.getLongitude();

}

double MyGlobalObject::getAirspeed(){
    return csv.getAirspeed();
}

double MyGlobalObject::getSteigrate(){
    return csv.getSteigrate();
}

double MyGlobalObject::getRoll(){
    return csv.getRoll();
}

double MyGlobalObject::getAltitude(){
    return csv.getAltitude();
}

double MyGlobalObject::getPressure(){
    return csv.getPressure();
}
