#include "DecoratorStar.h"

CDecoratorStar::CDecoratorStar(CComponent* ComponentToDecorate) : CDecorator(ComponentToDecorate)
{
	DecorationChar = '*';
}

CDecoratorStar::~CDecoratorStar()
{
}