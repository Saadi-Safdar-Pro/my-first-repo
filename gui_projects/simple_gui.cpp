// #include <QApplication>
// #include <QWidget>
// #include <QPushButton>
// #include <QVBoxLayout>

// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);
    
//     // Create main window
//     QWidget window;
//     window.setWindowTitle("Simple GUI");
//     window.resize(300, 200);
    
//     // Create layout
//     QVBoxLayout *layout = new QVBoxLayout(&window);
    
//     // Create buttons
//     QPushButton *button1 = new QPushButton("Click Me!");
//     QPushButton *button2 = new QPushButton("Exit");
    
//     // Add buttons to layout
//     layout->addWidget(button1);
//     layout->addWidget(button2);
    
//     // Connect button signals
//     QObject::connect(button1, &QPushButton::clicked, []() {
//         printf("Button clicked!\n");
//     });
    
//     QObject::connect(button2, &QPushButton::clicked, &app, &QApplication::quit);
    
//     // Show window
//     window.show();
    
//     return app.exec();
// }



#include <QApplication>
#include "digitalclock.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    DigitalClock clock;
    clock.show();
    
    return app.exec();
}