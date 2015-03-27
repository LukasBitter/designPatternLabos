#include "leaf.h"
#include <QPainter>
#include <fractal.h>

Leaf::Leaf(QPoint c)
{
    this->z = c;
}

Leaf::~Leaf()
{

}

void Leaf::draw(QPainter *p)
{
    p->drawPoint(z);
}
