/**
    Component Class - Description File
    Purpose: This class is used to implement component.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

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
