/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Decorator.h"

class CDecoratorEquals :
	public CDecorator
{
public:
	CDecoratorEquals(CComponent* ComponentToDecorate);
	virtual ~CDecoratorEquals();
};
