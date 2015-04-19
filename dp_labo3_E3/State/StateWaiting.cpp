#include "StateWaiting.h"
#include "StatePaid.h"
#include "Order.h"

#include <iostream>

void CStateWaiting::ProcessOrder(COrder* Order)
{
	std::cout << "<<Waiting>> : Nothing to show." << std::endl;
	Order->setState(new CStatePaid());
}