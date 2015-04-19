#pragma once

#include "State.h"
#include "Order.h"

class CStateWaiting : public CState
{
public:
	void ProcessOrder(COrder* Order);
};
