#include "AbstractFactory.h"
#include "Includes.h"
#include <iostream>

CAbstractFactory::CAbstractFactory()
{
}

CAbstractFactory::~CAbstractFactory()
{
}

// Creates a menu according to the MenuType supplied by the caller.
CMealMenu* CAbstractFactory::CreateMeal(EMenuType MenuType)
{
	// Create the menu.
	CMealMenu* CreatedMenu = new CMealMenu(MenuType);

	// Create the menu contents.
	CLegume* Legume;
	CHuile* Huile;
	CHerbe* Herb;

	// Initialize the contents with the correct type.
	switch (MenuType)
	{
	case Cuisson:
		Legume = new CLegumeCuisson();
		Huile = new CHuileCuisson();
		Herb = new CHerbeCuisson();
		break;
	case Potage:
		Legume = new CLegumePotage();
		Huile = new CHuilePotage();
		Herb = new CHerbePotage();
		break;
	case Salad:
		Legume = new CLegumeSalade();
		Huile = new CHuileSalade();
		Herb = new CHerbeSalade();
		break;
	case Vapeur:
		Legume = new CLegumeVapeur();
		Huile = new CHuileVapeur();
		Herb = new CHerbeVapeur();
		break;
	}

	// Add the contents to the menu. No need for delete since the vector contains the pointers.

	CreatedMenu->AddProductToMenu(Legume);
	CreatedMenu->AddProductToMenu(Huile);
	CreatedMenu->AddProductToMenu(Herb);
	return CreatedMenu;
}
