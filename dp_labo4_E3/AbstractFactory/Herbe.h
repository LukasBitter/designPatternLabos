#pragma once
#include "Product.h"
#include <string>

class CHerbe :
	public CProduct
{
public:
	CHerbe();
	virtual ~CHerbe();
	virtual void PrintProduct();
protected:
	EMenuType HerbType;
	std::string StrToPrint;
};
