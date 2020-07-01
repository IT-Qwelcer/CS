#pragma once
#include "Shop.h"
//#include "Shop.cpp"

template<typename T1, typename T2>
class Automaton : public Shop<T1, T2>
{
public:
	Automaton();
	//Automaton(T1 shot, T1 replace);
	~Automaton();

	T1 GetShot();
	void SetShot(T1 shot);
	T1 GetReplace();
	void SetReplace(T1 replace);

private:
	T1 shot;
	T1 replace;
};

