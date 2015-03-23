#include "v1shapeimplementation.h"

V1ShapeImplementation::V1ShapeImplementation()
{
    //ctor
}

V1ShapeImplementation::~V1ShapeImplementation()
{
    //dtor
}


void V1ShapeImplementation::drawLine(double x1, double y1, double x2, double y2)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP1
    DP1::draw_a_line(x1, y1, x2, y2);
}

void V1ShapeImplementation::drawCircle(double x, double y, double r)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP1
    DP1::draw_a_circle(x, y, r);
}
