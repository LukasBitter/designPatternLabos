#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H

// ABSTRACT CLASS, CONNOT BE INSTANCIATED
class AbstractShape
{
    public:
        AbstractShape();
        virtual ~AbstractShape();
        // PURE VIRTUAL METHODS TO BE IMPLEMENTED BY A DERIVED CLASS
        virtual void draw() =0;
    protected:
    private:
};

#endif // ABSTRACTSHAPE_H
