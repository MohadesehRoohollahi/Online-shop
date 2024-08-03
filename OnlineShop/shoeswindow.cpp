#include "shoeswindow.h"
#include "ui_shoeswindow.h"

ShoesWindow::ShoesWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShoesWindow)
{
    ui->setupUi(this);
}

ShoesWindow::~ShoesWindow()
{
    delete ui;
}

void ShoesWindow::on_pushButton_8_clicked()
{
    Shoes2Window * newPage = new Shoes2Window;
    this->close();
    newPage->show();
}

