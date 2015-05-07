/**
    Composite Class - Description File
    Purpose: This class is used to implement a composite which manages a list of components.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <component.h>
#include <qlist.h>
#include <qpainter.h>


class Composite : public Component
{
public:
    Composite();
    ~Composite();
    void add(Component *c);
    void add(Component *c, int depth);
    void draw(QPainter *p);
    void draw(QPainter *p, int depth);

    void clear();

    Component* getComponent(int i);
private:
    QList<Component*> comp;
};

#endif // COMPOSITE_H
