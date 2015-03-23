#ifndef V2DRAWINGIMPLEMENTATION_H
#define V2DRAWINGIMPLEMENTATION_H

#include "iostream"

#include "drawinginterface.h"
#include "dp2.h"

using namespace std;

class V2DrawingImplementation : public DrawingInterface
{
    public:
        V2DrawingImplementation();
        virtual ~V2DrawingImplementation();

        // IMPLEMENTATION OF PURE VIRTUAL MEHTODS OF PARENT CALSS "DRWINGINTERFACE"
        void drawLine(double x1, double y1, double x2, double y2);
        void drawCircle(double x, double y, double r);

    protected:
    private:
};

#endif // V2DRAWINGIMPLEMENTATION_H
