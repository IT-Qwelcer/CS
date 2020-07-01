#include "Ammunition.h"
#include "Ammunition.cpp"
#include "Shop.h"
#include "Shop.cpp"
#include "Automaton.h"
#include "Automaton.cpp"
#include <iostream>
#include <vector>
#include "time.h"

int main(int argc, char** argv)
{
	srand(time(NULL));

	Automaton<std::string, int> AUG; // AUG - Armee Universal Gewehr

	std::vector<int> shop(AUG.GetSize(), AUG.GetBullet());

	std::cout << "\n Information:\n\n\t AUG -> 1/3 (shop)\n\t Shop -> 9/27 (bullet)\n\t Bullet -> 18\n" << std::endl;
	int size = 3;
	do
	{
		std::cout << "\n Shot 'G' -> ";
		std::string shot, replace; shot = replace = ""; std::cin >> shot; AUG.SetShot(shot);
	
		if (AUG.GetShot() != "G" || AUG.GetShot() != "g")
		{
			for (size_t i = 0; i < shop.size(); i++)
			{
				shop.at(i) = 1 + rand() % 3;
			}

			for (size_t i = 0; i < shop.size(); i++)
			{
				if (shop.at(i) != 3)
				{
					std::cout << "\t " << i + 1 << ") bullet -> fail" << std::endl;
				}
				else
				{
					std::cout << "\t " << i + 1 << ") bullet -> killed" << std::endl;
				}
			}
		}
		else
		{
			std::cout << " Error!" << std::endl;
		}

		std::cout << "\n Replace 'F' -> ";
		std::cin >> replace; AUG.SetReplace(replace);

		if (AUG.GetReplace() == "F" || AUG.GetReplace() == "f")
		{
			size--;

			if (size == 1)
			{
				std::cout << "\n Information:\n\n\t AUG -> 3/3 (shop)\n\t Shop -> 9/9 (bullet)\n\t Bullet -> 0\n" << std::endl;
			}
			else if (size == 2)
			{
				std::cout << "\n Information:\n\n\t AUG -> 2/3 (shop)\n\t Shop -> 9/18 (bullet)\n\t Bullet -> 9\n" << std::endl;
			}
		}

	} while (size != 0);

	system("cls");
	std::cout << " Bullet -> 0" << std::endl;

	return 0;
}