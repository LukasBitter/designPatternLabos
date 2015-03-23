#ifndef V2SHAPEIMPLEMENTATION_H
#define V2SHAPEIMPLEMENTATION_H

#include "iostream"

#include "abstractshape.h"
#include "dp2.h"

using namespace std;

class V2ShapeImplementation : public AbstractShape
{
    public:
        V2ShapeImplementation();
        virtual ~V2ShapeImplementation();
    protected:
        // IMPLEMENTATION OF PURE VIRTUAL MEHTODS OF PARENT CALSS "ABSTRACTSHAPE"
        void drawLine(double x1, double y1, double x2, double y2);
        void drawCircle(double x, double y, double r);
    private:
};

#endif // V2SHAPEIMPLEMENTATION_H
