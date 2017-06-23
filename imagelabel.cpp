#include "ImageLabel.h"

ImageLabel::ImageLabel( QWidget *parent /*= 0*/, Qt::WindowFlags f /*= 0*/ )
    :QLabel(parent)
{
    setMouseTracking(true);

    scrollArea = new QScrollArea();
    scrollArea->setWindowTitle("QScrollArea");
    scrollArea->setWidgetResizable(true);
    scrollArea->setMaximumSize(600,600);
    scrollArea->setMinimumSize(600,400);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setWidget(this);
    scrollArea->show();

    SmallPixmap = QPixmap(50,50);
    SmallPixmap.fill(QColor(255,255,255));

    x = -1;
    y = -1;
}

ImageLabel::~ImageLabel()
{

}

void ImageLabel::mousePressEvent( QMouseEvent *evt )
{
    x = evt->x();
    y = evt->y();
    update();
}

void ImageLabel::mouseReleaseEvent( QMouseEvent *evt )
{
    x = evt->x();
    y = evt->y();
    update();
}

void ImageLabel::mouseMoveEvent( QMouseEvent *evt )
{

}

void ImageLabel::paintEvent(QPaintEvent *ev)
{
    QPainter painter(this);
    //painter.drawPixmap(0, 0, BackgroundPixmap);
    painter.drawPixmap(x, y, SmallPixmap);
}
