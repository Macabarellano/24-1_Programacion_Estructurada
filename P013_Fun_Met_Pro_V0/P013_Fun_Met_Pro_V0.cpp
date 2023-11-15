// P013_Fun_Met_Pro_V0.cpp : 
// Mau Cabrera
// Syntaxis de funciones, metodos y procedimientos
// 

#include <iostream>
#include <locale>

void halcon_milenario()//Función de saludo cada que inicias el juego
{
    std::cout << "Hello stranger\n";
}
int suma(int a, int b)
{
    return a + b;
}
int suma2(int a, int b)
{
    std::cout << "Estas en la función suma2\n";
    std::cout << "El resultado de la suma es: " << a+b << std::endl;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    halcon_milenario();//Función que imprime texto
    int num1, num2, res;
    num1 = 10;
    num2 = 5;
    res = suma(num1,num2);
    std::cout << "El resultado de la suma es: " << suma(num1, num2) << std::endl;
    std::cout << "El resultado de la suma es: " << res << std::endl;
    suma2(num1, num2);
}
