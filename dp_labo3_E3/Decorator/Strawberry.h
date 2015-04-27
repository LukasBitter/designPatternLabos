/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

class CStrawberry :
	public CLeaf
{
public:
	CStrawberry();
	~CStrawberry();
	void Print();
	bool IsWithSeed();
};
