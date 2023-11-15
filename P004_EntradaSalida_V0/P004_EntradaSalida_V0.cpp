// P004_EntradaSalida_V0.cpp : 
// Mauricio Cabrera
// Realizar un consultorio médico el cual solicite 3 bool 2 string 1 char 2 int 1 float
//Al final te entrega tu IMC.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;
    std::cout << "Bienvenido al consultorio del dr. chapatin!\n";
    std::cout << "Cual es tu nombre? \n" << std::endl << std::endl;
    getline(std::cin, Nombre);
    std::cout << Nombre << std::endl;
    std::cout << "cuentame que sientes? \n";
    getline(std::cin, Relato);
    std::cout << "así que lo que paso fue? \n" << std::endl;
    std::cout << Relato;
}
