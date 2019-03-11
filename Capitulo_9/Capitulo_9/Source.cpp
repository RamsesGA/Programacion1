#include <iostream>
#include <string>
#include <vector>

using namespace std;

void NueveTres();
void NueveSiete();
void NueveSieteCuatro();
struct Date;
class My_vector;

//1
struct CosasReales
{
	int monoBici;
	int bicicleta;
	int triciclo;
	int cuatrimoto;
};

//2
class NombreEdad
{
public:
	vector <string> name;
	vector <double> age;

	NombreEdad(vector <string>nombre, vector <double> edad)
	{
		name = nombre;
		age = edad;
	}
	void print()
	{
		for (int i = 0; i < name.size; i++)
		{
			cout << name[i];
		}
		cout << '\n';
		for (int i = 0; i < age.size(); i++)
		{
			cout << age[i];
		}
		cout << '\n';
	}
};

//2
void NumeroDos()
{
	vector <string> numbre;
	vector <double> edad;
	double edad2;
	string nom;

	cout << "Ingresa el nombre" << endl;
	cin >> nom;
	numbre.push_back(nom);
	cout << "Ingresa la edad" << endl;
	cin >> edad2;
	edad.push_back(edad2);

	NombreEdad Datos(numbre, edad);
	Datos.print();
	cin.ignore();
	cin.get();
}

//5
class Book
{
public:
	int cantidad = 0;
	int libreros = 0;
	int generos = 0;
	int prestados = 0;
	string genre[5] = {"ficcion", "no ficcion", "periodico", "biografias", "niños"};

	Book(int cant, int lib, int gene, int prest)
	{
		cantidad = cant;
		libreros = lib;
		generos = gene;
		prestados = prest;
	}
};

//5 
void libros()
{
	int cantidadLibros = 0;
	int libreros = 0;
	int generos = 0;
	int prestados = 0;
	int valor = 0;
	vector <string> user;
	string User;
	string Pass;

	cout << "Ingresa la cantidad de libros" << endl;
	cin >> cantidadLibros;
	cout << "Ingresa la cantidad de libreros" << endl;
	cin >> libreros;
	cout << "Ingresa la cantidad de generos" << endl;
	cin >> generos;
	cout << "Ingresa la cantidad de prestados" << endl;
	cin >> prestados;

	Book enviar(cantidadLibros, libreros, generos, prestados);

	cout << "Ingresa 1 para poder tener una cuenta en Book" << endl;
	cin >> valor;
	if (valor == 1)
	{
		cout << "Ingresa un nombre de usuario" << endl;
		cin >> User;
		user.push_back(User);
		cout << "Ingresa una contraseña" << endl;
		cin >> Pass;
		user.push_back(Pass);
		Patron enviarDatos(user);
	}
	cin.ignore();
	cin.get();
}

//8
class Patron
{
public:
	vector <string> usuario;
	Patron(vector <string> username)
	{
		usuario = username;
	}
};

//9
class libreria
{
public:
	vector <Book> Libro;
	vector <Patron> Usuario;
};

//9 
struct Transaccion
{
	vector <Book> Libro2;
	vector <Patron> Usuario2;
};

//9.4.2
struct Date2
{
	// year, month, day
	int y, m, d; 
	Date2(){}
	//check for valid date and initialize
	Date2(int year, int month, int day) 
	{
		y = year;
		m = month;
		d = day;
	} 
	//increase the Date by n days
	void add_day(int n) 
	{
	}
	void print()
	{
		cout << y << " " << m << " " << d << endl;
	}
	void next_workday()
	{
		cout << "De lunes a viernes tienes que trabajar" << endl;
	}
};


//13
class racional
{
public:
	int numerador = 0;
	int denominador = 0;

	racional(int num, int rac)
	{
		numerador = num;
		denominador = rac;
		
	}
	void print()
	{
		cout << numerador << '/' << denominador << endl;
	}
};
//13
void racio()
{
	int nume = 0;
	int racio = 0;
	cout << "Ingresa un numerador" << endl;
	cin >> nume;
	cout << "Ingresa un denominador" << endl;
	cin >> racio;
	racional envio(nume, racio);
	envio.print();
}

//14
class dolares
{
public:
	double dolares2 = 0;
	double centavos = 0;

	dolares(int num, int num2)
	{
		dolares2 = num;
		centavos = num2;
	}
	void print()
	{

		cout << dolares2 << '.' << centavos << endl;
	}
};
//14
void dolares2()
{
	int dolllares = 0;
	int centavos = 0;
	cout << "Ingresa un dolllares" << endl;
	cin >> dolllares;
	cout << "Ingresa un centavos" << endl;
	cin >> centavos;
	racional envio(dolllares, centavos);
	envio.print();
}

void f()
{
	//inicializar today
	Date2 today(2019, 03, 06); 
	cout << "Los valores de la variable today" << endl;
	//Funcion para imprimir desde el structg
	today.print(); 
	//Copiando los valores
	Date2 ini_day(today); 
	//Inicializando con la sobrecarga de funciones Date2 en struct
	Date2 tomorrow;
	//Pasamos directamente  los valores, 1 por 1.
	tomorrow.y = today.y;
	tomorrow.m = today.m;
	// add 1 to today
	tomorrow.d = today.d + 1;
	cout << "Los valores de tomorrow" << endl;
	// use tomorrow
	tomorrow.print(); 

	cin.ignore();
	cin.get();
}

