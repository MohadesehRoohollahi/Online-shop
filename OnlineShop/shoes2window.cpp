#include "shoes2window.h"
#include "ui_shoes2window.h"

Shoes2Window::Shoes2Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shoes2Window)
{
    ui->setupUi(this);
}

Shoes2Window::~Shoes2Window()
{
    delete ui;
}

void Shoes2Window::on_LastPagepushButton_clicked()
{
    ShoesWindow * newPage = new ShoesWindow;
    this->close();
    newPage->show();
}

