#include "StateSent.h"
#include "Order.h"

#include <iostream>

void CStateSent::ProcessOrder(COrder* Order)
{
	std::cout << "<<Sent>> : The order has been sent." << std::endl;
}