#include "v1drawingimplementation.h"

V1DrawingImplementation::V1DrawingImplementation()
{
    //ctor
}

V1DrawingImplementation::~V1DrawingImplementation()
{
    //dtor
}


void V1DrawingImplementation::drawLine(double x1, double y1, double x2, double y2)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP1
    DP1::draw_a_line(x1, y1, x2, y2);
}

void V1DrawingImplementation::drawCircle(double x, double y, double r)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP1
    DP1::draw_a_circle(x, y, r);
}
