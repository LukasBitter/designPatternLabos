#include "v2shapeimplementation.h"

V2ShapeImplementation::V2ShapeImplementation()
{
    //ctor
}

V2ShapeImplementation::~V2ShapeImplementation()
{
    //dtor
}

void V2ShapeImplementation::drawLine(double x1, double y1, double x2, double y2)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP2
    DP2::drawline(x1, x2, y1, y2);
}

void V2ShapeImplementation::drawCircle(double x, double y, double r)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP2
    DP2::drawcircle(x, y, r);
}
