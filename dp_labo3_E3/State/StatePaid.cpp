/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "StatePaid.h"
#include "StateSent.h"
#include "Order.h"

#include <iostream>

void CStatePaid::ProcessOrder(COrder* Order)
{
    std::cout << "<<Paid>> : Order has been paid." << std::endl;
    // Set the new State and destroy the old one.
    Order->setState(new CStateSent());
}
