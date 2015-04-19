#pragma once
#include "Decorator.h"
class CDecoratorStar :
	public CDecorator
{
public:
	CDecoratorStar(CComponent* ComponentToDecorate);
	virtual ~CDecoratorStar();
};
