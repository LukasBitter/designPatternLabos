/**
    FractalWidget Class - Implementation File
    Purpose: This class is used to implement the paint methods for the Fractal class.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

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
