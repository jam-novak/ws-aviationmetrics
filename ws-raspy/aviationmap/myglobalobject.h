#ifndef MYGLOBALOBJECT_H
#define MYGLOBALOBJECT_H

#include <QObject>
#include "mainwindow.h"

class MyGlobalObject : public QObject
{

    Q_OBJECT

    public:
    MyGlobalObject();

    public slots:
    void test(const QString &text);
};

#endif // MYGLOBALOBJECT_H
