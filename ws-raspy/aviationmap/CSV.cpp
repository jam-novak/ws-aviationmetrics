#include "csv.h"

QStringList data;
QVector<QVector<QString>> vectorOfVectorsOfStrings;
int counter;

CSV::CSV(){
    getCoordinate();


}

void CSV::create(){
    QFile file(":/flightparameters.csv");
    file.open(QIODevice::ReadWrite);

    //write serial data

}

void CSV::getCoordinate(){
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
    latitude = (vectorOfVectorsOfStrings[counter][0]).toDouble();
    counter++;

    return latitude;
}

qreal CSV::getLongitude(){
    longitude = (vectorOfVectorsOfStrings[counter][1]).toDouble();

    return longitude;
}

double CSV::getAirspeed(){
    airspeed = (vectorOfVectorsOfStrings[counter][2]).toDouble();

    return airspeed;
}

double CSV::getSteigrate(){
    steigrate = (vectorOfVectorsOfStrings[counter][3]).toDouble();

    return steigrate;
}

double CSV::getRoll(){
    roll = (vectorOfVectorsOfStrings[counter][4]).toDouble();

    return roll;
}

double CSV::getAltitude(){
    altitude = (vectorOfVectorsOfStrings[counter][5]).toDouble();

    return altitude;
}

double CSV::getPressure(){
    pressure = (vectorOfVectorsOfStrings[counter][6]).toDouble();

    return pressure;
}
