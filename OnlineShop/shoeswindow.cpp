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
