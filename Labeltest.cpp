#include "Labeltest.h"
#include "ui_labeltest.h"
#include "ImageLabel.h"

Labeltest::Labeltest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Labeltest)
{
    ui->setupUi(this);

    ImageLabel *imageLabel = new ImageLabel(this);
}

Labeltest::~Labeltest()
{
    delete ui;
}
