/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Component.h"
#include <vector>

class CComposite :
	public CComponent
{
public:
	CComposite();
	~CComposite();

public:
	void AddComponent(CComponent* Component);
	void Print();
	bool IsWithSeed();

private:
    // Contains the collection of components of this composite.
	std::vector<CComponent*> Collection;
};
