#include "composite.h"
#include "leaf.h"
#include <QListIterator>

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

//draws each leaves contained in this composite and subcomposites
void Composite::draw(QPainter *p)
{
    foreach (Component *c, comp)
    {
        c->draw(p);
    }
}

//draws each leaves contained in the subcomposite at the given depth
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

//adding a component at a given depth, intermediate composites will be created if needed
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
