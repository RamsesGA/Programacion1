#include "Includes.h"


struct Token { //la función struct ya viene por default la creación de variables públicas
	char kind;		//Tipo de token
	int value;		//Tipo de valor
	string name;
	Token(char ch)  // Constructor donde solo recibe ch un valor
		:kind(ch), value(0) { }
	Token(char ch, int val) //Constructor donde ch y val reciben un valor
		:kind(ch), value(val) { }
	Token(char ch, string nombre)
		:kind(ch), name(nombre){ }
};

class Token_stream {
public:
	Token_stream() :full(0), buffer(0) { }
	Token get();
	void unget(Token t) { buffer = t; full = true; }
	void ignore(char);
private:
	bool full;
	Token buffer;
};

const char let = 'L';
const char quit = 'E';
const char print = ';';
const char number = '8';
const char name = 'a';
const int k = 1000;
const double pi = 3.1516;

Token Token_stream::get()
{
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch;
	switch (ch) {
	case 'E':
	case 'L':
	case 'F':
	case '(': case ')': case '+': case '-': case '*': case '/': case '%': case ';': case '=': case 's': //Cases para los operadores u otras cositas
		return Token(ch);// deja que cada personaje se represente a si mismo
	case '.':
	case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
	{	
		cin.unget();
		int val;
		cin >> val;// leer un número de punto flotante
		return Token(number, val);//number representa el número
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch;
			cin.unget();
			if (s == "let")
			{
				return Token(let);
			}
			if (s == "quit")
			{
				return Token(quit);
			}
			return Token(name, s);
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
	{
		if (ch == c) return;
	}
}

struct Variable {
	string name;
	int value;
	Variable(string n, int v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s) //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, int d) //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s) //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double primary()
{
	Token t = ts.get();
	switch (t.kind)
	{
		case '(':
		{	
			int d = expression();
			t = ts.get();
			if (t.kind != ')')
			{
				error("')' expected");
			}
			return d;
		}
		case 's':
		{
			int d = expression();
			if (d > 0)
			{
				d = sqrt(d);
				return d;
			}
			else
			{
				cout << "Valor incorrecto" << endl;

			}
		}
		case 'F':
		{
			int d = expression();
			int num1 = 0;
			int incre = 0;
			int resu = 0;
			cout << "Ingresa tu numero a incrementar:" << endl;
			cin >> num1;
			cout << "Ingresa el numero de veces a incrementar:" << endl;
			cin >> incre;

			for (int i = 0; i < incre; i++)
			{
				resu = resu + num1;
			}
			d = resu;
			return d;
		}
		case '%':
		{
			int num1 = 0;
			int num2 = 0;
			int d = expression();

			cout << "Ingresa el numero a multiplicar:" << endl;
			cin >> num1;

			cout << "Ingresa el numero a repetir:" << endl;
			cin >> num2;

			for (int i = 0; i < num2; i++)
			{
				d = pow(num1, num2);
			}
			
			return d;
		}
		case '-':
			return -primary();
		case number:
			return t.value;
		case name:
			return get_value(t.name);
		default:
			error("primary expected");
	}
}

double term()
{
	int left = primary();
	Token t = ts.get();
	while (true) 
	{
		switch (t.kind)
		{
			case '*':
				left *= primary();
				t = ts.get();
				break;
			case '/':
			{	
				int d = primary();
				if (d == 0) error("divide by zero");
				left /= d;
				t = ts.get();
				break;
			}
			default:
				ts.unget(t);
				return left;
		}
	}
}

double expression()
{
	int left = term();
	Token t = ts.get();
	while (true) 
	{
		switch (t.kind) {
		case '+':
			left += term();
			t = ts.get();
			break;
		case '-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

double declaration()
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

class Symbol_table
{
	vector <int> var_table;
};

void help()
{
	cout << "Ingresa los valores y al final ; para poder mostrar el resultado" << endl;
	cout << "Si quieres salir ingresa E" << endl;
	cout << "Si quieres raiz cuadrada ingresa s" << endl;
	cout << "Si da un primary expected, ingresa ; para reiniciar" << endl;
	cout << "Ingresa % para poder iniciar el POW" << endl;
	//1-Creo que le faltaria poder sacar el resultado de un número con un signo antes
	//2-Creo que tambien no debería aceptar letras, solo números.
	//3-Por último le faltaria solo mostrar un modo de incremento, para facilitar a los novatos en una suma
}
int main()
{
	char variable;
	cout << "Ingresa los valores y al final ; para poder mostrar el resultado" << endl;
	cout << "Si quieres salir ingresa E" << endl;
	cout << "Si quieres raiz cuadrada ingresa s" << endl;
	cout << "Si da un primary expected, ingresa ; para reiniciar" << endl;
	cout << "Ingresa % para poder iniciar el POW" << endl;
	cout << "Ingresa M para abrir la ayuda" << endl;
	cout << "Ingresa F para abrir el incrementador" << endl;
	cin >> variable;
	if (variable == 'M')
	{
		help();
	}
	try 
	{
		calculate();
		return 0;
	}
	catch (exception& e) 
	{
		cerr << "exception: " << e.what() << endl;
		char c;
		while (cin >> c && c != ';');
		return 1;
	}
	catch (...) 
	{
		cerr << "exception\n";
		char c;
		while (cin >> c && c != ';');
		return 2;
	}
}