#include "myhumanoid.h"
#include <QDebug>
#include "bodypartbutton.h"

MyHumanoid::MyHumanoid(QWidget *parent) : QWidget(parent)
{
    QPixmap pm;
    humanoid = new QPushButton(this);
    humanoid->setGeometry(0,0,300,400);
    if(!pm.load(":/images/res/images/obrys.png"))
        qDebug()<<"Error - cannot load obrys.png";
    QIcon buttonIcon(pm);
    humanoid->setIcon(buttonIcon);
    humanoid->setIconSize(pm.rect().size());
    humanoid->setFlat(true);
    connect(humanoid,SIGNAL(clicked()),this,SLOT(humanoidPushed()));
//================================ABS
    const QRect absSize (120, 110, 61,91);
    abs = new BodyPartButton("abs", absSize,this);

//==================================ARMS
    /*
    armsL = new QLabel(this);
    armsR = new QLabel(this);
    armsL->setGeometry(80,45,46,46);
    armsR->setGeometry(164,45,46,46);
    if(!pm.load(":/images/res/images/barki.png"))
        qDebug()<<"Error - cannot load barki.png";
    armsL->setPixmap(pm);
    armsR->setPixmap(pm);
    armsL->setEnabled(false);
    armsR->setEnabled(false);

    bicL = new QLabel(this);
    bicR = new QLabel(this);
    bicL->setGeometry(45,60,46,25);
    bicR->setGeometry(200,60,46,25);
    if(!pm.load(":/images/res/images/bic.png"))
        qDebug()<<"Error - cannot load bic.png";
    bicL->setPixmap(pm);
    bicR->setPixmap(pm);
    bicL->setEnabled(false);
    bicR->setEnabled(false);

    //bicL->setEnabled(false);
    triL = new QLabel(this);
    triR = new QLabel(this);
    triL->setGeometry(25,90,73,21);
    triR->setGeometry(200,90,73,21);
    if(!pm.load(":/images/res/images/tric.png"))
        qDebug()<<"Error - cannot load tric.png";
    triL->setPixmap(pm);
    triR->setPixmap(pm);
    triL->setEnabled(false);
    triR->setEnabled(false);

    back = new QLabel(this);
    back->setGeometry(50,110,68,97);
    if(!pm.load(":/images/res/images/plecy.png"))
        qDebug()<<"Error - cannot load plecy.png";
    back->setPixmap(pm);
    back->setEnabled(false);

    chest = new QLabel(this);
    chest->setGeometry(100,70,88,57);
    if(!pm.load(":/images/res/images/klata.png"))
        qDebug()<<"Error - cannot load klata.png";
    chest->setPixmap(pm);
    chest->setEnabled(false);


    legs = new QLabel(this);
    legs->setGeometry(85,200,135,144);
    if(!pm.load(":/images/res/images/legs.png"))
        qDebug()<<"Error - cannot load legs.png";
    legs->setPixmap(pm);
    legs->setEnabled(false);
    */

}

void MyHumanoid::humanoidPushed(){
    qDebug()<<"humanoid pressed";
}

void MyHumanoid::setBodyPart(QLabel* bodyPart){
    qDebug()<<"setBodyPart";
    if(bodyPart->isEnabled())
    bodyPart->setEnabled(false);
    else{
        bodyPart->setEnabled(true);
    }
}

