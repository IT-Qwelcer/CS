#pragma once
template<typename T1, typename T2>
class Ammunition
{
public:
	Ammunition();
	~Ammunition();

	T2 GetBullet();

private:
	T2 bullet;
};

