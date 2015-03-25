#ifndef COMPONENT_H
#define COMPONENT_H

#include <qpainter.h>

class Component
{
public:
    Component();
    virtual ~Component();
    virtual void draw(QPainter *p, int height, int width) = 0;
    virtual void add(Component *c);

protected:
};

#endif // COMPONENT_H
