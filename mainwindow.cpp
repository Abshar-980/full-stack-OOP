#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UserManager.h"
#include "QMessageBox"
#include "damnloginadmin.h"
#include "voterlogindamn.h"
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

void MainWindow::on_pushButton_clicked()
{
    damnLoginAdmin *damn = new damnLoginAdmin();
    damn->show();
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    voterlogindamn *VA = new voterlogindamn();
    VA->show();
    this->close();
}

