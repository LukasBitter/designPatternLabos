/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

//#include "State.h"
// Forward declaration of class CState.
class CState;

/** \brief
 * Class representing an Order in a certain State.
 * The state changes dynamically upon a call to the ProcessOrder function.
 */
class COrder
{
public:

    /** \brief
     * Construct a new Order with a "default" State.
     */
	COrder();
	/** \brief
	 * Deconstruct the order and delete it's State object.
	 */
	~COrder();

    /** \brief
     * Process the order and dynamically change it's State.
     * \return Doesn't return anything.
     */
	void ProcessOrder();

    /** \brief
     * Sets the current state.
     * \param State CState*    The new state to set.
     * \return Doesn't return anything.
     */
	void setState(CState* State);

private:
    // Current State of the Order.
	CState* State;
};
