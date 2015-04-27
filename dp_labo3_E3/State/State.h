/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include <iostream>

// #include "Order.h"
// Forward declaration of COrder class, otherwise dual inclusion of headers that provoque Linker error.
class COrder;

/** \brief
 * Class representing an abstract State.
 * When an order is processed it's state is processed as well then changed to reflect the new state.
 */
class CState
{
public:

    /** \brief
     * Process the order. Retrieve the Order and set it's current state to a new one.
     * \param Order COrder*     The Order to process.
     * \return Doesn't return anything.
     */
	virtual void ProcessOrder(COrder* Order) = 0;

    /** \brief
     * Default virtual destructor.
     */
	virtual ~CState(){ }
};
