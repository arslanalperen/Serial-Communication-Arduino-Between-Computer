//
// Created by alperen on 7.06.2021.
//

#ifndef SERIAL_DIALOG_H
#define SERIAL_DIALOG_H

#include <iostream>
#include <QDialog>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class dialog; }
QT_END_NAMESPACE

class dialog : public QDialog {
Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);

    ~dialog() override;

    private slots:
    void writeSerial(QString);
    void on_sendButton_clicked();

private:
    Ui::dialog *ui;

    QSerialPort *arduino;
    static const  quint16 arduino_uno_vendor_id = 6790;
    static const quint16 arduino_uno_product_id = 29987;
    QString serialData;
};


#endif //SERIAL_DIALOG_H
