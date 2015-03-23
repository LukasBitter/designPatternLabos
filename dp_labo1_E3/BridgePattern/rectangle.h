#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "abstractshape.h"

class Rectangle : public AbstractShape
{
    public:
        Rectangle(double _x, double _y, double _w, double _h,DrawingInterface *_interface);
        virtual ~Rectangle();

        // IMPLEMENTATION OF PURE VIRTUAL MEHTOD OF PARENT CALSS "ABSTRACTSHAPE"
        void draw();

    protected:
    private:
        double x, y, w, h;
};

#endif // RECTANGLE_H
