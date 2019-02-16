#include <iostream>
#include <stdexcept>
#include "Includes.h"

using namespace std;

class Name_value
{
	public:
		string nombre;
		string numero;
		Name_value(string name, string number)
			:nombre(name), numero(number){}
};

//------------------------------------------------------------------------------

class Token
{
	public:
	char kind;        // que tipo de token
	double value;		// para números: un valor
	Token(char ch)    // hacer un token de un char
		:kind(ch), value(0) { }
	Token(char ch, double val)		// hacer un token de un personaje y un doble
		:kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream
{
	public:
	Token_stream();   // hacer un Token_stream que lee desde cin
	Token get();      // obtener un Token (get () se define en otra parte)
	void putback(Token t);	// devuelve un token
	
	private:
	bool full;		// ¿Hay un Token en el búfer?
	Token buffer;	// aquí es donde guardamos un token devuelto usando putback ()
};

//------------------------------------------------------------------------------

// El constructor simplemente se llena para indicar que el búfer está vacío:
Token_stream::Token_stream()
	:full(false), buffer(0)		// no Token en búfer
{
}

//------------------------------------------------------------------------------


// La función miembro putback () vuelve a colocar su argumento en el búfer Token_stream:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;		// copia t al buffer
	full = true;	// el búfer ahora está lleno
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
	if (full) // ¿Ya tenemos un Token listo?
	{       
		// eliminar token del búfer
		full = false;
		return buffer;
	}
	char ch;
	cin >> ch;   // tenga en cuenta que >> omite los espacios en blanco (espacio, nueva línea, tabulador, etc.)

	switch (ch)
	{
	case '=':    // Para mostrr el resultado
	case 'x':    // Para salir
	case '{': case '}': case '(': case ')': case '+': case '-': case '*': case '/': case '!':
		return Token(ch);        // deja que cada personaje se represente a si mismo
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);         // vuelve a poner los dígitos en el flujo de entrada
		double val;
		cin >> val;              // leer un número de punto flotante
		return Token('8', val);   // que '8' represente "un número"
	}
	default:
		error("Bad token");
	}
}

//------------------------------------------------------------------------------

Token_stream ts;	// proporciona get () y putback () //Es un objeto tipo token stream

//------------------------------------------------------------------------------

double expression();    // declaración para que primary () pueda llamar a expression ()

//------------------------------------------------------------------------------

// lidiar con números y paréntesis
double primary()
{
	Token t = ts.get();
	switch (t.kind) {

	case '{':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("}", " Falta esa expresion");
			return d;
	}
	case '(':    // manejar '(' expresión ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error(")", " Falta esa expresion");
			return d;
	}
	case '8':            // usamos '8' para representar un número
		return t.value;		// devuelve el valor del número
		break;
	default:
		error("primary expected");
	}
}

//------------------------------------------------------------------------------


// lidiar con *, / y %
double term()
{
	double left = primary();
	Token t = ts.get();        // obtener el siguiente token de token stream
	int facto = int(left);
	int ResFacto = facto;
	int cont = 1;


	while (true) 
	{
		switch (t.kind) {
		case '!':
			//Si el usuario ingresa 0 factorial, le defino directamente el valor de 1 a left para que lo envie.
			if (facto == 0)
			{
				left = 1;
				t = ts.get();
			}
			//Un ciclo para empezar a hacer las multiplicaciones del factorial
			for (int i = 1; i < facto; i++)
			{
				ResFacto = ResFacto * (facto - cont);
				cont++;
			}
			left = ResFacto;
			t = ts.get();
			break;
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // vuelve a poner t en el flujo del token
			return left;
		}
	}
}

//------------------------------------------------------------------------------

// lidiar con + y -
double expression()
{
	double left = term();      // leer y evaluar un término
	Token t = ts.get();        // obtener el siguiente token de token stream

	while (true) 
	{
		switch (t.kind) {
		case '+':
			left += term();    // evaluar el término y agregar
			t = ts.get();
			break;
		case '-':
			left -= term();		// evaluar el término y restar
			t = ts.get();
			break;
		default:
			ts.putback(t);     // vuelve a poner t en el flujo del token
			return left;		// finalmente: no más + o -: devuelve la respuesta
		}
	}
}

//------------------------------------------------------------------------------

string ejercicio()
{
	vector <Name_value> NombreEdad;
	vector <string> Nombres;
	vector <string> Edad;
	string Recibo;
	string Age;
	int Ubicacion = 0;

	do
	{
		cout << "Ingresa el nombre o para detener el programa ingresa NoName" << endl;
		cin >> Recibo;
		cout << "Ingresa la edad o para detener el programa ingresa 0 " << endl;
		cin >> Age;

		Nombres.push_back(Recibo);
		Edad.push_back(Age);
	} while (Recibo != "NoName"  && Age != "0");
	{
	}
	cout << "Ingrese la posicion de la persona" << endl;
	cin >> Ubicacion;

	cout << "Nombre: " << Nombres[Ubicacion] << " y la edad es de " << Edad[Ubicacion] << endl;

	NombreEdad.push_back(Name_value(Nombres[Ubicacion], Edad[Ubicacion]));
}


//------------------------------------------------------------------------------

int main()
{
	cout << "Bienvenido a nuestra calculadora simple. Por favor ingrese expresiones usando números de punto flotante." << endl;
	cout << "Puedes usar, +, -, *, /" << endl;
	cout << "Para mostrar un resultado pon los numeros, la expresion logica y un =" << endl;
	cout << "Ingresa 19 para abrir el ejercicio externo: " << endl;

	try
	{
		double val = 0;
		int val2 = 0;

		while (cin) 
		{
			cin >> val2;
			if (val2 == 19)
			{
				ejercicio();
			}
			Token t = ts.get();
			if (t.kind == 'x') break; // 'q' para salir
			if (t.kind == '=')        // ';' para "imprimir"
				cout << "=" << val << '\n';
			else
				ts.putback(t);

			val = expression();
		}
		keep_window_open();
	}
	catch (exception& e) 
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) 
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
