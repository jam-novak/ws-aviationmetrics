#include "myglobalobject.h"

MyGlobalObject::MyGlobalObject()
{

}

void MyGlobalObject::test(const QString &text){

    qDebug() << "test" << text;

}
