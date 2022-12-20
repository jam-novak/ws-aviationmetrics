#include "csv.h"

CSV::CSV(QObject *parent) : QObject{parent}{

}

CSV::CSV(CSV &other) : QObject{parent()} {

}

CSV& CSV::operator=(const CSV& other){
    //delete[] this;

    this->latitude = other.latitude;
    this->longitude = other.longitude;
    this->airspeed = other.airspeed;
    this->steigrate = other.steigrate;
    this->roll = other.roll;
    this->altitude = other.altitude;
    this->pressure = other.pressure;
    this->data = other.data;
    this->vectorOfVectorsOfStrings = other.vectorOfVectorsOfStrings;
    this->counter = other.counter;

    return *this;
}

/*
void CSV::create(QByteArray *data){
    QString path(":/flightparameters.csv");
    QDir dir; // Initialize to the desired dir if 'path' is relative; by default the program's working directory "." is used.

    // We create the directory if needed
    if (!dir.exists(path))
        dir.mkpath(path); // You can check the success if needed

    QDateTime date = QDateTime::currentDateTimeUtc();
    //QString filename = QDateTime::toString();


    QFile file(path + "NewFile.kml");
    file.open(QIODevice::ReadWrite);



    //write serial data



}
*/

void CSV::getData(){
    QFile file(":/flightparameters.csv");
        if (!file.open(QIODevice::ReadOnly)) {
            qDebug() << file.errorString();

        }

        while (!file.atEnd()) {
            QByteArray line = file.readLine();
            QString str = line;
            data = str.split(',');
            //qDebug() <<s coordinates;


            QVector<QString> foo; //create a QVector of QStrings
            foo.push_back(data[0]);     //latitude
            foo.push_back(data[1]);     //longitude
            foo.push_back(data[2]);     //speed
            foo.push_back(data[3]);     //steigrate
            foo.push_back(data[4]);     //roll
            foo.push_back(data[5]);     //altitude
            foo.push_back(data[6]);     //pressure
            vectorOfVectorsOfStrings.push_back(foo); //add the created vector as a line in your 2D vector


        }


   /*   for(int i = 0; i < vectorOfVectorsOfStrings.size(); i++)
        {
            for(int j = 0; j < vectorOfVectorsOfStrings[i].size(); j++)
            {
                //do stuff with the QString vectorOfVectorsOfStrings[i][j]
                qDebug() << vectorOfVectorsOfStrings[i][j];
            }
        }
        */
}

qreal CSV::getLatitude(){
    this->latitude = (vectorOfVectorsOfStrings[counter][0]).toDouble();
    counter++;

    return latitude;
}

qreal CSV::getLongitude(){
    this->longitude = (vectorOfVectorsOfStrings[counter][1]).toDouble();

    return longitude;
}

double CSV::getAirspeed(){
    this->airspeed = (vectorOfVectorsOfStrings[counter][2]).toDouble();

    return airspeed;
}

double CSV::getSteigrate(){
    steigrate = (vectorOfVectorsOfStrings[counter][3]).toDouble();

    return steigrate;
}

double CSV::getRoll(){
    this->roll = (vectorOfVectorsOfStrings[counter][4]).toDouble();

    return roll;
}

double CSV::getAltitude(){
    this->altitude = (vectorOfVectorsOfStrings[counter][5]).toDouble();

    return altitude;
}

double CSV::getPressure(){
    this->pressure = (vectorOfVectorsOfStrings[counter][6]).toDouble();

    return pressure;
}
