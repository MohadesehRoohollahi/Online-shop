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


void MainWindow::on_ShoespushButton_clicked()
{
    ShoesWindow * newPage = new ShoesWindow;
    this->close();
    newPage->show();
}



void MainWindow::on_AccessoriespushButton_clicked()
{
    AccessoriesWindow * newPage = new AccessoriesWindow;
    this->close();
    newPage->show();
}


void MainWindow::on_ClothespushButton_clicked()
{
    ClothesWindow * newPage = new ClothesWindow;
    this->close();
    newPage->show();
}

