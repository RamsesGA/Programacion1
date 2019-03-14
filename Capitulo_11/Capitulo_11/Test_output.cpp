#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

void drill();
void hexadecimal();
void octal();
void ocho();
void diez();

int main()
{
	int valor = 0;

	cout << " 1 Drill\n " << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			drill();
			break;
	default:
		cout << "Valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}

//Drill
void drill()
{
	//Drill 1 440
	int valor = 0;

	cout << " Ingresa\n 1-Hexadecimal\n 2-Octal 3-Drill 8\n 4-Drill 10" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			hexadecimal();
			break;
		case 2:
			octal();
			break;
		case 3:
			ocho();
			break;
		case 4:
			diez();
			break;
	default:
		cout << "Valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
}

void hexadecimal()
{
	int Año = 0;
	int Resto = 0;
	int Hexadecimal[10];
	int i = 0;

	cout << "Ingresa un valor para hexa:" << endl;
	cin >> Año;
	if (Año >= 16)
	{
		do
		{
			Resto = Año % 16;
			Año = Año / 16;
			Hexadecimal[i] = Resto;
			i++;
		} while (Año >= 16);
		Hexadecimal[i] = Año;
	}
	else
	{
		Hexadecimal[i] = Año;
	}
	while (i >= 0)
	{
		switch (Hexadecimal[i])
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				cout << Hexadecimal[i];
				break;
			case 10:
				cout << 'A';
				break;
			case 11:
				cout << 'B';
				break;
			case 12:
				cout << 'C';
				break;
			case 13:
				cout << 'D';
				break;
			case 14:
				cout << 'E';
				break;
			case 15:
				cout << 'F';
				break;
		default:
			break;
		}
		i--;
	}

	cin.ignore();
	cin.get();
}

void octal()
{
	int Valor = 0;
	int Octal = 0;
	int i = 1;
	int Unidad = 0;

	cout << "Ingresa un numero para octal:" << endl;
	cin >> Valor;
	while (Valor != 0)
	{
		Unidad = Valor % 8;
		Octal = Octal + Unidad * i;
		Valor = Valor / 8;
		i = i * 10;
	}
	cout << "Octal: " << Octal << endl;

	cin.ignore();
	cin.get();
}

void ocho()
{
	int a, b, c, d = 0;

	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	cin.ignore();
	cin.get();
}

void diez()
{

	cout << "Nombre:" << '|' << setw(7) << "Ramses" << '|' << "Apellido paterno:" << '|' << setw(9) << "Guerrero" << endl;

	cin.ignore();
	cin.get();
}