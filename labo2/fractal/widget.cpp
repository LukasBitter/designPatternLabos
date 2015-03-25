#include "widget.h"
#include "ui_widget.h"
#include <fractalwidget.h>
#include <fractal.h>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(400, 400, 400, 400);
    QHBoxLayout *layout = new QHBoxLayout(this);
    fw = new FractalWidget(this);
    layout->addWidget(fw);

    this->setLayout(layout);

    NewtonFractal *nf = NewtonFractal::getInstance();
    nf->createFractal(this->height(), this->width());
}

Widget::~Widget()
{

}
