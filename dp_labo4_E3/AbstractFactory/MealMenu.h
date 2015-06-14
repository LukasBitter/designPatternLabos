#pragma once
#include <vector>
#include "Enums.h"
#include "Product.h"

class CMealMenu
{
public:
	CMealMenu(EMenuType MenuType);
	~CMealMenu();

private:
	std::vector<CProduct*> Products;
	EMenuType MenuType;
public:
	// Add a product to the menu
	void AddProductToMenu(CProduct* Product);
	void PrintMenu();
	void DeleteMenu();
};
