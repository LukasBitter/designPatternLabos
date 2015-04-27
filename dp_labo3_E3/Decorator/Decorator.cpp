/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Decorator.h"
#include "Leaf.h"
#include <iostream>

using namespace std;

CDecorator::CDecorator(CComponent* ComponentToDecorate)
{
    DecoratedComponent = ComponentToDecorate;
}

CDecorator::~CDecorator()
{
    delete DecoratedComponent;
}

void CDecorator::Print()
{
    int length = DECORATION_LENGTH;
    // Decorate!
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << DecorationChar;
    }
    cout << endl;

    DecoratedComponent->Print();
    // Show if the decorated Component has seeds if it's a leaf.
    if (CLeaf* Leaf = dynamic_cast<CLeaf*>(DecoratedComponent))
    {
        cout << "\tHas seeds? " << boolalpha << Leaf->IsWithSeed();
    }

    // Decorate!
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << DecorationChar;
    }
    cout << endl;
}

bool CDecorator::IsWithSeed()
{
    return DecoratedComponent->IsWithSeed();
}
