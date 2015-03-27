#include "widget.h"
#include "ui_widget.h"
#include <fractalwidget.h>
#include <fractal.h>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(400, 400, 800, 600);
    QHBoxLayout *mainLayout = new QHBoxLayout();
    QVBoxLayout *rightLayout = new QVBoxLayout();

    fw = new FractalWidget(this);
    redraw = new QPushButton("Draw", this);
    redraw->setMaximumWidth(100);

    mainLayout->addWidget(fw);

    rightLayout->addWidget(redraw);
    mainLayout->addLayout(rightLayout);

    this->setLayout(mainLayout);

    connect(redraw, SIGNAL(clicked()), this, SLOT(draw()));
}

Widget::~Widget()
{

}

void Widget::draw()
{
    NewtonFractal *nf = NewtonFractal::getInstance();
    nf->createFractal(fw->width(), fw->height());
    fw->update();
}
