#include "circle.h"

Circle::Circle(double _x, double _y, double _r, DrawingInterface *_interface):
        AbstractShape(_interface), x(_x), y(_y), r(_r)
{
}

Circle::~Circle()
{
    //dtor
}

void Circle::draw()
{
    // CALLING ABSTRACT METHOD IN ADEQUATE INTERFACE
    interface->drawCircle(x, y, r);
}
