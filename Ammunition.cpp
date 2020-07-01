#include "Ammunition.h"

template<typename T1, typename T2>
inline Ammunition<T1, T2>::Ammunition()
{
	bullet = 0;
}

template<typename T1, typename T2>
Ammunition<T1, T2>::~Ammunition()
{
}

template<typename T1, typename T2>
T2 Ammunition<T1, T2>::GetBullet()
{
	return bullet;
}
