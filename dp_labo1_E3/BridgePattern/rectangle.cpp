#include "rectangle.h"

Rectangle::Rectangle(double _x, double _y, double _w, double _h, DrawingInterface *_interface): AbstractShape(_interface),
    x(_x), y(_y), w(_w), h(_h)
{

}

Rectangle::~Rectangle()
{
    //dtor
}

void Rectangle::draw()
{
    // CALLING ABSTRACT METHOD IN ADEQUATE INTERFACE
    interface->drawLine(x, y, x+w, y);
    interface->drawLine(x+w, y, x+w, y+h);
    interface->drawLine(x+w, y+h, x, y+h);
    interface->drawLine(x, y+h, x, y);
}
