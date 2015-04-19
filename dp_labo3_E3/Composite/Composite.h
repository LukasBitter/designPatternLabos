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
	std::vector<CComponent*> Collection;
};
