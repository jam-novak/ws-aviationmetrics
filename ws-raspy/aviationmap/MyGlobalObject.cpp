#include "myglobalobject.h"
#include "csv.h"

MyGlobalObject::MyGlobalObject(CSV &csv)
{
    this->csv = csv;
}

void MyGlobalObject::test(const QString &text){

    qDebug() << "test" << text;

}

qreal MyGlobalObject::getLatitude(){
   qreal latitude = emit latitudesignal();
   return latitude;

}

qreal MyGlobalObject::getLongitude(){
    qreal longitude = emit longitudesignal();
    return longitude;

}

double MyGlobalObject::getAirspeed(){
    double airseed = emit airspeedsignal();
    return airseed;
}

double MyGlobalObject::getSteigrate(){
    double steigrate = emit steigratesignal();
    return steigrate;
}

double MyGlobalObject::getRoll(){
    double roll = emit rollsignal();
    return roll;
}

double MyGlobalObject::getAltitude(){
    double altitude = emit altitudesignal();
    return altitude;
}

double MyGlobalObject::getPressure(){
    double essure = emit pressuresignal();
    return essure;
}

void MyGlobalObject::startFlight(){
    emit readyForTakeoff();
}

void MyGlobalObject::viewFlight(){
    emit reviewFlight();
}

void MyGlobalObject::done(){
    emit counterup();
}
