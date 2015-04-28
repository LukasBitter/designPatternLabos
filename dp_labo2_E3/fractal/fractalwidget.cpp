/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "fractalwidget.h"
#include <qpainter.h>
#include <qpen.h>
#include <complex.h>
#include <QMouseEvent>

FractalWidget::FractalWidget(QWidget *parent) :
    QWidget(parent)
{
    fractal = NewtonFractal::getInstance();
//    fractal->createFractal(this->width(), this->height());

    this->update();
}

void FractalWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    fractal->draw(&painter);
}

void FractalWidget::mousePressEvent(QMouseEvent *e)
{
    fractal->zoom(e->pos(), this->width(), this->height());
    this->update();
}
