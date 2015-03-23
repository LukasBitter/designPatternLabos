#include "v2drawingimplementation.h"

V2DrawingImplementation::V2DrawingImplementation()
{
    //ctor
}

V2DrawingImplementation::~V2DrawingImplementation()
{
    //dtor
}

void V2DrawingImplementation::drawLine(double x1, double y1, double x2, double y2)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP2
    DP2::drawline(x1, x2, y1, y2);
}

void V2DrawingImplementation::drawCircle(double x, double y, double r)
{
    // CALLING CONCRETE IMPLEMENTATION OF DP2
    DP2::drawcircle(x, y, r);
}
