/**
    Leaf Class - Description File
    Purpose: This class is used to implement leaf of a component.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

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
};

#endif // LEAF_H
