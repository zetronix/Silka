#include "myhumanoid.h"
#include <QDebug>

MyHumanoid::MyHumanoid(QWidget *parent) : QWidget(parent)
{
    humanoid = new QLabel(this);
    humanoid->setGeometry(0,0,500,500);
    QPixmap pm;
    if(!pm.load(":/images/res/images/obrys.png"))
        qDebug()<<"Error - cannot load obrys.png";
    humanoid->setPixmap(pm);

    abs = new QLabel(this);
    abs->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/abs.png"))
        qDebug()<<"Error - cannot load abs.png";
    abs->setPixmap(pm);
    abs->setEnabled(false);

    arms = new QLabel(this);
    arms->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/barki.png"))
        qDebug()<<"Error - cannot load barki.png";
    arms->setPixmap(pm);
    arms->setEnabled(false);

    biceps = new QLabel(this);
    biceps->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/bic.png"))
        qDebug()<<"Error - cannot load bic.png";
    biceps->setPixmap(pm);
    biceps->setEnabled(false);

    triceps = new QLabel(this);
    triceps->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/tric.png"))
        qDebug()<<"Error - cannot load tric.png";
    triceps->setPixmap(pm);
    triceps->setEnabled(false);

    back = new QLabel(this);
    back->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/plecy.png"))
        qDebug()<<"Error - cannot load plecy.png";
    back->setPixmap(pm);
    back->setEnabled(false);

    chest = new QLabel(this);
    chest->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/klata.png"))
        qDebug()<<"Error - cannot load klata.png";
    chest->setPixmap(pm);
    chest->setEnabled(false);

    legs = new QLabel(this);
    legs->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/legs.png"))
        qDebug()<<"Error - cannot load legs.png";
    legs->setPixmap(pm);
    legs->setEnabled(false);
}
