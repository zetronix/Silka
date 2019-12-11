#ifndef MYCALENDAR_H
#define MYCALENDAR_H
#include <QWidget>
#include <QCalendarWidget>
#include <QLabel>

class MyCalendar : public QWidget
{
    Q_OBJECT
public:
    MyCalendar(QWidget* parent = nullptr);

private:
    QCalendarWidget* calendar;
    QLabel* testLabel;
private slots:
    void updateLabel(const QDate&);

};

#endif // MYCALENDAR_H
