/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

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
//    int deep;
    QPoint z;
};

#endif // LEAF_H
