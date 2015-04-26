/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

class CBanana :
	public CLeaf
{
public:
	CBanana();
	~CBanana();
	void Print();
	bool IsWithSeed();
};
