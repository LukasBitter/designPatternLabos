#include "v1circle.h"

V1Circle::V1Circle(double _x, double _y, double _r): x(_x), y(_y), r(_r)
{
    //ctor
}

V1Circle::~V1Circle()
{
    //dtor
}

void V1Circle::draw()
{
    // CALLING PROTECTED METHOD OF PARENT
    this->drawCircle(x, y, r);
}
