#include <iostream>

using namespace std;

void primero()
{

}

void segundo()
{
	//variables
	int tama�o = 0;
	int tama�o2 = 0;
	char recipiente1;
	char recipiente2;

	//Inicio
	cout << "Ingresa el numero de letras de tu palabra" << endl;
	cin >> tama�o;
	//Se define el tama�o del char
	char* cadena1 = new char[tama�o];

	cout << "Ingresa la palabra:" << endl;
	cin >> cadena1;

	//almaceno el tama�o en una segunda variable para evitar posibles errores de l�gica
	tama�o2 = tama�o;
	
	//Ciclo para poder cambiar de lugar las letras
	for (int i = 0; i < tama�o2/2; i++)
	{
		recipiente1 = cadena1[i];
		recipiente2 = cadena1[tama�o - 1];
		cadena1[tama�o - 1] = recipiente1;
		cadena1[i] = recipiente2;
		tama�o = tama�o - 1;

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