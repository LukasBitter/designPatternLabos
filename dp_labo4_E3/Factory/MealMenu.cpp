#include "MealMenu.h"
#include <iostream>

using namespace std;

CMealMenu::CMealMenu(EMenuType MenuType)
{
	this->MenuType = MenuType;
}

CMealMenu::~CMealMenu()
{
}

// Add a product to the menu
void CMealMenu::AddProductToMenu(CProduct* Product)
{
	(this->Products).push_back(Product);
}

void CMealMenu::PrintMenu()
{
	vector<CProduct*>::iterator iProduct;
	for (CProduct* iProduct : Products)
	{
		iProduct->PrintProduct();
	}
}

void CMealMenu::DeleteMenu()
{
	vector<CProduct*>::iterator iProduct;
	for (CProduct* iProduct : Products)
	{
		delete iProduct;
	}

	this->Products.clear();
}
