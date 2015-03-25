#include "composite.h"

Composite::Composite()
{
}

Composite::~Composite()
{

}

void Composite::draw(QPainter *p, int height, int width)
{
    foreach (Component *c, comp)
    {
        c->draw(p, height, width);
    }
}

void Composite::add(Component *c)
{
    comp.append(c);
}

Component* Composite::getComponent(int i)
{
    return comp.at(i);
}
