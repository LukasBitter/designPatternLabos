/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

#include "State.h"
#include "Order.h"

class CStateSent : public CState
{
public:
	void ProcessOrder(COrder* Order);
};
