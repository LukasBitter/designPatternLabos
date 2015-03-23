#ifndef V2RECTANGLE_H
#define V2RECTANGLE_H

#include "v2shapeimplementation.h"

class V2Rectangle : protected V2ShapeImplementation
{
    public:
        V2Rectangle(double _x, double _y, double _w, double _h);
        virtual ~V2Rectangle();
        void draw();
    protected:
    private:
        double x, y, w, h;
};

#endif // V2RECTANGLE_H
