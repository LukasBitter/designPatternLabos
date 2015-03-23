#ifndef V1DRAWINGIMPLEMENTATION_H
#define V1DRAWINGIMPLEMENTATION_H

#include "iostream"

#include "drawinginterface.h"
#include "dp1.h"

using namespace std;

class V1DrawingImplementation : public DrawingInterface
{
    public:
        V1DrawingImplementation();
        virtual ~V1DrawingImplementation();

        // IMPLEMENTATION OF PURE VIRTUAL MEHTODS OF PARENT CALSS "DRWINGINTERFACE"
        void drawLine(double x1, double y1, double x2, double y2);
        void drawCircle(double x, double y, double r);

    protected:
    private:
};

#endif // V1DRAWINGIMPLEMENTATION_H
