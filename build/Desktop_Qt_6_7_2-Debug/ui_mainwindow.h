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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *textBox;
    QPushButton *addBtn;
    QListWidget *listWidget;
    QPushButton *removeAllBtn;
    QPushButton *removeBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(508, 474);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textBox = new QLineEdit(centralwidget);
        textBox->setObjectName("textBox");
        textBox->setStyleSheet(QString::fromUtf8("color: blue;\n"
"background-color: #fff;\n"
"padding: 2px 5px;"));

        verticalLayout->addWidget(textBox);

        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");

        verticalLayout->addWidget(addBtn);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        removeAllBtn = new QPushButton(centralwidget);
        removeAllBtn->setObjectName("removeAllBtn");

        verticalLayout->addWidget(removeAllBtn);

        removeBtn = new QPushButton(centralwidget);
        removeBtn->setObjectName("removeBtn");

        verticalLayout->addWidget(removeBtn);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your note here", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        removeAllBtn->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
        removeBtn->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
