#include "dp2.h"

using namespace std;

DP2::DP2()
{
    //ctor
}

DP2::~DP2()
{
    //dtor
}

// Second way of drawing a line
void DP2::drawline(double x1, double x2, double y1, double y2)
{
    cout<<"V2 Drawing line from [x: "<<x1<<", y: "<<y1<<"] to [x: "<<x2<<", y: "<<y2<<"]"<<endl;
}

// Second way of drawing a circle
void DP2::drawcircle(double x, double y, double r)
{
    cout<<"V2 Drawing circle [x: "<<x<<", y: "<<y<<", radius: "<<r<<"]"<<endl;
}
