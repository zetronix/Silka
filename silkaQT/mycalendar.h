#ifndef MYCALENDAR_H
#define MYCALENDAR_H
#include <QWidget>
#include <QCalendarWidget>
#include <QLabel>


class MyCalendar : public QCalendarWidget
{
    Q_OBJECT
public:
    MyCalendar(QWidget* parent = nullptr);

private:
    QList<QDate> dateList;


private slots:
    void updateList(const QDate&);
    void paintCell(QPainter * painter, const QRect & rect, const QDate & date) const;

};

#endif // MYCALENDAR_H
