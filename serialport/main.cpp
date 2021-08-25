#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(800,544);
    w.setWindowTitle("Serialport");
    w.show();

    return QApplication::exec();
}
