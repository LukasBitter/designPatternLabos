#pragma once

#include "State.h"
#include "Order.h"

class CStatePaid : public CState
{
public:
	void ProcessOrder(COrder* Order);
};