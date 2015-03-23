#include <iostream>
#include "v1drawingimplementation.h"
#include "v2drawingimplementation.h"
#include "abstractshape.h"
#include "circle.h"
#include "rectangle.h"

using namespace std;

int main()
{
    // Interface instantiacion
    DrawingInterface* v1 = new V1DrawingImplementation();
    DrawingInterface* v2 = new V2DrawingImplementation();

    // Instanciation of four AbstractShapes specifying the API to use: V1 or V2
    AbstractShape *circle1 = new Circle(1, 1, 20, v1);
    AbstractShape *circle2 = new Circle(1, 1, 20, v2);
    AbstractShape *rect1 = new Rectangle(2, 2, 100, 50, v1);
    AbstractShape *rect2 = new Rectangle(2, 2, 110, 55, v2);

    // Calling adequate concrete implementation of the shapes
    // according to specified API when creating the shapes above
    circle1->draw();
    circle2->draw();
    rect1->draw();
    rect2->draw();

    return 0;
}
