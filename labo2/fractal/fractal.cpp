#include "fractal.h"
#include "QDebug"
#include <QPen>

#define error 5e-2

NewtonFractal* NewtonFractal::instance = 0;

void NewtonFractal::createFractal(int height, int width)
{
    depth = 0;
    //range
    double xa = -2;
    double xb = 2;
    double ya = -2;
    double yb = 2;
    for (double x = 0; x < height; x+=0.5) {
        double zx = x * (xb - xa)/(width - 1) + xa;
        for (double y = 0; y < width; y+=0.5) {
            double zy = y * (yb - ya)/(height - 1) + ya;
            if(zx != 0 || zy != 0)
                this->add(Complex(zx, zy));
        }
    }

//    for(double x = -w / 2; x < w / 2; x += 0.01)
//    {
//        for (double y = -h / 2; y < h / 2; y += 0.01)
//        {
//            if(x != 0.0 || y != 0.0)
//            {
//                this->add(Complex(x, y));
//            }
//        }
//    }
}

NewtonFractal::NewtonFractal()
{
    roots[0] = Complex(1.0,0.0);
    roots[1] = Complex(-1.0/2.0, sqrt(3.0)/2.0);
    roots[2] = Complex(-1.0/2.0, -sqrt(3.0)/2.0);

    points.add(new Composite());
    points.add(new Composite());
    points.add(new Composite());
}

NewtonFractal* NewtonFractal::getInstance()
{
    if(!instance)
    {
        instance = new NewtonFractal();
    }
    return instance;
}

Complex NewtonFractal::nextComplex(Complex z)
{
    Complex zp((2 * z * z * z + Complex(1)) / (3 * z * z));
//    Complex zp;
//    double a = z.GetRealPart();
//    double b = z.GetImagPart();
//    double denominator = 9*pow(a, 4) + 18 * a * a * b * b + 9 * pow(b, 4);
//    double realNumerator = 6 * pow(a,5) + 12 * pow(a, 3) * b * b + 6 * a * pow(b,4);
//    double imagNumerator = 6 * pow(a, 4) * b + 12 * a * a * pow(b, 3) + 6 * pow(b, 5);
//    zp.SetRealPart(realNumerator / denominator);
//    zp.SetImagPart(imagNumerator / denominator);
    return zp;
}

void NewtonFractal::draw(QPainter *p, int height, int width)
{
    p->setRenderHint(QPainter::Antialiasing, true);
    QPen pen;
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    pen.setColor(Qt::red);
    p->setPen(pen);
    points.getComponent(0)->draw(p, height, width);
    pen.setColor(Qt::blue);
    p->setPen(pen);
    points.getComponent(1)->draw(p, height, width);
    pen.setColor(Qt::green);
    p->setPen(pen);
    points.getComponent(2)->draw(p, height, width);
}

void NewtonFractal::add(Complex z)
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
        points.getComponent(root)->add(new Leaf(z, deep));
}

//return the greatest depth amongst leaves
int NewtonFractal::getDepth()
{
    return depth;
}
