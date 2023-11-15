// P008_Arreglos_V0.cpp : 
// Mau Cabrera
// Solución con arreglos

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string Nombres[3];
    int Anio[3];
    std::string Autor[3];
    //Bucle para capturar datos.
    for (int i = 0; i <= 2; i++)
    {
        std::cout << "Favor de ingresar el titulo del juego no.:" << i+1 << std::endl;
        getline(std::cin, Nombres[i]);
        std::cout << "Favor de ingresar el año en el que fue creado ese juego: \n";
        std::cin >> Anio[i];
        std::cout << "Favor de ingresar el autor del juego: \n";
        std::cin.ignore();
        getline(std::cin, Autor[i]);
    }
    //Bucle para mostrar datos.
    for (int j = 0; j <= 2; j++)
    {
        std::cout << "El libro " << j+1 << " se llama " << Nombres[j] << std::endl;
        std::cout << "El libro " << j+1 << " se hizo en el año " << Anio[j] << std::endl;
        std::cout << "El autor del libro " << j+1 << " se llama " << Autor[j] << std::endl;
    }
}
