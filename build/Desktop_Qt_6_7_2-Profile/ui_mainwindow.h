/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *textBox;
    QPushButton *addBtn;
    QListWidget *listWidget;
    QPushButton *removeBtn;
    QPushButton *removeAllBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(457, 519);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textBox = new QLineEdit(centralwidget);
        textBox->setObjectName("textBox");
        textBox->setGeometry(QRect(10, 10, 341, 25));
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(350, 10, 81, 25));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 40, 431, 431));
        removeBtn = new QPushButton(centralwidget);
        removeBtn->setObjectName("removeBtn");
        removeBtn->setGeometry(QRect(230, 480, 101, 25));
        removeAllBtn = new QPushButton(centralwidget);
        removeAllBtn->setObjectName("removeAllBtn");
        removeAllBtn->setGeometry(QRect(340, 480, 101, 25));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeBtn->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        removeAllBtn->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
