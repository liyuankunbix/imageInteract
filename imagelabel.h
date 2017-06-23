#ifndef IMAGELABEL_H
#define IMAGELABEL_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QPainter>
#include <QMouseEvent>

class ImageLabel : public QLabel
{
public:

    explicit ImageLabel(QWidget *parent = 0, Qt::WindowFlags f = 0);
    virtual ~ImageLabel();

protected:

    virtual void mousePressEvent(QMouseEvent *evt);
    virtual void mouseMoveEvent(QMouseEvent *ev);
    virtual void paintEvent(QPaintEvent *ev);
    virtual void mouseReleaseEvent(QMouseEvent *evt);

private:
    QScrollArea *scrollArea;
    QPixmap BackgroundPixmap;
    QPixmap SmallPixmap;
    int x, y;

};

#endif // IMAGELABEL_H
