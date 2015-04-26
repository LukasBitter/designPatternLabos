/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Decorator.h"

class CDecoratorHash :
	public CDecorator
{
public:
	CDecoratorHash(CComponent* ComponentToDecorate);
	virtual ~CDecoratorHash();
};
