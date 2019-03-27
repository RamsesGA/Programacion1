#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


class Textos
{
public:
	Textos(){}
	//-----------------------------------------------------------------------
	void TXT(int Valor)
	{
		ofstream Crear;
		string NameTexto;
		string Texto;
		int valor = 0;
		char Salir;
		char *EnviarTexto = new char;
		bool Ciclo = true;

		//Inicio
		cout << "Ingresa el nombre del nuevo archivo con .txt" << endl;
		cin >> NameTexto;
		Crear.open(NameTexto, ios::out);
		//Para poder rellenar de datos el archivo nuevo
		system("cls");
		cout << "A partir de ahora puedes editar el archivo" << endl;
		while (Ciclo == true)
		{
			cin.get();
			getline(cin, Texto);
			cin.sync();	
			EnviarTexto = (char*)Texto.c_str();
			Crear << EnviarTexto << '\n';
			
			//Condición para poder salir del ciclo de texto
			cout << "\n    | para salir o 1 para seguir escribiendo" << endl;
			cin >> Salir;
			if (Salir == '|')
			{
				Crear.close();
				exit(0);
			}
		}
	}
	//-----------------------------------------------------------------------
	void TXT(string texto)
	{
		ofstream Editar;
		ifstream Lectura;
		string Texto;
		string NameText;
		string Texto2;
		char* TextoNuevo = new char;
		char Salir;
		int valor = 0;
		bool Ciclo = true;

		//Obtener el nombre del archivo
		cout << "Ingresa el nombre del archivo con .txt" << endl;
		cin >> NameText;
		//Impresión de datoxs del artchivo
		Lectura.open(NameText, ios::in | ios::cur);
		system("cls");
		while (!Lectura.eof())
		{
			getline(Lectura, Texto);
			if (Lectura.eof())
			{
				cout << Texto;
			}
			else
			{
				cout << Texto << endl;
			}
		}
		Editar.open(NameText, ios::app | ios::cur);
		while (Ciclo == true)
		{
			cin.get();
			getline(cin, Texto);
			cin.sync();
			TextoNuevo = (char*)Texto.c_str();
			Editar << TextoNuevo << " ";
			//Condición para poder salir del ciclo de texto
			cout << "\n    | para salir o 1 para seguir escribiendo" << endl;
			cin >> Salir;
			if (Salir == '|')
			{
				Lectura.close();
				Editar.close();
				exit(0);
			}
		}
	}
	//-----------------------------------------------------------------------
	void Imprimir(string operador)
	{
		string NameTexto;
		string Texto;
		ifstream Leer;
		int valor = 0;

		cout << "Ingresa el nombre del archivo con .txt" << endl;
		cin >> NameTexto;

		Leer.open(NameTexto, ios::in);

		if (Leer.fail())
		{
			cout << "Ese documento no existe" << endl;
		}
		while (!Leer.eof())
		{
			getline(Leer, Texto);
			if (Leer.eof())
			{
				cout << Texto;
			}
			else
			{
				cout << Texto << endl;
			}
		}
		cout << "Archivo terminado, presione\n 1-Salir" << endl;
		cin >> valor;
		if (valor == 1)
		{
			Leer.close();
			cin.ignore();
			cin.get();
			exit(0);
		}
		else
		{
			cout << "Valor erroneo" << endl;
			Leer.close();
			cin.ignore();
			cin.get();
			exit(1);
		}
	}
};
//-----------------------------------------------------------------------
int main()
{
	int valorCrear = 0;
	int valorSalida = 0;
	string textoAbrir;
	string textoOperador;
	Textos abrir;

	cout << "----------------------------Editor de textos----------------------------" << endl;

	cout << " Ingresa\n 1-Si quieres crear un archivo o 0 para continuar" << endl;
	cin >> valorCrear;
	cout << " 2-Para abrir uno ya hecho o 0 para continuar" << endl;
	cin >> textoAbrir;
	cout << " << Para imprimir el archivo o 0 para continuar" << endl;
	cin >> textoOperador;
	cout << "3 - Para salir o 0 para iniciar" << endl;
	cin >> valorSalida;

	if (valorCrear == 1)
	{
		system("cls");
		abrir.TXT(valorCrear);
	}
	if (textoAbrir == "2")
	{
		system("cls");
		abrir.TXT(textoAbrir);
	}
	if (textoOperador == "<<")
	{
		system("cls");
		abrir.Imprimir(textoOperador);
	}
	if (valorSalida == 3)
	{
		exit(0);
	}
	else
	{
		cout << "Error, posible dato erroneo" << endl;
		exit(1);
	}
	cin.ignore();
	cin.get();
	return 0;
}