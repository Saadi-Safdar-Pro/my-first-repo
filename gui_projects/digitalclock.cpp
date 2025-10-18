#include "digitalclock.h"
#include <QVBoxLayout>
#include <QTimer>
#include <QDateTime>

DigitalClock::DigitalClock(QWidget *parent) : QWidget(parent) {
    // Create widgets
    timeLabel = new QLabel();
    dateLabel = new QLabel();
    themeCombo = new QComboBox();
    
    // Setup time label
    timeLabel->setAlignment(Qt::AlignCenter);
    timeLabel->setStyleSheet("font-size: 48px; font-weight: bold; color: #2E86AB;");
    
    // Setup date label
    dateLabel->setAlignment(Qt::AlignCenter);
    dateLabel->setStyleSheet("font-size: 18px; color: #A23B72;");
    
    // Setup theme selector
    themeCombo->addItem("Light Theme");
    themeCombo->addItem("Dark Theme");
    themeCombo->addItem("Blue Theme");
    themeCombo->addItem("Green Theme");
    
    // Create layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(timeLabel);
    layout->addWidget(dateLabel);
    layout->addWidget(themeCombo);
    
    // Setup timer to update every second
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &DigitalClock::updateTime);
    timer->start(1000);
    
    // Connect theme changer
    connect(themeCombo, QOverload<int>::of(&QComboBox::currentIndexChanged), 
            this, &DigitalClock::changeTheme);
    
    // Initial update
    updateTime();
    changeTheme(0);
    
    setWindowTitle("Digital Clock");
    setFixedSize(400, 300);
}

void DigitalClock::updateTime() {
    QDateTime current = QDateTime::currentDateTime();
    timeLabel->setText(current.toString("hh:mm:ss"));
    dateLabel->setText(current.toString("dddd, MMMM d, yyyy"));
}

void DigitalClock::changeTheme(int index) {
    QString style;
    
    switch(index) {
        case 0: // Light
            style = "background-color: #F8F9FA; color: #212529;";
            timeLabel->setStyleSheet("font-size: 48px; font-weight: bold; color: #2E86AB;");
            dateLabel->setStyleSheet("font-size: 18px; color: #A23B72;");
            break;
        case 1: // Dark
            style = "background-color: #212529; color: #F8F9FA;";
            timeLabel->setStyleSheet("font-size: 48px; font-weight: bold; color: #20C997;");
            dateLabel->setStyleSheet("font-size: 18px; color: #FFA94D;");
            break;
        case 2: // Blue
            style = "background-color: #E3F2FD; color: #0D47A1;";
            timeLabel->setStyleSheet("font-size: 48px; font-weight: bold; color: #1565C0;");
            dateLabel->setStyleSheet("font-size: 18px; color: #7B1FA2;");
            break;
        case 3: // Green
            style = "background-color: #E8F5E8; color: #1B5E20;";
            timeLabel->setStyleSheet("font-size: 48px; font-weight: bold; color: #2E7D32;");
            dateLabel->setStyleSheet("font-size: 18px; color: #FF6F00;");
            break;
    }
    
    setStyleSheet(style);
}
