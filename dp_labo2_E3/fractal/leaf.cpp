/**
    Leaf Class - Implementation File
    Purpose: This class is used to implement leaf of a component.

    @author Equipe 3 (Bitter Lukas, Horia Mut, Quentin Jeanmonod)
    @date 2015-04-29
*/

#include "leaf.h"
#include <QPainter>
#include <fractal.h>
#include <qdebug.h>

Leaf::Leaf(QPoint c)
{
    this->z = c;
}

Leaf::~Leaf()
{

}

void Leaf::draw(QPainter *p)
{
    p->drawPoint(z);
}
