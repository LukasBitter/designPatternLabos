#include "fractalwidget.h"
#include <qpainter.h>
#include <qpen.h>

#include <complex.h>

FractalWidget::FractalWidget(QWidget *parent) :
    QWidget(parent)
{
    fractal = NewtonFractal::getInstance();

    this->update();
}

void FractalWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setBrush(Qt::black);
    painter.drawRect(0,0, this->width(), this->height());
    fractal->draw(&painter, this->height(), this->width());
}

void FractalWidget::resizeEvent(QResizeEvent *)
{
//    fractal->createFractal(this->height(), this->width());
}
