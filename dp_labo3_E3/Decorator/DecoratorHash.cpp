/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "DecoratorHash.h"

CDecoratorHash::CDecoratorHash(CComponent* ComponentToDecorate) : CDecorator(ComponentToDecorate)
{
	DecorationChar = '#';
}

CDecoratorHash::~CDecoratorHash()
{
}
