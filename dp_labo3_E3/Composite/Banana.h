#pragma once
#include "Leaf.h"

class CBanana :
	public CLeaf
{
public:
	CBanana() { Name = "Banana"; HasSeed = false; }
	~CBanana() {};

	void Print() { std::cout << Name; }
	bool IsWithSeed() { return HasSeed; }
};
