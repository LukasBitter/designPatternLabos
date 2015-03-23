#ifndef CIRCLE_H
#define CIRCLE_H
#include "abstractshape.h"

class Circle : public AbstractShape
{
    public:
        Circle(double _x, double _y, double _r, DrawingInterface *_interface);
        virtual ~Circle();

        // IMPLEMENTATION OF PURE VIRTUAL MEHTOD OF PARENT CALSS "ABSTRACTSHAPE"
        void draw();

    protected:
    private:
        double x, y, r;
};

#endif // CIRCLE_H
