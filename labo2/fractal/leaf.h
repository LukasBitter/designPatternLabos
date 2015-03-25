#ifndef LEAF_H
#define LEAF_H

#include <component.h>
#include <complex.h>
#include <qpainter.h>


class Leaf : public Component
{
public:
    Leaf(Complex c, int d);
    ~Leaf();

    void draw(QPainter *p, int height, int width);

private:
    Complex z;
    int deep;
};

#endif // LEAF_H
