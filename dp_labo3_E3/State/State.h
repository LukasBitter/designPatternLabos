#pragma once

// Forward declaration of COrder class, otherwise dual inclusion of headers that provoque Linker error.
class COrder;

class CState
{
public:
	virtual void ProcessOrder(COrder* Order) = 0;
	virtual ~CState(){}
};
