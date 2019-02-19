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
	return 0;
}


//------------------------------------------------------------------------------

void gramatica()
{
	string gramatica;

	cout << "Ingresa una frase en ingles para checar la gramaatica: " << endl;
	cin >> gramatica;


}

//------------------------------------------------------------------------------

void bulls()
{
	vector <string> NumeroR{ "ABCD","EFGH", "IJKL", "MNOP" };
	vector <string> NumeroRandom(1);
	string Usuario;
	int NumAdi = 0;

	cout << "Juego de la vaca y el toro" << endl;

	cout << "Ingresa una numero del 0 al 3: " << endl;
	cin >> NumAdi;

	NumeroRandom[0] = NumeroR[NumAdi];

	for (int i = 0; i < NumeroRandom.size(); i++)
	{
		cout << "Ingresa una letra del AAAA al ZZZZ, las posibilidades son graciosas: " << endl;
		cin >> Usuario;

		if (Usuario == NumeroRandom[i])
		{
			cout << "Ganaste" << endl;
		}
		else
		{
			cout << "Perdiste" << endl;
		}

	}

	cin.ignore();
	cin.get();
}

//------------------------------------------------------------------------------

void detector()
{
	string numeros;

	cout << "Detector de numeros: " << endl;
	cout << "Ingresa 4 digitos: " << endl;
	cin >> numeros;

	if (numeros.size() >= 4)
	{
		//MILLARES
		if (numeros[0] > '1' || numeros[0] == '0')
		{
			cout << numeros[0] << " Millares" << endl;
		}
		if (numeros[0] == '1')
		{
			cout << numeros[0] << " Millar" << endl;
		}
		//CENTENAS
		if (numeros[1] > '1' || numeros[1] == '0')
		{
			cout << numeros[1] << " Centenas" << endl;
		}
		if (numeros[1] == '1')
		{
			cout << numeros[1] << " Centena" << endl;
		}
		//DECENAS
		if (numeros[2] > '1' || numeros[1] == '0')
		{
			cout << numeros[2] << " Decenas" << endl;
		}
		if (numeros[2] == '1')
		{
			cout << numeros[2] << " Decena" << endl;
		}
		//UNIDADES
		if (numeros[3] > '1' || numeros[1] == '0')
		{
			cout << numeros[3] << " Unidades" << endl;
		}
		if (numeros[3] == '1')
		{
			cout << numeros[3] << " Unidad" << endl;
		}
	}
	else
	{
		cout << "Fuera de rango" << endl;
	}

	cout << "Ingresa cualquier cosa para salir..." << endl;

	cin.ignore();
	cin.get();
}

//------------------------------------------------------------------------------

void permCombi()
{
	int num = 0;
	int numA = 0;
	int numB = 0;
	int numC = 0;
	int final = 0;
	float num2 = 0;
	int decision = 0;
	int cont = 1;

	cout << "Ingresa un numero total" << endl;
	cin >> num;
	cout << "Ingresa un numero de combinaciones o permutaciones" << endl;
	cin >> numA;
	cout << "Ingresa 1 para que tu numero se resuelva por combinacion y 2 para permutacion: " << endl;
	cin >> decision;
	num2 = num;
	switch (decision)
	{
		case 1:
			cout << "Combinaciones" << endl;
			for (int i = 1; i < num; i++)
			{
				num2 = num2 * (num - cont);
				cont++;
			}
			cont = 1;
			numB = num - numA;
			numC = numA;
			for (int j = 1; j < numA; j++)
			{
				numB = numB * (numA - cont);
				cont++;
			}
			cont = 1;
			for (int k = 1; k < numA; k++)
			{
				numC = numC * (numA - cont);
				cont++;
			}

			final = num2 / (numC * numB);
			cout << "Combinaciones posibles = " << final << endl;
			break;
		case 2:
			cout << "Permutaciones" << endl;
			//para sacar n!
			for (int i = 1; i < num; i++)
			{
				num2 = num2 * (num - cont);
				cont++;
			}
			cont = 1;
			numB = num - numA;
			num = numB;
			for (int j = 1; j < num; j++)
			{
				numB = numB * (num - cont);
				cont++;
			}
			cont = 1;
			final = num2 / numB;
			cout << "Permutaciones posibles = " << final << endl;
			break;
	default:
		cout << "Valor no aceptado" << endl;
		break;
	}

}

//------------------------------------------------------------------------------

void expresiones()
{
	string jerar;

	cout << "Bienvenido a las expresiones logicas" << endl;

	cout << "La jerarquia de las expresiones logicas es de esta manera: " << endl;

	cout << "! (no), & (y), ^ (exclusivo o), ~ (complemento), | (o) " << endl;

	cout << "Escribe un ejemplo de como harias un grupo de jerarquia" << endl;
	cin >> jerar;

	cin.ignore();
	cin.get();
}

//------------------------------------------------------------------------------
void tester()
{
	char tist[99];
	string test;
	cout << "Testeador de frases" << endl;

	cout << "Ingresa una frase y al final termina con un espacio y ." << endl;
	cin >> tist;

	gets_s(tist);
	test = tist;

	if (test.back() == '.')
	{
		test.pop_back();
		if (test[-2] == ' ')
		{
			cout << " Bien " << endl;
		}
		else
		{
			cout << " Incorrecto " << endl;
		}
	}
	else
	{
		cout << " Incorrecto " << endl;
	}
	cin.ignore();
	cin.get();
}
//------------------------------------------------------------------------------

void grama()
{
	//Sentence:
	//Noun Verb 
	//Sentence Conjunction Sentence 
	//Conjunction :
	//"and"
	//"or"
	//"but"
	//"the"
	//Noun :
	//"birds"
	//"fish"
	//"C++"
	//Verb :
	//"rules"
	//"fly"
	//"swim"
}
//------------------------------------------------------------------------------

int main()
{
	cout << "Bienvenido a nuestra calculadora simple. Por favor ingrese expresiones usando números de punto flotante." << endl;
	cout << "Puedes usar, +, -, *, /" << endl;
	cout << "Para mostrar un resultado pon los numeros, la expresion logica y un =" << endl;
	cout << "Ingresa 19 para abrir el ejercicio externo" << endl;
	cout << "Ingresa 1 para abrir el programa de gramatica de ingles" << endl;
	//8
	cout << "Ingresa 2 para abrir el juego de los toros y vacas" << endl;
	//9
	cout << "Ingresa 3 para abrir el detector de numeros" << endl;
	//10
	cout << "Ingresa 4 para abrir la calculadora de permutaciones o combinaciones" << endl;
	//7
	cout << "Ingresa 5 expresiones logicas a nivel gramatica" << endl;
	//6
	cout << "Ingresa 6 para abrir el testeador de frases" << endl;
	//5
	cout << "Ingresa 7 para abrir la gramatica" << endl;
	try
	{
		double val = 0;
		int val2 = 0;

		while (cin) 
		{
			cin >> val2;
			if (val2 == 1)
			{
				gramatica();
			}
			if (val2 == 2)
			{
				bulls();
			}
			if (val2 == 3)
			{
				detector();
			}
			if (val2 == 4)
			{
				permCombi();
			}
			if (val2 == 5)
			{
				expresiones();
			}
			if (val2 == 6)
			{
				tester();
			}
			if (val2 == 7)
			{
				grama();
			}
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
