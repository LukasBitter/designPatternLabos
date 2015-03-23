#ifndef V2CIRCLE_H
#define V2CIRCLE_H

#include "v2shapeimplementation.h"

class V2Circle : protected V2ShapeImplementation
{
    public:
        V2Circle(double x, double y, double r);
        virtual ~V2Circle();
        void draw();
    protected:
    private:
        double x, y, r;
};

#endif // V2CIRCLE_H
