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

    QStringList lines = fileHandler->readFile();

    foreach (const QString &line, lines) {
        ui->listWidget->addItem(line);
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
    // Write the contents to the file
    QStringList listitems;
    for(int i=0; i<ui->listWidget->count(); ++i) {
        QListWidgetItem *item = ui->listWidget->item(i);
        listitems.append(item->text());
    }
    qDebug() << "Hello, World";
    qDebug() << listitems;
    fileHandler->writeFile(listitems);
}

void MainWindow::on_removeBtn_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());

    if(item) {
        delete item;
    }

    QStringList updatedlist;

    for(int i=0; i<ui->listWidget->count();++i) {
        updatedlist.append(ui->listWidget->item(i)->text());
    }

    // writing to the file
    fileHandler->writeFile(updatedlist);

    // now the same item should also be deleted from file
    // Implementaiton: get the index at which the current item is and delete that line...
}


void MainWindow::on_removeAllBtn_clicked()
{
    ui->listWidget->clear();
    fileHandler->clearFileContents();
    // cleary everything from a file
}
