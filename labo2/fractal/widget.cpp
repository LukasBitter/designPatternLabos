#include "widget.h"
#include <fractalwidget.h>
#include <fractal.h>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(400, 400, 800, 600);
    QVBoxLayout *mainLayout = new QVBoxLayout();

    fw = new FractalWidget(this);
    redraw = new QPushButton("Draw", this);
    label = new QLabel("Click to zoom. Drawing and zooming might take several seconds to load !", this);

    redraw->setMaximumWidth(100);

    mainLayout->addWidget(fw);

    controlWidget = new QWidget(this);
    controlWidget->setFixedHeight(50);
    QHBoxLayout *rightLayout = new QHBoxLayout(controlWidget);

    rightLayout->addWidget(redraw);
    rightLayout->addWidget(label);

    mainLayout->addWidget(controlWidget);


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
