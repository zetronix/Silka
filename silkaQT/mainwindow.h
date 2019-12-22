#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextBrowser>
#include "mycalendar.h"
#include "myhumanoid.h"
#include "workout.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void setTextOnLabel(const QVector<workoutType>&);


private:
    Ui::MainWindow *ui;
    MyCalendar* calendar;
    MyHumanoid* human;

    QTextBrowser* workoutScreen;
    QPushButton* addNewWorkout;
    QPushButton* removeWorkout;


};
#endif // MAINWINDOW_H
