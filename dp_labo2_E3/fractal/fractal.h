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

    void add(Complex z, int x, int y);
    void draw(QPainter *p);
    void createFractal(int width, int height);

    void zoom(QPoint p, int width, int height);
private:
    NewtonFractal();

    void reset();
    Complex nextComplex(Complex z);
    void calculate(int width, int height);

    static NewtonFractal* instance;

    Complex roots[3];

    Composite points;

    int depth;

    double xa;
    double xb;
    double ya;
    double yb;
};

#endif // FRACTAL_H
