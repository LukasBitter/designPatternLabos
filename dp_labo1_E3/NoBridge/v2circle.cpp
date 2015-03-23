#include "v2circle.h"

V2Circle::V2Circle(double _x, double _y, double _r): x(_x), y(_y), r(_r)
{
    //ctor
}

V2Circle::~V2Circle()
{
    //dtor
}

void V2Circle::draw()
{
    // CALLING PROTECTED METHOD OF PARENT
    this->drawCircle(x, y, r);
}
