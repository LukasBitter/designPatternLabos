/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Decorator.h"

/** \brief
 * Concrete Decorator that decorates with a hash (#) pattern.
 */
class CDecoratorHash :
	public CDecorator
{
public:

    /** \brief
     * Constructor for the concrete specialized DecoratorHash Decorator.
     */
	CDecoratorHash(CComponent* ComponentToDecorate);
	virtual ~CDecoratorHash();
};
