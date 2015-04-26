/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include <string>

class CComponent
{
public:
	CComponent() { };
	virtual ~CComponent() { };

	// Pure virtual functions.
	virtual void Print() = 0;
	virtual bool IsWithSeed() = 0;

protected:
	std::string Name;
	bool HasSeed;
};
