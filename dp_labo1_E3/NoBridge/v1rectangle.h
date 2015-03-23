#ifndef V1RECTANGLE_H
#define V1RECTANGLE_H

#include "v1shapeimplementation.h"

class V1Rectangle : protected V1ShapeImplementation
{
    public:
        V1Rectangle(double _x, double _y, double _w, double _h);
        virtual ~V1Rectangle();
        void draw();
    protected:
    private:
        double x, y, w, h;
};

#endif // V1RECTANGLE_H
