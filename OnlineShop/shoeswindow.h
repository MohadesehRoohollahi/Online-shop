#ifndef SHOESWINDOW_H
#define SHOESWINDOW_H

#include <QMainWindow>

namespace Ui {
class ShoesWindow;
}

class ShoesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShoesWindow(QWidget *parent = nullptr);
    ~ShoesWindow();

private:
    Ui::ShoesWindow *ui;
};

#endif // SHOESWINDOW_H
