/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Leaf.h"

/** \brief
 * Concrete Leaf Component class representing an Apple.
 */
class CApple :
	public CLeaf
{
public:

    /** \brief
     * Construct an Apple Component.
     */
	CApple();
	virtual ~CApple();

    /** \brief
     * Print the name of the Apple Component.
     * \return Prints on the console.
     */
	void Print();

    /** \brief
     * \return True if the Apple has seeds, False otherwise.
     */
	bool IsWithSeed();
};
