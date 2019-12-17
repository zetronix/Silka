#include "bodypartbutton.h"
#include <QDebug>

BodyPartButton::BodyPartButton(QString name, const QRect transform, QWidget* parent): QPushButton(parent)
{
    this->setGeometry(transform);
    this->setFlat(true); //change true
    this->setStyleSheet("QPushButton:pressed { background-color: rgba(0,0,0,0);}"
                        "QPushButton:pressed { border: 0px;}");

    bodyPartLabel = new QLabel(this);
    bodyPartLabel->setGeometry(0,0,transform.width(),transform.height());
    if(!pm.load(":/images/res/images/"+name+".png"))
        qDebug()<<"Error - cannot load "+name+".png";
    bodyPartLabel->setPixmap(pm);
    bodyPartLabel->setEnabled(false);

    connect(this,SIGNAL(clicked()),this,SLOT(activeBodyPart()));
}

void BodyPartButton::activeBodyPart(){
    qDebug()<<"activeBodyPart";
    if(bodyPartLabel->isEnabled()){
        bodyPartLabel->setEnabled(false);
    } else {
        bodyPartLabel->setEnabled(true);
    }
}
