// P010_Memoria_Din_V0.cpp : 
// Mau Cabrera
// Matriz dinamica

#include <iostream>

int main()
{
	srand(time(NULL));
	//Ingresar N*M Metodo directo 
	/* No funciona...
	int fil  = 0, col = 0;
	std::cout << "Ingresa las filas y columnas: \n";
	std::cin >> fil >> col;
	int matriz[fil][col];
	*/

	//Arreglo Dinámico - 1 dimensión de memoria dinamica
	/*
	int fil = 0;
	std::cout << "Ingresa las filas: \n";
	std::cin >> fil;
	int* arreglo = new int[fil];
	*/

	//Matriz Dinamica metodo new
	/*No funciona
	int fil = 0, col = 0;
	std::cout << "Ingresa las filas y columnas: \n";
	std::cin >> fil >> col;
	int* Matriz = new int[fil][col];
	*/

	//Matriz Dinamica metodo new y puntero de punteros
	int fil, col;
	std::cout << "Ingresa las filas y columnas: \n";
	std::cin >> fil >> col;
	int** Matriz = new int* [fil];
	for (int i =0; i<col;i++)
	{
		Matriz[i] = new int[col];
	}

	//Rellenar la matriz de numeros aleatorios
	for (int a = 0; a < fil; a++)
	{
		for (int b = 0; b < col; b++)
		{
			Matriz[a][b] = rand() % 9;
			std::cout << "Pos["<<a<<"]["<<b<<"]" << Matriz[a][b] << " ";
		}
		std::cout << "\n";
	}

	//Borrar punteros
	for (int j = 0; j < col; j++)
	{
		delete[] Matriz[j];
	}
	delete[] Matriz;
}
