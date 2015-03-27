#include "composite.h"
#include "leaf.h"
#include <QListIterator>
#include <qdebug.h>

Composite::Composite()
{
}

Composite::~Composite()
{
    foreach(Component *c, comp)
    {
        delete c;
    }
}

void Composite::draw(QPainter *p)
{
    foreach (Component *c, comp)
    {
        c->draw(p);
    }
}

void Composite::draw(QPainter *p, int depth)
{
    if(!comp.empty())
    {
        if(depth == 0)
        {
            QListIterator<Component*> i(comp);
            if(i.hasNext()) i.next();
            while(i.hasNext())
            {
                i.next()->draw(p);
            }
        }
        else
        {
            comp.at(0)->draw(p, depth - 1);
        }
    }
}

void Composite::add(Component *c)
{
    comp.append(c);
}

void Composite::add(Component *c, int depth)
{
    if(comp.empty())
    {
        comp.append(new Composite());
    }
    if (depth == 0)
    {
        comp.append(c);
    }
    else
    {
        comp.at(0)->add(c, depth - 1);
    }
}

Component* Composite::getComponent(int i)
{
    return comp.at(i);
}

void Composite::clear()
{
    foreach(Component *c, comp)
    {
        delete c;
    }
    comp.clear();
}
