//
// Created by alperen on 27.06.2021.
//

#ifndef SERIALPORT_MAINWINDOW_H
#define SERIALPORT_MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include <QDebug>
#include <QScrollBar>

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
    void on_connectPushButton_clicked();
    void writeSerial(QString);
    void on_sendPushButton_clicked();
    void serialReadyRead();

private:
    Ui::MainWindow *ui;

    QSerialPort *mSerial;
    QList<QSerialPortInfo> mSerialPorts;
    QTimer *mSerialScanTimer;

    void updateSerialPorts();
};


#endif //SERIALPORT_MAINWINDOW_H
