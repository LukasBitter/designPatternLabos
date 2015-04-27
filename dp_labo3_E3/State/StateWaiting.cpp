/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "StateWaiting.h"
#include "StatePaid.h"
#include "Order.h"

#include <iostream>

void CStateWaiting::ProcessOrder(COrder* Order)
{
	std::cout << "<<Waiting>> : Nothing to show." << std::endl;
    // Set the new State and destroy the old one.
	Order->setState(new CStatePaid());
}
