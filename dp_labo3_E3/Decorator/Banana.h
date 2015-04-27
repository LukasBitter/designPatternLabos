/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

/** \brief
 * Concrete Leaf Component class representing an Banana.
 */
class CBanana :
	public CLeaf
{
public:

	/** \brief
     * Construct an Banana Component.
     */
	CBanana();
	virtual ~CBanana();

	/** \brief
     * Print the name of the Banana Component.
     * \return Prints on the console.
     */
	void Print();

	/** \brief
     * \return True if the Banana has seeds, False otherwise.
     */
	bool IsWithSeed();
};
