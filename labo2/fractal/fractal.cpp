#include "fractal.h"
#include "QDebug"
#include <QPen>

#define error 5e-2

NewtonFractal* NewtonFractal::instance = 0;

void NewtonFractal::zoom(QPoint p, int width, int height)
{
    double dx = xb - xa;
    double dy = yb - ya;

    xa = p.x() - dx / 4;
    xb = p.x() + dx / 4;
    ya = p.y() - dy / 4;
    yb = p.y() + dy / 4;

    calculate(width, height);
}

void NewtonFractal::createFractal(int width, int height)
{
    //range
    xa = -2;
    xb = 2;
    ya = xa * (double)height / width;
    yb = xb * (double)height / width;
    calculate(width, height);
}

void NewtonFractal::calculate(int width, int height)
{
    reset();

    //for each point on the screen, we associate a complex number to it and get the basin of attraction it's in, then add it to the corresponding composite
    for (double x = 0; x < width; x += 1) {
        double zx = x * (xb - xa) / (width) + xa;
        for (double y = 0; y < height; y += 1) {
            double zy = y * (yb - ya) / (height) + ya;
            if(zx != 0 || zy != 0)
            {
                this->add(Complex(zx, zy), x, y);
            }
        }
    }
}

NewtonFractal::NewtonFractal()
{
    //declaring the roots for comparison when calculating fractal
    roots[0] = Complex(1.0,0.0);
    roots[1] = Complex(-1.0/2.0, sqrt(3.0)/2.0);
    roots[2] = Complex(-1.0/2.0, -sqrt(3.0)/2.0);

    //we have a composite for each basin of attraction
    points.add(new Composite());
    points.add(new Composite());
    points.add(new Composite());
}

void NewtonFractal::reset()
{
    depth = 0;
    //clearing the composites because memory leaks
    points.getComponent(0)->clear();
    points.getComponent(1)->clear();
    points.getComponent(2)->clear();
}

NewtonFractal* NewtonFractal::getInstance()
{
    if(!instance)
    {
        instance = new NewtonFractal();
    }
    return instance;
}

//Convergence series
Complex NewtonFractal::nextComplex(Complex z)
{
    Complex zp((2 * z * z * z + Complex(1)) / (3 * z * z));
    return zp;
}

void NewtonFractal::draw(QPainter *p)
{
    for(int i = 0; i < depth; i++){ //drawing each layer one after an other
        double x = (double)(depth  - i) / depth; //coloring in function of depth
        x *= x * x; //this gives a better constrast

        //painting basins of attraction separatly
        p->setPen(QPen(QColor((int)(255.0 * x), 0, 0)));
        points.getComponent(0)->draw(p, i);
        p->setPen(QPen(QColor(0, (int)(255.0 * x), 0)));
        points.getComponent(1)->draw(p, i);
        p->setPen(QPen(QColor(0, 0, (int)(255.0 * x))));
        points.getComponent(2)->draw(p, i);
    }
}

void NewtonFractal::add(Complex z, int x, int y)
{
    Complex nextZ(z);
    bool done = false;
    int deep = 0;
    int root = -1;

    while(!done)
    {
        deep++;
        nextZ = nextComplex(nextZ);
        if(Abs(nextZ - roots[0]) < error)
        {
            done = true;
            root = 0;
        }
        if(Abs(nextZ - roots[1]) < error)
        {
            done = true;
            root = 1;
        }
        if(Abs(nextZ - roots[2]) < error)
        {
            done = true;
            root = 2;
        }
    }
    if(deep > depth)
    {
        depth = deep;
    }
    if(root >= 0)
        points.getComponent(root)->add(new Leaf(QPoint(x, y)), deep);
}
