#pragma once
#include "Product.h"
#include <string>

class CHuile :
	public CProduct
{
public:
	CHuile();
	virtual ~CHuile();
	virtual void PrintProduct();
protected:
	EMenuType HuileType;
	std::string StrToPrint;
};
