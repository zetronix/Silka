#ifndef MYHUMANOID_H
#define MYHUMANOID_H

#include <QWidget>
#include <QLabel>

class MyHumanoid : public QWidget
{
    Q_OBJECT
public:
    explicit MyHumanoid(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel* humanoid;
};

#endif // MYHUMANOID_H
