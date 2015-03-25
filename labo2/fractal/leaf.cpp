#include "leaf.h"
#include <QPainter>
#include <fractal.h>

Leaf::Leaf(Complex c, int d)
{
    this->z = c;
    this->deep = d;
}

Leaf::~Leaf()
{

}

void Leaf::draw(QPainter *p, int height, int width)
{
    NewtonFractal *nf = NewtonFractal::getInstance();
    if(nf->getDisplayDepth() == true)
    {
        p->setOpacity((double)deep / nf->getDepth());
    }
    p->drawPoint(z.GetRealPart() * width/2 + width/2, z.GetImagPart() * height/2 + height/2);
//    p->drawRect(z.GetRealPart() * width/2 + width/2, z.GetImagPart() * height/2 + height/2, 1, 1);
}
