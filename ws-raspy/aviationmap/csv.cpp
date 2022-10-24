#include "csv.h"

QStringList coordinates;
QVector<QVector<QString> > vectorOfVectorsOfStrings;
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
            coordinates = str.split(',');
            //qDebug() << coordinates;


            QVector<QString> foo; //create a QVector of QStrings
            foo.push_back(coordinates[0]);
            foo.push_back(coordinates[1]);
            vectorOfVectorsOfStrings.push_back(foo); //add the created vector as a line in your 2D vector


        }


   /*     for(int i = 0; i < vectorOfVectorsOfStrings.size(); i++)
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
