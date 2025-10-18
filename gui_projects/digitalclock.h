#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>

class DigitalClock : public QWidget {
    Q_OBJECT

public:
    DigitalClock(QWidget *parent = nullptr);

private slots:
    void updateTime();
    void changeTheme(int index);

private:
    QLabel *timeLabel;
    QLabel *dateLabel;
    QComboBox *themeCombo;
};

#endif
