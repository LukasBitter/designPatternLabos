/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Decorator.h"

/** \brief
 * Concrete Decorator that decorates with a star (*) pattern.
 */
class CDecoratorStar :
	public CDecorator
{
public:

    /** \brief
     * Constructor for the concrete specialized DecoratorStar Decorator.
     */
	CDecoratorStar(CComponent* ComponentToDecorate);
	virtual ~CDecoratorStar();
};
