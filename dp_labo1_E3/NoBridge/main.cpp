#include <iostream>

#include "v1rectangle.h"
#include "v2rectangle.h"
#include "v1circle.h"
#include "v2circle.h"

using namespace std;

int main()
{
    // DECLARATION OF CONCRETE SHAPES
    V1Rectangle *rect1 = new V1Rectangle(1, 1, 100, 80);
    V2Rectangle *rect2 = new V2Rectangle(2, 2, 110, 90);
    V1Circle *circ1 = new V1Circle(1, 1, 20);
    V2Circle *circ2 = new V2Circle(2, 2, 30);

    // CALLING SHAPE DRAW METHOD CALLS CONCRETE IMPLEMENTATION
    // METHOD OF DP1 AND DP2 THROUGH "ABSTRACTSHAPE" CALSS
    rect1->draw();
    rect2->draw();
    circ1->draw();
    circ2->draw();

    return 0;
}
