#include "clotheswindow.h"
#include "ui_clotheswindow.h"

ClothesWindow::ClothesWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClothesWindow)
{
    ui->setupUi(this);
}

ClothesWindow::~ClothesWindow()
{
    delete ui;
}
