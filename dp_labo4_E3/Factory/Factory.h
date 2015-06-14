#pragma once
#include "MealMenu.h"
#include "Enums.h"

class Factory
{
public:
	Factory();
	~Factory();
	// Creates a menu according to the MenuType supplied by the caller.
	static CMealMenu* CreateMeal(EMenuType MenuType);
};
