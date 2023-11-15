// P009_Punteros_V0.cpp : 
// Este archivo contiene la sintaxys de punteros 
// Punteros

#include <iostream>
#include <Windows.h>

int main()
{
    //Funciones de control
    system("pause");
    system("CLS");
    Sleep(100);

    //Punteros
    int variable = 0;
    int* apuntador = &variable;

    std::cout << "El valor de la variable es: " << variable
        << std::endl;
    *apuntador = 20;
    std::cout << "El valor de la variable es: " << variable
        << std::endl;
    std::cout << "El valor del apuntador es: " << apuntador
        << std::endl;
    std::cout << "El valor de la variable desde el";
       std::cout <<" apuntador es : " << *apuntador
        << std::endl;
       std::cout << "Dirección de la variable es: " <<
           &variable << std::endl;
    //Borrar el apuntador
    apuntador = NULL;

}
