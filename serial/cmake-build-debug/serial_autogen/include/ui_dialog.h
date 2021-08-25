/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QPushButton *sendButton;
    QLabel *sen;
    QLabel *arduino;
    QLabel *title;
    QLineEdit *inputText;
    QLineEdit *outputText;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(542, 158);
        sendButton = new QPushButton(dialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(450, 60, 71, 41));
        sendButton->setFlat(false);
        sen = new QLabel(dialog);
        sen->setObjectName(QString::fromUtf8("sen"));
        sen->setGeometry(QRect(20, 60, 81, 41));
        arduino = new QLabel(dialog);
        arduino->setObjectName(QString::fromUtf8("arduino"));
        arduino->setGeometry(QRect(10, 110, 101, 41));
        title = new QLabel(dialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(160, 10, 261, 31));
        inputText = new QLineEdit(dialog);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setGeometry(QRect(112, 60, 331, 41));
        outputText = new QLineEdit(dialog);
        outputText->setObjectName(QString::fromUtf8("outputText"));
        outputText->setEnabled(false);
        outputText->setGeometry(QRect(112, 110, 331, 41));

        retranslateUi(dialog);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "Dialog", nullptr));
        sendButton->setText(QApplication::translate("dialog", "G\303\266nder", nullptr));
        sen->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; font-style:italic; color:#729fcf;\">Sen :</span></p></body></html>", nullptr));
        arduino->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; font-style:italic; color:#ef2929;\">Arduino :</span></p></body></html>", nullptr));
        title->setText(QApplication::translate("dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; font-style:italic; color:#cc0000;\">Arduino'ya Bir \305\236ey De...</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
