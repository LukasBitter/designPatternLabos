#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H
#include "drawinginterface.h"

// ABSTRACT CLASS, CONNOT BE INSTANCIATED
class AbstractShape
{
    public:
        AbstractShape(DrawingInterface*);
        virtual ~AbstractShape();
        // PURE VIRTUAL METHODS TO BE IMPLEMENTED BY A DERIVED CLASS
        virtual void draw() =0;
    protected:
        // ABSTRACT CLASS POINTER THAT WILL USE APPROPRIATE DERIVED CLASSE METHODS
        DrawingInterface *interface;
    private:
};

#endif // ABSTRACTSHAPE_H
