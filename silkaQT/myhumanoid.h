#ifndef MYHUMANOID_H
#define MYHUMANOID_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include "bodypartbutton.h"

class MyHumanoid : public QWidget
{
    Q_OBJECT
public:
    explicit MyHumanoid(QWidget *parent = nullptr);

signals:

public slots:
    void humanoidPushed();
    void setBodyPart(QLabel* bodyPart);

private:
    QPushButton* humanoid;
    BodyPartButton* abs;
    BodyPartButton* armsL,*armsR;
    BodyPartButton* bicL, *bicR;
    BodyPartButton* triL, *triR;
    BodyPartButton* back;
    BodyPartButton* chest;
    BodyPartButton* legs;

    QPushButton* absButton;
    QPushButton* armLButton, *armRButton;
    QPushButton* bicLButton, *bicRButton;
    QPushButton* triLButton, *triRButton;
    QPushButton* backButton;
    QPushButton* chestButton;
    QPushButton* legsButton;


};

#endif // MYHUMANOID_H
