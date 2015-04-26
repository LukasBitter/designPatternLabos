/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Order.h"
#include "StateWaiting.h"

COrder::COrder() : State(new CStateWaiting())
{
}

COrder::~COrder()
{
	delete State;
}

void COrder::ProcessOrder()
{
	State->ProcessOrder(this);
}

void COrder::setState(CState* State)
{
	delete this->State;
	this->State = State;
}
