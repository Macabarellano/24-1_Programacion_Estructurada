#include <iostream>
#include <locale.h> 
#include "string" 
int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	bool sintoma1, sintoma2, sintoma3 = true;
	std::string Nombre;
	std::string Relato;
	char sexo;
	int edad = 0;
	int peso = 0;
	float altura;
	float IMC;
	std::cout << "Bienvenido al consultorio del dr. chapatin!\n";
	std::cout << "tienes dolor de pansa donde si es 1 y donde no es 0\n";
	std::cin >> sintoma1;     
	std::cout << "tienes diarrea donde si es 1 y donde no es 0";
	std::cin >> sintoma2;    
	std::cout << "tienes covid19 donde si es 1 y donde no es 0";
	std::cin >> sintoma3;     
	std::cout << "Dime tu nombre\n";
	std::cin.ignore();
	getline(std::cin, Nombre);
	std::cout << "desde cuando te sientes mal\n";
	getline(std::cin, Relato);
	std::cout << "cuantos anios tienes";
	std::cin >> edad;
	std::cout << "Eres Hombre(h) o Mujer(m)\n";
	std::cin >> sexo;
}
