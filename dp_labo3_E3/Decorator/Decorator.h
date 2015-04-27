/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Component.h"

#define DECORATION_LENGTH 30

/** \brief
 * A Decorator that adds a decoration to a Component while acting as a full-time Component.
 * Since a Decorator is a polymorphic class it should not be used directly, the specialized Decorators must be used instead.
 */
class CDecorator :
	public CComponent
{
public:

    /** \brief
     * Decorator constructor. Creates a special type of Component that decorates another Component.
     * \param CComponent* ComponentToDecorate   The Component to decorate.
     */
	CDecorator(CComponent* ComponentToDecorate);

    /** \brief
     * Virtual destructor of the base class Decorator. Deletes the decorated component.
     */
	virtual ~CDecorator();

    /** \brief
     * Print the contents of the Decorated Component with a special Decoration.
     * \return Doesn't return anything, prints directly to the console.
     */
	void Print();

    /**
     * \return bool True if the decorated Component has seeds. False otherwise.
     */
	bool IsWithSeed();

private:
    // The component that is beeing decorated.
	CComponent* DecoratedComponent;
protected:
    // The decoration itself. Specified in specialized Decorators.
	char DecorationChar;
};
