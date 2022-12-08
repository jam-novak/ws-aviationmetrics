#include "csv.h"

QStringList data;
QVector<QVector<QString>> vectorOfVectorsOfStrings;
int counter;

csv::csv(){
    getCoordinate();


}

void csv::getCoordinate(){

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

qreal csv::getLatitude(){
    qreal latitude;

    latitude = (vectorOfVectorsOfStrings[counter][0]).toDouble();
    counter++;

    return latitude;


}

qreal csv::getLongitude(){
    qreal longitude;

    longitude = (vectorOfVectorsOfStrings[counter][1]).toDouble();

    return longitude;

}

double csv::getAirspeed(){
    double airspeed;

    airspeed = (vectorOfVectorsOfStrings[counter][2]).toDouble();

    return airspeed;
}

double csv::getSteigrate(){
    double steigrate;

    steigrate = (vectorOfVectorsOfStrings[counter][3]).toDouble();

    return steigrate;
}

double csv::getRoll(){
    double roll;

    roll = (vectorOfVectorsOfStrings[counter][4]).toDouble();

    return roll;
}

double csv::getAltitude(){
    double altitude;

    altitude = (vectorOfVectorsOfStrings[counter][5]).toDouble();

    return altitude;
}

double csv::getPressure(){
    double pressure;

    pressure = (vectorOfVectorsOfStrings[counter][6]).toDouble();

    return pressure;
}
