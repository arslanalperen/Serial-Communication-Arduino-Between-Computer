/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *serialComboBox;
    QPushButton *connectPushButton;
    QTextBrowser *outputTextBrowser;
    QPushButton *sendPushButton;
    QLineEdit *inputLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        serialComboBox = new QComboBox(centralwidget);
        serialComboBox->setObjectName(QString::fromUtf8("serialComboBox"));
        serialComboBox->setGeometry(QRect(10, 10, 86, 25));
        connectPushButton = new QPushButton(centralwidget);
        connectPushButton->setObjectName(QString::fromUtf8("connectPushButton"));
        connectPushButton->setGeometry(QRect(100, 10, 89, 25));
        outputTextBrowser = new QTextBrowser(centralwidget);
        outputTextBrowser->setObjectName(QString::fromUtf8("outputTextBrowser"));
        outputTextBrowser->setGeometry(QRect(210, 10, 571, 451));
        sendPushButton = new QPushButton(centralwidget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));
        sendPushButton->setGeometry(QRect(690, 470, 89, 25));
        inputLineEdit = new QLineEdit(centralwidget);
        inputLineEdit->setObjectName(QString::fromUtf8("inputLineEdit"));
        inputLineEdit->setGeometry(QRect(210, 470, 471, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        connectPushButton->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        sendPushButton->setText(QApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
