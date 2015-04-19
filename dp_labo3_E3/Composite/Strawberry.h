#pragma once
#include "Leaf.h"

class CStrawberry :
	public CLeaf
{
public:
	CStrawberry() { Name = "Strawberry"; HasSeed = false; }
	~CStrawberry() {};
	void Print() { std::cout << Name; }
	bool IsWithSeed() { return HasSeed; }
};
