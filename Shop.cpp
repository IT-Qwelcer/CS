#include "Shop.h"
#include "Ammunition.h"
//#include "Ammunition.cpp"

template<typename T1, typename T2>
Shop<T1, T2>::Shop(/*T2 size, T1 ammunition*/)
{
	//this->size = size;
	//this->ammunition = ammunition;
	size = 9;
}

template<typename T1, typename T2>
Shop<T1, T2>::~Shop()
{
}

template<typename T1, typename T2>
T2 Shop<T1, T2>::GetSize()
{
	return size;
}

//template<typename T1, typename T2>
//T1 Shop<T1, T2>::GetAmmunition()
//{
//	return ammunition;
//}
