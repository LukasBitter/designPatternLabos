/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Component.h"
#include <iostream>

class CLeaf :
	public CComponent
{
public:
	CLeaf() {};
	virtual ~CLeaf() {};
};
