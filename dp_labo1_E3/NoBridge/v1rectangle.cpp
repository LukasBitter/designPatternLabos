#include "v1rectangle.h"

V1Rectangle::V1Rectangle(double _x, double _y, double _w, double _h): x(_x), y(_y), w(_w), h(_h)
{
    //ctor
}

V1Rectangle::~V1Rectangle()
{
    //dtor
}

void V1Rectangle::draw()
{
    // CALLING PROTECTED METHOD OF PARENT
    this->drawLine(x, y, x+w, y);
    this->drawLine(x+w, y, x+w, y+h);
    this->drawLine(x+w, y+h, x, y+h);
    this->drawLine(x, y+h, x, y);
}
