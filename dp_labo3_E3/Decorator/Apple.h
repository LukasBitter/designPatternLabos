/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

class CApple :
	public CLeaf
{
public:
	CApple() { Name = "Apple"; HasSeed = true; }
	~CApple() {};
	void Print(){ std::cout << Name; }
	bool IsWithSeed() { return HasSeed; }
};
