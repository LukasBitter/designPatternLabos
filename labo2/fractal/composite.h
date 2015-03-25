#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <component.h>
#include <qlist.h>
#include <qpainter.h>


class Composite : public Component
{
public:
    Composite();
    void add(Component *c);
    ~Composite();
    void draw(QPainter *p, int height, int width);

    Component* getComponent(int i);
private:
    QList<Component*> comp;
};

#endif // COMPOSITE_H
