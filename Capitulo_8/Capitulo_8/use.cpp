#include "my.h"
#include <iostream>

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

int main()
{
	//1
	foo = 7;
	print_foo();
	print(99);

	imprimir();

	cin.ignore();
	cin.get();
	return 0;
}