int main()
{
	//6, 3, 
	int valor = 0;
	cout << "Ingresa\n 1- para la 9.4.2\n 2- Ejercicio 1\n 3- Ejercicio 2\n" << endl;
	cin >> valor;

	switch (valor)
	{
		case 1:
			f();
			break;
		case 2:
			NumeroDos();
			break;
		case 3:
			libros();
			break;
	default:
		cout << "Valor fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}


void NueveTres()
{
	//// December 31, 1960
	//Date birthday{ 1960,12,31 }; 
	//// ouch! Invalid date (birthday.d==32 makes today invalid)
	//++birthday.d; 
	//// ouch! Invalid date (today.m==14 makes today invalid)
	//Date today{ 1970,2,3 };
	//today.m = 14;
	//
	//// simple Date (control access)
	//class Date {
	//	// year, month, day
	//	int y, m, d; 
	//public:
	//	// check for valid date and initialize
	//	Date(int y, int m, int d); 
	//	// increase the Date by n days
	//	void add_day(int n);
	//	int month() { return m; }
	//	int day() { return d; }
	//	int year() { return y; }
	//	// OK
	//	Date birthday{ 1970, 12, 30 }; 
	//	// error: Date::m is private
	//	birthday.m = 14; 
	//	// we provided a way to read m
	//	cout << birthday.month() << '\n'; 
	//};
}

void NueveSiete()
{
	//Date d1{ 4,5,2005 }; // oops: year 4, day 2005
	//Date d2{ 2005,4,5 }; // April 5 or May 4?
	//
	//enum class Month {
	//	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	//};
	//
	//// simple Date (use Month type)
	//class Date {
	//public:
	//	Date(int y, Month m, int d); // check for valid date and initialize
	//	// . . .
	//private:
	//	int y; // year
	//	Month m;
	//	int d; // day
	//};
	//
	//Date dx1{ 1998, 4, 3 }; // error: 2nd argument not a Month
	//Date dx2{ 1998, 4, Month::mar }; // error: 2nd argument not a Month
	//Date dx2{ 4, Month::mar, 1998 }; // oops: run-time error: day 1998
	//Date dx2{ Month::mar, 4, 1998 }; // error: 2nd argument not a Month
	//Date dx3{ 1998, Month::mar, 30 }; // OK
	//
	//class Year { // year in [min:max) range
	//	static const int min = 1800;
	//	static const int max = 2200;
	//public:
	//	class Invalid { };
	//	Year(int x) : y{ x } { if (x < min || max <= x) throw Invalid{}; }
	//	int year() { return y; }
	//private:
	//	int y;
	//};
	//class Date {
	//public:
	//	Date(Year y, Month m, int d); // check for valid date and initialize
	//	// . . .
	//private:
	//	Year y;
	//	Month m;
	//	int d; // day
	//};
	//
	////Resultado
	//Date dx1{ Year{1998}, 4, 3 }; // error: 2nd argument not a Month
	//Date dx2{ Year{1998}, 4, Month::mar }; // error: 2nd argument not a Month
	//Date dx2{ 4, Month::mar, Year{1998} }; // error: 1st argument not a Year
	//Date dx2{ Month::mar, 4, Year{1998} }; // error: 2nd argument not a Month
	//Date dx3{ Year{1998}, Month::mar, 30 }; // OK
}


void NueveSieteCuatro()
{
	//void some_function(Date& d, const Date& start_of_term)
	//{
	//	int a = d.day(); // OK
	//	int b = start_of_term.day(); // should be OK (why?)
	//	d.add_day(3); // fine
	//	start_of_term.add_day(3); // error
	//}
	//
	//class Date {
	//public:
	//	// . . .
	//	int day() const; // const member: can’t modify the object
	//	Month month() const; // const member: can’t modify the object
	//	int year() const; // const member: can’t modify the object
	//	void add_day(int n); // non-const member: can modify the object
	//	void add_month(int n); // non-const member: can modify the object
	//	void add_year(int n); // non-const member: can modify the object
	//private:
	//	int y; // year
	//	Month m;
	//	int d; // day of month
	//};
	//Date d{ 2000, Month::jan, 20 };
	//const Date cd{ 2001, Month::feb, 21 };
	//cout << d.day() << " — " << cd.day() << '\n'; // OK
	//d.add_day(1); // OK
	//cd.add_day(1); // error: cd is a const
}

//9.4.1
// simple Date (too simple?)
struct Date
{
	// year
	int y;
	// month in year
	int m;
	// day of month
	int d;
};

class My_vector
{
	//vector<int> v; //se declara una variable vector de tipo entero
	//public:
	//int largest() //a partir de aquí en adelante todo se podrá modificar en cualquier función
	//{
	//	int r = 0; 
	//	for (int i = 0; i < v.size(); ++i) //un ciclo para ir desde 0 a lo que tiene el vector V
	//		r = max(r, abs(v[i]));
	//	return r; //se termina regresando los valores que se obtuvieron de la operación pasada
	//	int x;
	//	int y;
	//	int f() //Una funcion para poder tomar el valor de Y
	//	{
	//		int x;
	//		x = 7;
	//		{
	//			int x = y;
	//			++x;
	//		}
	//		++x;
	//		return x; //regresar ese valor pero incrementado a la siguiente vuelta
	//	}
	//}
};