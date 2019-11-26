#include "mypushbutton.h"
#include <QDebug>
MyPushButton::MyPushButton(QWidget *parent):QPushButton(parent)
{
    qDebug()<< "Construct button";

}
MyPushButton::~MyPushButton(){
    qDebug()<<"Destruct button";
}
