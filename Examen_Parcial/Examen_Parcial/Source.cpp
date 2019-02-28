#include <iostream>

using namespace std;

void primero()
{

}

void segundo()
{
	//variables
	int tamaño = 0;
	int tamaño2 = 0;
	char recipiente1;
	char recipiente2;

	//Inicio
	cout << "Ingresa el numero de letras de tu palabra" << endl;
	cin >> tamaño;
	//Se define el tamaño del char
	char* cadena1 = new char[tamaño];

	cout << "Ingresa la palabra:" << endl;
	cin >> cadena1;

	//almaceno el tamaño en una segunda variable para evitar posibles errores de lógica
	tamaño2 = tamaño;
	
	//Ciclo para poder cambiar de lugar las letras
	for (int i = 0; i < tamaño2/2; i++)
	{
		recipiente1 = cadena1[i];
		recipiente2 = cadena1[tamaño - 1];
		cadena1[tamaño - 1] = recipiente1;
		cadena1[i] = recipiente2;
		tamaño = tamaño - 1;

	}

	cout << "Tu palabra volteada es: " << cadena1 << endl;


	cin.ignore();
	cin.get();
	delete[] cadena1;
}


int main()
{
	int valor = 0;
	cout << "Ingresa 1 para abrir el lector de archivos y 2 para invertir una cadena" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			primero();
			break;
		case 2:
			segundo();
			break;
	default:
		cout << "Error, valor fuera de rango" << endl;
		break;
	}

	cin.ignore();
	cin.get();
	return 0;
}