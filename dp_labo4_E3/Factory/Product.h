#pragma once
#include "Enums.h"
class CProduct
{
public:
	CProduct();
	virtual ~CProduct();
	EMenuType GetProductType();

	virtual void PrintProduct() = 0;
private:
	EMenuType ProductType;
};
