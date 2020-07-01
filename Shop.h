#pragma once
#include "Ammunition.h"
//#include "Ammunition.cpp"

template<typename T1, typename T2>
class Shop : public Ammunition<T1, T2>
{
public:
	Shop(/*T2 size, T1 ammunition*/);
	~Shop();

	T2 GetSize();
	//T1 GetAmmunition();

private:
	T2 size;
	//T1 ammunition;
};

