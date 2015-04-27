/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "DecoratorEquals.h"

CDecoratorEquals::CDecoratorEquals(CComponent* ComponentToDecorate) : CDecorator(ComponentToDecorate)
{
	DecorationChar = '=';
}

CDecoratorEquals::~CDecoratorEquals()
{
}
