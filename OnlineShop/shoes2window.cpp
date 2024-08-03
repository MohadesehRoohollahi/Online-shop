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
