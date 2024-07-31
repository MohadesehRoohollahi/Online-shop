#include "accessorieswindow.h"
#include "ui_accessorieswindow.h"

AccessoriesWindow::AccessoriesWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AccessoriesWindow)
{
    ui->setupUi(this);
}

AccessoriesWindow::~AccessoriesWindow()
{
    delete ui;
}
