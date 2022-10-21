#include "csv.h"

csv::csv(){
    getCoordinate();

}

int csv::getCoordinate(){
    int coordinate = 0;

    QFile file("flightparameters.csv");
        if (!file.open(QIODevice::ReadOnly)) {
            qDebug() << file.errorString();
            return 1;
        }

        QStringList wordList;
        while (!file.atEnd()) {
            QByteArray line = file.readLine();
            wordList.append(line.split(',').first());
        }

        qDebug() << wordList;

    return coordinate;
}
