#include "abstractshape.h"

AbstractShape::AbstractShape(DrawingInterface* _interface)
{
    this->interface = _interface;
}

AbstractShape::~AbstractShape()
{
    //dtor
}
