#ifndef MYHUMANOID_H
#define MYHUMANOID_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

class MyHumanoid : public QWidget
{
    Q_OBJECT
public:
    explicit MyHumanoid(QWidget *parent = nullptr);

signals:

public slots:
    void humanoidPushed();

private:
    QPushButton* humanoid;
    QPushButton* abs;
    QPushButton* armsL,*armsR;
    QPushButton* bicL, *bicR;
    QPushButton* triL, *triR;
    QPushButton* back;
    QPushButton* chest;
    QPushButton* legs;

};

#endif // MYHUMANOID_H
