#ifndef LABELTEST_H
#define LABELTEST_H

#include <QMainWindow>

namespace Ui {
class Labeltest;
}

class Labeltest : public QMainWindow
{
    Q_OBJECT

public:
    explicit Labeltest(QWidget *parent = 0);
    ~Labeltest();

private:
    Ui::Labeltest *ui;
};

#endif // LABELTEST_H
