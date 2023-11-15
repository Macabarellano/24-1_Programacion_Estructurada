// P012_Enum_Estruct_V0.cpp : 
// Mau Cabrera
// Syntaxis de Enumeradores y Estructuras.
// 

#include <iostream>
//Enumeradores
/*
enum Pokemon
{
    impactrueno=986, cabezaso=994, agarre=967, patada=970
};
enum arma_Valo
{
    Classic = 1, larga = 2, cuchillo = 3
};
int main()
{
    Pokemon Pikachu = impactrueno;
    Pokemon Charizard = cabezaso;
    Pokemon Gengar = agarre; 
    Pokemon Bulbasaur = patada;
    int vida = 100;
    std::cout << "El pokemon o ataque? " << Pikachu << std::endl;
    std::cout << "El pokemon o ataque? " << Charizard << std::endl;
    std::cout << "El pokemon o ataque? " << Gengar << std::endl;
    std::cout << "El pokemon o ataque? " << Bulbasaur << std::endl;
    vida = vida - agarre;
}
*/
//structuras
struct Persona
{
    int edad;
    std::string nombre;
    float altura;
    bool vivo = true;
}Alumno;

void main() {
    Persona Pato;
    Pato.altura = 1.77;
    Pato.edad = 18;
    Pato.nombre = "Edgar";
    Pato.vivo = true;
    std::cout << Pato.edad << std::endl;

}