#include "dp1.h"

using namespace std;

DP1::DP1()
{
    //ctor
}

DP1::~DP1()
{
    //dtor
}

// First way of drawing a line
void DP1::draw_a_line(double x1, double y1, double x2, double y2)
{
    cout<<"V1 Drawing line from [x: "<<x1<<", y: "<<y1<<"] to [x: "<<x2<<", y: "<<y2<<"]"<<endl;
}

// First way of drawing a circle
void DP1::draw_a_circle(double x, double y, double r)
{
    cout<<"V1 Drawing circle [x: "<<x<<", y: "<<y<<", radius: "<<r<<"]"<<endl;
}
