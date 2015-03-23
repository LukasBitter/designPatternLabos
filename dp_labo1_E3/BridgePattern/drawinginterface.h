#ifndef DRAWINGINTERFACE_H
#define DRAWINGINTERFACE_H


// ABSTRACT CLASS, CONNOT BE INSTANCIATED
class DrawingInterface
{
    public:
        DrawingInterface();
        virtual ~DrawingInterface();
        // PURE VIRTUAL METHODS TO BE IMPLEMENTED BY A DERIVED CLASS
        virtual void drawLine(double x1, double y1, double x2, double y2) =0;
        virtual void drawCircle(double x, double y, double r) =0;
    protected:
    private:
};

#endif // DRAWINGINTERFACE_H
