#ifndef ACCESSORIESWINDOW_H
#define ACCESSORIESWINDOW_H

#include <QMainWindow>

namespace Ui {
class AccessoriesWindow;
}

class AccessoriesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccessoriesWindow(QWidget *parent = nullptr);
    ~AccessoriesWindow();

private:
    Ui::AccessoriesWindow *ui;
};

#endif // ACCESSORIESWINDOW_H
