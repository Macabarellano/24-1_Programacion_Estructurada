// P007_RepasoBucle_V1.cpp.cpp : 
// Mauricio Cabrera
//Utilizar el ciclo While y Do While como contadores.

#include <iostream>

int main()
{
	bool con = true;
	while (con)
	{

	int i = 0;
	while (i < 100)
	{
		std::cout << "El contador while va en: " << i << " " << std::endl;
		i++;
	}
	i = 0;
	do
	{
		std::cout << "El contador do while va en: " << i << " " << std::endl;
		i++;
		
	} while (i<100);
		for (i = 0; i < 100;i++)
		{
			std::cout << "El contador for va en: " << i << " " << std::endl;
	}

		std::cout << "Deseas repetir?? 1.- Si 0.- No: \n";
	std::cin >> con;
	}
}
