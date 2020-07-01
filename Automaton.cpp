#include "Automaton.h"
#include "Shop.h"
//#include "Shop.cpp"

template<typename T1, typename T2>
Automaton<T1, T2>::Automaton()
{
	shot = "";
	replace = "f";
}

//template<typename T1, typename T2>
//inline Automaton<T1, T2>::Automaton(T1 shot, T1 replace)
//{
//	this->shot = shot;
//	this->replace = replace;
//}

template<typename T1, typename T2>
Automaton<T1, T2>::~Automaton()
{
}

template<typename T1, typename T2>
T1 Automaton<T1, T2>::GetShot()
{
	return shot;
}

template<typename T1, typename T2>
void Automaton<T1, T2>::SetShot(T1 shot)
{
	this->shot = shot;
}

template<typename T1, typename T2>
T1 Automaton<T1, T2>::GetReplace()
{
	return replace;
}

template<typename T1, typename T2>
void Automaton<T1, T2>::SetReplace(T1 replace)
{
	this->replace = replace;
}
