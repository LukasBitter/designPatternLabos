#pragma once
#include "MealMenu.h"
#include "Enums.h"

class CAbstractFactory
{
public:
	CAbstractFactory();
	~CAbstractFactory();
	// Creates a menu according to the MenuType supplied by the caller.
	static CMealMenu* CreateMeal(EMenuType MenuType);
};
