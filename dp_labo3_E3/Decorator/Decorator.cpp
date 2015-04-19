#include "Decorator.h"
#include <iostream>
#include "Leaf.h"

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
	cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << DecorationChar;
	}
	cout << endl;
	DecoratedComponent->Print();
	if (CLeaf* leaf = dynamic_cast<CLeaf*>(DecoratedComponent))
	{
		cout << "\tHas seeds? " << boolalpha << leaf->IsWithSeed();
	}
	cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << DecorationChar;
	}
	cout << endl;
}