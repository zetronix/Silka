#include "myhumanoid.h"
#include <QDebug>

MyHumanoid::MyHumanoid(QWidget *parent) : QWidget(parent)
{
    humanoid = new QPushButton(this);
    humanoid->setGeometry(0,0,300,400);
    QPixmap pm;
    if(!pm.load(":/images/res/images/obrys.png"))
        qDebug()<<"Error - cannot load obrys.png";
    QIcon buttonIcon(pm);
    humanoid->setIcon(buttonIcon);
    humanoid->setIconSize(pm.rect().size());
    connect(humanoid,SIGNAL(clicked()),this,SLOT(humanoidPushed()));

    abs = new QPushButton(this);
  //  abs->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    abs->setGeometry(120,110,61,91);
    if(!pm.load(":/images/res/images/abs.png"))
        qDebug()<<"Error - cannot load abs.png";
    buttonIcon.addPixmap(pm);
    abs->setIcon(buttonIcon);
    abs->setIconSize(pm.rect().size());
  //  abs->setEnabled(false);


    armsL = new QPushButton(this);
    armsR = new QPushButton(this);
 //   armsL->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
 //   armsR->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    armsL->setGeometry(90,60,46,46);
    armsR->setGeometry(154,60,46,46);
    if(!pm.load(":/images/res/images/barki.png"))
        qDebug()<<"Error - cannot load barki.png";
    buttonIcon.addPixmap(pm);
    armsL->setIcon(buttonIcon);
    armsR->setIcon(buttonIcon);
    armsL->setIconSize(pm.rect().size());
    armsR->setIconSize(pm.rect().size());
  // arms->setEnabled(false);

    bicL = new QPushButton(this);
    bicR = new QPushButton(this);
 //   bicL->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
 //   bicR->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    bicL->setGeometry(45,60,46,25);
    bicR->setGeometry(200,60,46,25);
    if(!pm.load(":/images/res/images/bic.png"))
        qDebug()<<"Error - cannot load bic.png";
    buttonIcon.addPixmap(pm);
    bicL->setIcon(buttonIcon);
    bicR->setIcon(buttonIcon);
    bicL->setIconSize(pm.rect().size());
    bicR->setIconSize(pm.rect().size());
    //bicL->setEnabled(false);

    triL = new QPushButton(this);
    triR = new QPushButton(this);
 //   triL->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
 //   triR->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    triL->setGeometry(25,90,73,21);
    triR->setGeometry(200,90,73,21);
    if(!pm.load(":/images/res/images/tric.png"))
        qDebug()<<"Error - cannot load tric.png";
    buttonIcon.addPixmap(pm);
    triL->setIcon(buttonIcon);
    triR->setIcon(buttonIcon);
    triL->setIconSize(pm.rect().size());
    triR->setIconSize(pm.rect().size());
 //   triL->setEnabled(false);
 //   triR->setEnabled(false);

    back = new QPushButton(this);
    back->setGeometry(50,110,68,97);
  //  back->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    if(!pm.load(":/images/res/images/plecy.png"))
        qDebug()<<"Error - cannot load plecy.png";
    buttonIcon.addPixmap(pm);
    back->setIcon(buttonIcon);
    back->setIconSize(pm.rect().size());
   // back->setEnabled(false);

    chest = new QPushButton(this);
    chest->setGeometry(0,0,88,57);

    if(!pm.load(":/images/res/images/klata.png"))
        qDebug()<<"Error - cannot load klata.png";
    buttonIcon.addPixmap(pm);
    chest->setIcon(buttonIcon);
    chest->setIconSize(pm.rect().size());
  //  chest->setEnabled(false);
/*
    legs = new QPushButton(this);
    legs->setGeometry(0,0,500,500);
    if(!pm.load(":/images/res/images/legs.png"))
        qDebug()<<"Error - cannot load legs.png";
    legs->setPixmap(pm);
    legs->setEnabled(false);
*/
}

void MyHumanoid::humanoidPushed(){
    qDebug()<<"humanoid pressed";
}
