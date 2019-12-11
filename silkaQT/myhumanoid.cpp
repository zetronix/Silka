#include "myhumanoid.h"
#include <QDebug>

MyHumanoid::MyHumanoid(QWidget *parent) : QWidget(parent)
{
    humanoid = new QLabel(this);
    humanoid->setGeometry(0,0,500,500);
    QPixmap pm;
    if(pm.load(":/images/res/images/obrys.png")){
        qDebug()<<"Zaladowano pixmape";
    }
    humanoid->setPixmap(pm);
}
