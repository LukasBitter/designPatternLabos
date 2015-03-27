#ifndef COMPONENT_H
#define COMPONENT_H

#include <qpainter.h>

class Component
{
public:
    Component();
    virtual ~Component();
    virtual void draw(QPainter *p) = 0;
    virtual void draw(QPainter *p, int d);
    virtual void add(Component *c);
    virtual void add(Component *c, int d);
    virtual void clear();

protected:
};

#endif // COMPONENT_H
