#ifndef CLOTHESWINDOW_H
#define CLOTHESWINDOW_H

#include <QMainWindow>

namespace Ui {
class ClothesWindow;
}

class ClothesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClothesWindow(QWidget *parent = nullptr);
    ~ClothesWindow();

private:
    Ui::ClothesWindow *ui;
};

#endif // CLOTHESWINDOW_H
