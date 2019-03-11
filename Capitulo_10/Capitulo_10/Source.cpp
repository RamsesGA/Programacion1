#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>
#include <stdlib.h>

using namespace std;

void Ofstream();
void Ifstream();
void coordenadas();
void Mydata();
void Ejer1();
void temperatura();
void Ejer3();
void Ejer4();

//Clase para representar puntos.
class Point 
{
public:
	vector <vector<int>>Coordenadas;

	Point(){}
	Point(vector <vector<int>> datos)
	{
		Coordenadas = datos;
	}

};
//----------------------------------------------------------------------------------------------------------------------
int main()
{
	int valor = 0;

	cout << "Ingresa\n 1 para usar el ifstream (modo lectura)\n 2 para el ofstream (creacion de archivos)" << endl;
	cout << " 3 drill 2\n 4 Drill 4\n 5 Ejercicio 1\n 6 Ejercicio 2\n 7 Ejercicio 3\n 8 Ejercicio 4\n" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1: 
			Ifstream();
			break;
		case 2:
			Ofstream();
			break;
		case 3:
			coordenadas();
			break;
		case 4:
			Mydata();
			break;
		case 5:
			Ejer1();
			break;
		case 6:
			temperatura();
			break;
		case 7:
			Ejer3();
			break;
		case 8: 
			Ejer4();
			break;
	default:
		cout << "Error, valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
	return 0; 
}
//----------------------------------------------------------------------------------------------------------------------

void  Ifstream()
{
	//Abrir un fichero para solo lectura
	string iname;

	cout << "Introduzca el nombre del archivo de entrada : ";
	cin >> iname;
	ifstream ist{ iname }; // ist is an input stream for the file named name
	if (!ist)
	{
		cout << "No se puede abrir el archivo de entrada  " << iname << endl;
	}
}

void Ofstream()
{
	//Para crear un archivo y el usuario defina el nombre
	cout << "Introduzca el nombre del archivo de salida: ";
	string oname;
	cin >> oname;
	ofstream ost{ oname }; // ost is an output stream for a file named oname
	if (!ost)
	{
		cout << "No se puede abrir el archivo de salida " << oname << endl;
	}
}
//Drill 3
void coordenadas()
{
	int X = 0;
	int Y = 0;
	vector <int> coordenadas(2);
	vector<vector<int>>original_points;

	cout << "Ingresa 7 coordenadas" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Posicion de X:" << endl;
		cin >> X;
		cout << "Posicion de Y:" << endl;
		cin >> Y;
		coordenadas[0] = X;
		coordenadas[1] = Y;
		original_points.push_back(coordenadas);
	}
	Point enviar(original_points);
	for (int i = 0; i < original_points.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << '[' << original_points[i][j] << ']' << '[' << original_points[i][j] << ']' << endl;
		}
	}
	cin.ignore();
	cin.get();
}
//Drill 4
void Mydata()
{
	string NameText;
	ofstream Archivo;
	ifstream Archivo2;
	string Texto;
	vector <string> Processed_Point;


	cout << "Introduzca el nombre del archivo de salida: ";
	cin >> NameText;
	//creando el archivo .txt
	ofstream ost{ NameText };
	//abriendo el archivo de texto
	Archivo.open(NameText, ios::out);
	//escribiendo
	Archivo << "Bienvenido a la creación de este archivo de texto, disfrutalo editandolo tanto como gustes";
	Archivo.close();
	//Drill 5
	cout << "Introduzca el nombre del archivo de para abrirlo: ";
	cin >> NameText;
	ifstream ist{ NameText };
	if (!ist)
	{
		cout << "No se puede abrir el archivo de entrada  " << NameText << endl;
	}
	Archivo2.open(NameText, ios::in);

	//Mientras no sea el final de archivo
	while (!Archivo2.eof())
	{
		getline(Archivo2, Texto);
		Processed_Point.push_back(Texto);
		for (int i = 0; i < Processed_Point.size(); i++)
		{
			cout << Processed_Point[i] << endl;
		}
	}
	Archivo2.close();
	cin.ignore();
	cin.get();
}
//Ejercicio1
void Ejer1()
{
	ifstream LeerArchivo;
	ofstream EditarArchivo;
	string Datos;
	int Valor = 0;
	string Datos2;
	int Resultado = 0;

	EditarArchivo.open("Suma.txt", ios::out);
	cout << "Ingresa cuantos numeros vas a meter" << endl;
	cin >> Valor;

	cout << "Ingresa los numeros" << endl;
	for (int i = 0; i < Valor; i++)
	{
		cin >> Datos;
		EditarArchivo << Datos << " ";
	}
	EditarArchivo.close();

	LeerArchivo.open("Suma.txt", ios::in);
	while (!LeerArchivo.eof())
	{
		getline(LeerArchivo, Datos2);
	}
	for (int i = 0; i < Datos2.size(); i++)
	{
		Resultado = Datos2[i] + Resultado;
	}
	cout << "El resultado es: " << Resultado << endl;
	LeerArchivo.close();
	cin.ignore();
	cin.get();
}
//Ejercicio2
void temperatura()
{
	ofstream EditorArchivo;
	ifstream LeerArchivo;
	string NombreArchivo;
	string Tempe;


	cout << "Ingresa el nombre del archivo a crear" << endl;
	cin >> NombreArchivo;
	//Creando el archivo
	ofstream ost{ NombreArchivo };
	//Editando el archivo
	EditorArchivo.open(NombreArchivo, ios::out);
	for (int i = 0; i < 5; i++)
	{
		cout << "Ingresa 1 valor de temperatura por " << i + 1 << " -ra vez" << endl;
		cin >> Tempe;
		EditorArchivo << Tempe << " ";
	}

	EditorArchivo.close();
	cin.ignore();
	cin.get();
}
//Ejercicio3
void Ejer3()
{
	vector <string> Datos;
	ifstream Lectura;
	string DatosTemp;
	int Resultado = 0;
	int Contador = 0;
	Lectura.open("raw_temps.txt", ios::in);
	int i = 0;
	while (!Lectura.eof())
	{
		getline(Lectura, DatosTemp);
		if (Datos[i] == " ")
		{
			Contador++;
		}
		i++;
		Datos.push_back(DatosTemp);
	}

	//for (int i = 0; i < Datos.size(); i++)
	//{
	//	cout << Contador << endl;
	//}
	Resultado = Resultado / Datos.size();

	cout << "El promedio es: " << Resultado << endl;
	cin.ignore();
	cin.get();
}
//Ejercicio 4
void Ejer4()
{
	ofstream EditorArchivo;
	ifstream LeerArchivo;
	string NombreArchivo;
	string Tempe;
	double Fahren = 0.0;
	double Celsius = 0.0;


	cout << "Conversor de Celsius a Fahrenheit" << endl;

	cout << "Ingresa el nombre del archivo a crear" << endl;
	cin >> NombreArchivo;
	//Creando el archivo
	ofstream ost{ NombreArchivo };
	//Editando el archivo
	EditorArchivo.open(NombreArchivo, ios::out);

	cout << "Ingresa 5 valores Celsius" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> Celsius;
		Fahren = (Celsius * 9 / 5) + 32;
		Tempe = std::to_string(Fahren);
		EditorArchivo << Tempe << " ";
	}

	EditorArchivo.close();
	cin.ignore();
	cin.get();
}

//410