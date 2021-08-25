//
// Created by alperen on 7.06.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dialog.h" resolved

#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <string>
#include <QDebug>
#include <QMessageBox>
#include <QThread>

using namespace std;

dialog::dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::dialog) {
    ui->setupUi(this);

    arduino = new QSerialPort(this);

    //Arduino'daki açık olan port belirleniyor
    bool arduino_is_available = false;
    QString arduino_uno_port_name;

    //Uygun serial port
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        if(serialPortInfo.hasProductIdentifier() && serialPortInfo.hasVendorIdentifier()){
            if((serialPortInfo.productIdentifier() == arduino_uno_product_id)
                && (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id)){
                arduino_is_available = true;
                arduino_uno_port_name = serialPortInfo.portName();
            }
        }
    }

    //Uygun arduino portunu aç ve konfigüre et
    if(arduino_is_available){
        qDebug() << "Arduino portu bulunuyor..." << endl;
        arduino->setPortName(arduino_uno_port_name);
        arduino->open(QSerialPort::ReadWrite);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
    }else{
        qDebug() << "Doğru arduino portu bulunamadı..." << endl;
        QMessageBox::information(this,"Serial Port Hatası","Arduino Serial Portu Açılamadı...");

    }
}

dialog::~dialog() {
    if(arduino->isOpen()){
        arduino->close();
    }
    delete ui;
}

/*
void dialog::on_sendButton_clicked(){
    QString dataTransmitted = ui->inputText->text();
    writeSerial(dataTransmitted);
    QString dataReceived = QString::fromStdString(arduino->readAll().toStdString());
    arduino->waitForReadyRead(-1);
    ui->outputText->setText(dataReceived);
    qDebug() << dataReceived;
}
*/

void dialog::on_sendButton_clicked(){
    QString dataTransmitted = ui->inputText->text();
    writeSerial(dataTransmitted);
    arduino->waitForReadyRead(-1);
    QString dataReceived = QString::fromStdString(arduino->readAll().toStdString());
    ui->outputText->setText(dataReceived);
    qDebug() << dataReceived;
}

void dialog::writeSerial(QString command){
    if(arduino->isWritable()) {
        arduino->write(command.toStdString().c_str());
    }
}