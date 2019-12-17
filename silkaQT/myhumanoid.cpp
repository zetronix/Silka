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
    const QRect armLSize (80,45,46,46);
    const QRect armRSize (164,45,46,46);
    armsL = new BodyPartButton("barki", armLSize, this);
    armsR = new BodyPartButton("barki", armRSize, this);
    connect(armsL, SIGNAL(clicked()), armsR, SLOT(activeBodyPart()));
    connect(armsR, SIGNAL(clicked()), armsL, SLOT(activeBodyPart()));

    const QRect bicLSize (45,60,46,25);
    const QRect bicRSize (200,60,46,25);
    bicL = new BodyPartButton("bic", bicLSize, this);
    bicR = new BodyPartButton("bic", bicRSize, this);
    connect(bicL, SIGNAL(clicked()), bicR, SLOT(activeBodyPart()));
    connect(bicR, SIGNAL(clicked()), bicL, SLOT(activeBodyPart()));

    const QRect tricLSize (25,90,73,21);
    const QRect tricRSize (200,90,73,21);
    triL = new BodyPartButton("tric", tricLSize, this);
    triR = new BodyPartButton("tric", tricRSize, this);
    connect(triL, SIGNAL(clicked()), triR, SLOT(activeBodyPart()));
    connect(triR, SIGNAL(clicked()), triL, SLOT(activeBodyPart()));

    const QRect backSize (50,100,68,97);
    back = new BodyPartButton("plecy", backSize, this);

    const QRect chestSize (100,70,88,57);
    chest = new BodyPartButton("klata", chestSize, this);

    const QRect legSize (85,200,135, 144);
    legs = new BodyPartButton("legs", legSize, this);
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

