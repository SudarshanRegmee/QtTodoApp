#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "filehandler.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_addBtn_clicked();

    void on_removeBtn_clicked();

    void on_removeAllBtn_clicked();

private:
    Ui::MainWindow *ui;
    FileHandler *fileHandler;
};
#endif // MAINWINDOW_H
