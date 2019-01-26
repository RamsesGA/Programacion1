#include "Includes.h"

void drill()
{

}

void ejercicios()
{

}



int main()
{
	int valor;
	cout << "Ingresa 1-Los drill\n 2-Los ejercicios\n";
	cin >> valor;

	switch (valor)
	{
		case 1:
			break;
		case 2:
			break;
	default:
		cout << "Ingresaste un valor incorrecto";
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}