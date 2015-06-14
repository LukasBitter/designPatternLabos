#include "Factory.h"
#include "Includes.h"
#include <iostream>

Factory::Factory()
{
}

Factory::~Factory()
{
}

// Creates a menu according to the MenuType supplied by the caller.
CMealMenu* Factory::CreateMeal(EMenuType MenuType)
{
	// Create the menu.
	CMealMenu* CreatedMenu = new CMealMenu(MenuType);

	// Create the menu contents.
	CLegume* Legume;

	// Initialize the contents with the correct type.
	switch (MenuType)
	{
	case Cuisson:
		Legume = new CLegumeCuisson();
		break;
	case Potage:
		Legume = new CLegumePotage();
		break;
	case Salad:
		Legume = new CLegumeSalade();
		break;
	case Vapeur:
		Legume = new CLegumeVapeur();
		break;
	}

	// Add the contents to the menu. No need for delete since the vector contains the pointers.

	CreatedMenu->AddProductToMenu(Legume);
	return CreatedMenu;
}
