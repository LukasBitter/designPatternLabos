/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Decorator.h"

/** \brief
 * Concrete Decorator that decorates with a equals (=) pattern.
 */
class CDecoratorEquals :
	public CDecorator
{
public:

    /** \brief
     * Constructor for the concrete specialized DecoratorEquals Decorator.
     */
	CDecoratorEquals(CComponent* ComponentToDecorate);
	virtual ~CDecoratorEquals();
};
