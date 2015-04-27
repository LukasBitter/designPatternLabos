/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

#include "Component.h"
#include <vector>

/** \brief
 * A Composite is a collection of Components.
 *
 * A Composite can:
 * - add components to it's collection
 * - print it's contents
 * - indicate wether any of it's components has seeds or not
 */
class CComposite :
	public CComponent
{
public:

    /** \brief
     * Composite constructor. Sets the name of the Composite.
     */
	CComposite();

	/** \brief
     * Composite destructor. Destroys this Composite and the whole Component collection.
     */
	~CComposite();

public:

    /** \brief
     * Add a Component to the Composite's collection.
     * \param Component CComponent* the Component to add.
     * \return Doesn't return anything.
     */
	void AddComponent(CComponent* Component);
	//void RemoveComponent(CComponent* Component); // Not implemented, Future feature?

    /** \brief
     * Print the contents of the Composite's collection.
     * \return Doesn't return anything. Prints on the console.
     */
	void Print();

    /**
     * \return True if any of the components in the Composite's collection has seeds. False otherwise.
     */
	bool IsWithSeed();

private:
    // Contains the collection of components of this composite.
	std::vector<CComponent*> Collection;
};

