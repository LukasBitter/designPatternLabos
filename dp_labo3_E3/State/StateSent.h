/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

#include "State.h"
#include "Order.h"

/** \brief
 * Specialized state indicating that the order has been sent.
 */
class CStateSent : public CState
{
public:

    /** \brief
     * Process the order that's in this state and change it's state accordingly.
     * \param Order COrder*     The order that must be processed and it's state changed.
     * \return Doesn't return anything.
     */
	void ProcessOrder(COrder* Order);
};
