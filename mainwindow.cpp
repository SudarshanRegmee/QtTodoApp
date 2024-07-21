#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filehandler.h"
#include <QFile>
#include <iostream>
#include <QDebug>
#include <QMessageBox>
#include <QDir>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , fileHandler(new FileHandler("/home/sudoerson/qtprojs/TodoQtApp/todo.txt"))
{
    ui->setupUi(this);



    QFile file("/home/sudoerson/qtprojs/TodoQtApp/todo.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << file.errorString();
        return;
    }


    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        ui->listWidget->addItem(QString::fromUtf8(line).trimmed());
        qDebug() << line;
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addBtn_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->textBox->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    ui->textBox->clear();
    ui->textBox->setFocus();
    item->setFlags(item->flags() | Qt::ItemIsEditable);
}


void MainWindow::on_removeBtn_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_removeAllBtn_clicked()
{
    ui->listWidget->clear();
}
