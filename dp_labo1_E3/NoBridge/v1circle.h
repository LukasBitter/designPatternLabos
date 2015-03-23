#ifndef V1CIRCLE_H
#define V1CIRCLE_H

#include "v1shapeimplementation.h"

class V1Circle : protected V1ShapeImplementation
{
    public:
        V1Circle(double x, double y, double r);
        virtual ~V1Circle();
        void draw();
    protected:
    private:
        double x, y, r;
};

#endif // V1CIRCLE_H
