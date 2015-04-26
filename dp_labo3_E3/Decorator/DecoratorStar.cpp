/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "DecoratorStar.h"

CDecoratorStar::CDecoratorStar(CComponent* ComponentToDecorate) : CDecorator(ComponentToDecorate)
{
	DecorationChar = '*';
}

CDecoratorStar::~CDecoratorStar()
{
}
