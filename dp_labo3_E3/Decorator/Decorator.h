/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Component.h"

#define DECORATION_LENGTH 30

class CDecorator :
	public CComponent
{
public:
	CDecorator(CComponent* ComponentToDecorate);
	virtual ~CDecorator();

	void Print();
	bool IsWithSeed();

private:
	CComponent* DecoratedComponent;
protected:
	char DecorationChar;
};
