#ifndef SHOES2WINDOW_H
#define SHOES2WINDOW_H

#include <QMainWindow>

namespace Ui {
class Shoes2Window;
}

class Shoes2Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Shoes2Window(QWidget *parent = nullptr);
    ~Shoes2Window();

private:
    Ui::Shoes2Window *ui;
};

#endif // SHOES2WINDOW_H
