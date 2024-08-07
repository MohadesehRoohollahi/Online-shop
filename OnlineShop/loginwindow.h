#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <QMessageBox>
#include <sstream>
#include "user.h"
#include "mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:

    void on_Ok_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
