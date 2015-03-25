#ifndef FRACTAL_H
#define FRACTAL_H

#include <component.h>
#include <composite.h>
#include <leaf.h>
#include <complex.h>
#include <qpainter.h>

class NewtonFractal
{
public:
    static NewtonFractal* getInstance();

    void add(Complex z);
    void draw(QPainter *p, int height, int width);
    void createFractal(int height, int width);

    int getDepth();
    bool displayDepth();
private:
    NewtonFractal();

    Complex nextComplex(Complex z);

    static NewtonFractal* instance;

    Complex roots[3];

    Composite points;

    int depth;
    bool displayDepth;
};

#endif // FRACTAL_H
