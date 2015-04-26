/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

class CApple :
	public CLeaf
{
public:
	CApple();
	~CApple();
	void Print();
	bool IsWithSeed();
};
