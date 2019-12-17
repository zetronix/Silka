#ifndef BODYPARTBUTTON_H
#define BODYPARTBUTTON_H
#include <QLabel>
#include <QPushButton>


class BodyPartButton : public QPushButton
{
    Q_OBJECT
public:
    BodyPartButton(QString, QRect, QWidget* parent = nullptr);

signals:

public slots:
    void activeBodyPart();

private:
    QLabel* bodyPartLabel;
    QPixmap pm;



};

#endif // BODYPARTBUTTON_H
