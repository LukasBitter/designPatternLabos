#pragma once
#include "Product.h"
#include <string>

class CLegume :
	public CProduct
{
public:
	CLegume();
	virtual ~CLegume();
	virtual void PrintProduct();
protected:
	EMenuType LegumeType;
	std::string StrToPrint;
};
