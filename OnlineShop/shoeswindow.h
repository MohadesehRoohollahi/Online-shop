#ifndef SHOESWINDOW_H
#define SHOESWINDOW_H

#include <QMainWindow>
#include "shoes2window.h"

namespace Ui {
class ShoesWindow;
}

class ShoesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShoesWindow(QWidget *parent = nullptr);
    ~ShoesWindow();

private slots:
    void on_pushButton_8_clicked();

private:
    Ui::ShoesWindow *ui;
};

#endif // SHOESWINDOW_H
