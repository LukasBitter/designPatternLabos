#ifndef LEAF_H
#define LEAF_H

#include <component.h>
#include <complex.h>
#include <qpainter.h>


class Leaf : public Component
{
public:
    Leaf(QPoint c);
    ~Leaf();

    void draw(QPainter *p);

private:
    QPoint z;
//    int deep;
};

#endif // LEAF_H
