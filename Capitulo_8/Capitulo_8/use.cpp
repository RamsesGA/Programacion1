#include "my.h"
#include <iostream>
#include <vector>

using namespace std;

int foo = 0;

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//void swap_cr(const int&, const int&) //No va a cambiar nada
//{
//	int temp;
//	int a = 0;
//	int b = 0;
//	temp = a;
//	a = b;
//	b = temp;
//}

int swap_final()
{
	//2
	int x = 7;
	int y = 9;
	swap_r(x, y);
	swap_v(7, 9);
	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy);
	swap_v(7.7, 9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);
	swap_v(7.7, 9.9);
	return 0;
}

namespace x
{
	int var;
	void print()
	{
		cout << var;
	}
}

namespace y
{
	int var;
	void print()
	{
		cout << var;
	}
}

namespace z
{
	int var;
	void print()
	{
		cout << var;
	}
}

void imprimir()
{
	x::var = 7;
	x::print();
	using namespace y;
	var = 9;
	print();
	{
		using z::var;
		var = 11;
		using z::print;
		print();
	}
	x::print();
	cin.ignore();
	cin.get();
}


void print2()
{

	int Fibo = 0;
	int Num1 = 1;
	int Num2 = 0;
	int Num3 = 0;

	cout << "Ingresa un limite al Fibonacci: " << endl;
	cin >> Fibo;

	if (Fibo > 1)
	{
		for (int i = 0; i < Fibo; i++)
		{
			Num3 = Num1 + Num2;
			Num1 = Num2;
			Num2 = Num3;

			cout << Num3 << endl;
		}
	}
}


int reverse1()
{
	int valor = 0;
	int valor2 = 0;
	vector <int> valor3;
	//final
	int num1 = 0;
	int num2 = 0;

	cout << "Ingresa un limite de numeros" << endl;
	cin >> valor;

	cout << "Ingresa los numeros" << endl;
	//solo para ingresar
	for (int i = 0; i < valor; i++)
	{
		cin >> valor2;
		valor3.push_back(valor2);
	}

	cout << "----------------------" << endl;
	//para voltear
	for (int i = 0; i < valor3.size()/2; i++)
	{
		num1 = valor3[i];
		num2 = valor3[valor3.size() - i - 1];
		valor3[valor3.size() - i - 1] = num1;
		valor3[i] = num2;
	}

	for (int i = 0; i < valor3.size(); i++)
	{
		cout << valor3[i] << endl;
	}
	return 0;
}

void reverse2(vector <int> revers2)
{

}

int reverse3()
{
	int valor = 0;
	int valor2 = 0;
	vector <string> valor3;
	//final
	int num1 = 0;
	int num2 = 0;

	cout << "Ingresa un limite de numeros" << endl;
	cin >> valor;

	cout << "Ingresa los numeros" << endl;
	//solo para ingresar
	for (int i = 0; i < valor; i++)
	{
		cin >> valor2;
		valor3.push_back(valor2);
	}

	cout << "----------------------" << endl;
	//para voltear
	for (int i = 0; i < valor3.size() / 2; i++)
	{
		num1 = int(valor3[i]);
		num2 = valor3[valor3.size() - i - 1];
		valor3[valor3.size() - i - 1] = num1;
		valor3[i] = num2;
	}

	for (int i = 0; i < valor3.size(); i++)
	{
		cout << valor3[i] << endl;
	}
	return 0;
}

void reverse4(vector <int> revers2)
{

}

int main()
{
	int valor = 0;
	//1
	foo = 7;
	print_foo();
	print(99);

	imprimir();
	
	print2();

	cout << "Ingresa 1 para abrir el ejercicio 5" << endl;
	cin >> valor;

	switch (valor)
	{
	case 1:
		reverse1();
	default:
		cout << "Rip" << endl;
		break;
	}

	cin.ignore();
	cin.get();
	return 0;
}