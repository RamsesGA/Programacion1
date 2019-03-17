#include <iostream>
#include <string>
#include <iomanip> 
#include <ctype.h> //para toupper y tolower
#include <fstream>
#include <vector>

using namespace std;

void drill();
void hexadecimal();
void octal();
void ocho();
void diez();

void ejercicios();
void ejer1();
void ejer3();
void ejer4();
void ejer6();
void ejer7();
void Hexa();
void Octa();
void Deci();

int main()
{
	int valor = 0;

	cout << " 1 Drill\n 2 Ejercicios" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			drill();
			break;
		case 2:
			ejercicios();
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
//----------------------------------------------------------------------		  -----------------------------------------------------------------------
//----------------------------------------------------------------------		  -----------------------------------------------------------------------
//----------------------------------------------------------------------		  -----------------------------------------------------------------------
//----------------------------------------------------------------------Ejercicios-----------------------------------------------------------------------
void ejercicios()
{
	int valor = 0;

	cout << " Ingresa\n 1-Ejer 1\n 2-Ejer 2\n 3-Ejer 4\n 4-Ejer6\n 5-Ejer 7\n " << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			ejer1();
			break;
		case 2:
			ejer3();
			break;
		case 3:
			ejer4();
			break;
		case 4:
			ejer6();
			break;
		case 5:
			ejer7();
			break;
	default:
		cout << "Error, valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
}
//--------------------------------------------------------------------------------
void ejer1()
{
	string palabra;
	string Palab;
	ofstream crear;

	cout << "Ingresa una palabra en minuscula" << endl;
	cin >> palabra;
	Palab = palabra;
	for (int i = 0; i < palabra.size(); i++)
	{
		Palab[i] = toupper(palabra[i]);
	}

	crear.open("ejer1.txt", ios::out);
	crear << Palab;
	crear.close();
	cin.ignore();
	cin.get();
}
//----------------------------------------------------------------------------------------
void ejer3()
{
	string palabra;
	cout << "Ingresa la palabra para eliminar vocales" << endl;
	cin >> palabra;
	//Ciclo para que en cuanto entre una vocal darle un valor de 0
	for (int i = 0; i < palabra.size(); i++)
	{
		if (palabra[i] == 'a')
		{
			palabra[i] = 0;
		}
		if (palabra[i] == 'e')
		{
			palabra[i] = 0;
		}
		if (palabra[i] == 'i')
		{
			palabra[i] = 0;
		}
		if (palabra[i] == 'o')
		{
			palabra[i] = 0;
		}
		if (palabra[i] == 'u')
		{
			palabra[i] = 0;
		}
		
	}
	//Ciclo de impresion todo diferente a 0
	for (int i = 0; i < palabra.size(); i++)
	{
		if (palabra[i] != 0)
		{
			cout << palabra[i];
		}
	}
	cin.ignore();
	cin.get();
}
//-------------------------------------------------------------------------------------------------------
void ejer4()
{
	int valor = 0;

	cout << " Ingresa 1 para ingresar un numero hexadeciamal\n 2 para un octal\n 3 para un deciaml" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			Hexa();
			break;
		case 2:
			Octa();
			break;
		case 3:
			Deci();
			break;

	default:
		cout << "Valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
}
void Hexa()
{
	int ValorHex;
	
	cout << "Ingresa un valor hexadecimal" << endl;
	cin >> hex >> ValorHex;
	cout << ValorHex << endl;
	cin.ignore();
	cin.get();
}
void Octa()
{
	int ValorOctal = 0;
	int ValorDecimal = 0;
	int Rem = 0;
	int i = 0;

	cout << "Ingresa el valor octal" << endl;
	cin >> ValorOctal;

	while (ValorOctal != 0)
	{
		Rem = ValorOctal % 10;
		ValorOctal /= 10;
		ValorDecimal += Rem * pow(8,i);
		i++;
	}
	cout << ValorDecimal << endl;
	cin.ignore();
	cin.get();
}
void Deci()
{
	int ValorDeci = 0;

	cout << "Ingresa el valor decimal" << endl;
	cin >> ValorDeci;

	cout << ValorDeci << endl;
	cin.ignore();
	cin.get();
}
//-------------------------------------------------------------------------------------------
void ejer6()
{
	string Frase;
	const char NoDeseado[] = {'.', ';', ',', '?', '-'};
	int Switch = 0;

	cout << "Ingresa la frase" << endl;
	cin >> Frase;

	for (int i = 0; i < Frase.size(); i++)
	{
		for (int j = 0; j < strlen(NoDeseado); j++)
		{
			if (Frase[i] == NoDeseado[j])
			{
				Switch = 1;
			}
		}
		if (Switch == 0)
		{
			cout << Frase[i];
		}
		Switch = 0;
	}
	cout << '\n';
	cin.ignore();
	cin.get();
}
//-----------------------------------------------------------------------
void ejer7()
{
	string Frase;
	const char NoDeseado[] = { '.', ';', ',', '?', '-' };
	int Switch = 0;

	cout << "Ingresa la frase" << endl;
	cin >> Frase;

	for (int i = 0; i < Frase.size(); i++)
	{
		for (int j = 0; j < strlen(NoDeseado); j++)
		{
			if (Frase[i] == NoDeseado[j])
			{
				Switch = 1;
			}
		}
		if (Switch == 0)
		{
			cout << Frase[i];
		}
		Switch = 0;
	}
	cout << '\n';
	cin.ignore();
	cin.get();
}
//-----------------------------------------------------------------------
void ejer8()
{
	ofstream Crear;
	string Frase;
	const char NoDeseado[] = { '.', ';', ',', '?', '-' };
	int Switch = 0;

	Crear.open("ejer8.txt", ios::out);
	cout << "Ingresa la frase" << endl;
	cin >> Frase;

	for (int i = 0; i < Frase.size(); i++)
	{
		for (int j = 0; j < strlen(NoDeseado); j++)
		{
			if (Frase[i] == NoDeseado[j])
			{
				Switch = 1;
			}
		}
		if (Switch == 0)
		{
			cout << Frase[i];
			Crear << Frase[i];
		}
		Switch = 0;
	}
	cout << '\n';

	Crear.close();
	cin.ignore();
	cin.get();
}
//---------------------------------------------------------
void ejer9()
{
	string iname;
	string oname;
	string as_bytes;
	vector<int> v;

	// open an istream for binary input from a file:
	cout << "Please enter input file name\n";
	cin >> iname;
	// note: stream mode
	ifstream ifs{ iname,ios_base::binary };
	// binary tells the stream not to try anything clever with the bytes
	if (!ifs)
	{
		cout << "can't open input file "<< iname << endl;
	}
	// open an ostream for binary output to a file:
	cout << "Please enter output file name\n";
	cin >> oname;
	ofstream ofs{ oname,ios_base::binary }; // note: stream mode
	// binary tells the stream not to try anything clever with the bytes
	if (!ofs)
	{
		cout << "can't open output file " << oname << endl;
	}
	// read from binary file:
	//for (int x; ifs.read(as_bytes(x), sizeof(int)); ) // note: reading bytes
	{
		//v.push_back(x);
	}
	// . . . do something with v . . .
	// write to binary file:
	for (int x : v)
	{
		//ofs.write(as_bytes(x), sizeof(int));
	}
}