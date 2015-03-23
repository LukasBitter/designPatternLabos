#ifndef V1SHAPEIMPLEMENTATION_H
#define V1SHAPEIMPLEMENTATION_H

#include "iostream"

#include "abstractshape.h"
#include "dp1.h"

using namespace std;

class V1ShapeImplementation : public AbstractShape
{
    public:
        V1ShapeImplementation();
        virtual ~V1ShapeImplementation();
    protected:
        // IMPLEMENTATION OF PURE VIRTUAL MEHTODS OF PARENT CALSS "ABSTRACTSHAPE"
        void drawLine(double x1, double y1, double x2, double y2);
        void drawCircle(double x, double y, double r);
    private:
};

#endif // V1SHAPEIMPLEMENTATION_H
