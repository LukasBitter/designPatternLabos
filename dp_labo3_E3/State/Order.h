/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

#include "State.h"

class COrder
{
public:
	COrder();
	~COrder();

	void ProcessOrder();
	void setState(CState* State);

private:
	CState* State;
};
