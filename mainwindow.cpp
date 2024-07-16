#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
