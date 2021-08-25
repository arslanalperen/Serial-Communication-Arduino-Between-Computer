#include <QApplication>
#include "dialog.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    dialog w;
    w.setFixedSize(542,158);
    w.setWindowTitle("Serialport");
    w.show();

    return QApplication::exec();
}
