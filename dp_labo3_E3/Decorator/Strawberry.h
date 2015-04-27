/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

/** \brief
 * Concrete Leaf Component class representing an Strawberry.
 */
class CStrawberry :
	public CLeaf
{
public:

    /** \brief
     * Construct an Strawberry Component.
     */
	CStrawberry();
	virtual ~CStrawberry();

	/** \brief
     * Print the name of the Strawberry Component.
     * \return Prints on the console.
     */
	void Print();

	/** \brief
     * \return True if the Strawberry has seeds, False otherwise.
     */
	bool IsWithSeed();
};
