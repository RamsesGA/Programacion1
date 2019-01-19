#include "Includes.h"

using namespace std;

void Uno()
{
	//Try this #1
	string name;
	double age;

	cout << "Ingresa tu nombre: " << endl;
	cin >> name;
	cout << "Ingresa tu edad: " << endl;
	cin >> age;
	age = age * 12;
	cout << name << " tu edad en meses es de " << age << endl;
	cin.ignore();
	cin.get();
}

void Dos()
{
	int n;
	//Try this #2
	cout << "Ingresa un valor flotante ";
	cin >> n;
	cout<< "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\ntres veces n == " << 3 * n
		<< "\nsuma n == " << n + n
		<< "\nn al cuadrado == " << n * n
		<< "\nla mitad de n == " << n / 2
		<< "\nraiz cuadrada of n == " << sqrt(n)
		<< '\n';
	cin.ignore();
	cin.get();
}

void Tres()
{
	//Try this #3
	string previo = " ";
	string presente;

	while (cin >> presente)
	{
		if (previo == presente)
		{
			cout << "Palabra repetida: " << presente << '\n';
		}
		previo = presente;
	}
}

void Cuatro()
{
	//Try this #4
	string s = "Adios, mundo cruel";
	cout << s << '\n';
	cin.ignore();
	cin.get();
}

void Cinco()
{
	//Try this #5
	double num = 0;
	
	while (cin >> num)
	{
		int i = num;
		char c = i;
		int i2 = c;
		cout << "num==" << num
			<< "i==" << i
			<< "i2==" << i2
			<< "char(" << c << ")\n";
	}
}

void Seis()
{
	string name;
	string name2;
	char amigo = 0;
	int age = 0;
	//Drill 1
	cout << "Ingresa el nombre de la persona a la que va la carta: " << endl;
	cin >> name;
	cout << "Querido(a) " << name << endl;

	//Drill 2
	cout << "Como estas?, yo estoy bien, pero te extraño" << endl;
	cout << "Pues estoy bien, pero ya tengo pareja, asi que deja de hablarme chao" << endl;

	//Drill 3
	cout << "Ingresa el nombre a preguntar: " << endl;
	cin >> name2;
	cout << "Dejame adivinar, esa persona es " << name2 << endl;
	cout << "No, adivina m-mujer o h-hombre" << endl;
	cin >> amigo;
	if (amigo == 'm')
	{
		cout << "Entonces no eres " << name << endl;
		cout << "Si tu haz visto a " << name << " dile que me marque" << endl;
	}
	if (amigo == 'h')
	{
		cout << "Si haz visto a " << name2 << " dile a ella que me marque" << endl;
	}
	cout << "Ingresa tu edad: " << endl;
	cin >> age;
	if (age <= 0 || age>=110)
	{
		cout << "Estas bromeando";
	}
	if (age <= 12)
	{
		cout << "Te veo cuando tengas age+1" << endl;
	}
	if (age == 17)
	{
		cout << "El siguiente año ya vas a poder votar" << endl;
	}
	if (age >= 70)
	{
		cout << "Espero y disfrutes tu retiro" << endl;
	}
	cout << "Bueno, este es el final, con cariño " << name << endl;
	cin.ignore();
	cin.get();
}

void ejercicios()
{
	//2
	double milla;
	double km;
	cout << "--------------------------------------------------";
	cout << "Ingresa millas:" << endl;
	cin >> milla;
	km = milla * 1.60934;
	cout << "Kilometros: " << km << endl;
	cout << "--------------------------------------------------";

	//3
	int num;
	//double int = 0; //Combinación no valida de especificadores de tipo
	string num2;

	//4
	int val1;
	int val2;
	double val3;
	cout << "--------------------------------------------------";
	cout << "Ingresa un numero:" << endl;
	cin >> val1;
	cout << "Ingresa un numero 2:" << endl;
	cin >> val2;
	if (val1 > val2)
	{
		cout << val1 << " es el numero mayor" << endl;
	}
	else
	{
		cout << val2 << " es el numero mayor" << endl;
	}
	val3 = val1 + val2;
	cout << "La suma es de " << val3 << endl;
	val3 = val1 - val2;
	cout << "La resta es de " << val3 << endl;
	val3 = val1 * val2;
	cout << "La multiplicacion es de " << val3 << endl;
	val3 = val1 / val2;
	cout << "La divicion es de " << val3 << endl;
	cout << "--------------------------------------------------";

	//5
	double valur1;
	double valur2;
	double valur3;
	cout << "--------------------------------------------------";
	cout << "Ingresa un numero:" << endl;
	cin >> valur1;
	cout << "Ingresa un numero 2:" << endl;
	cin >> valur2;
	if (valur1 > valur2)
	{
		cout << valur1 << " es el numero mayor" << endl;
	}
	else
	{
		cout << valur2 << " es el numero mayor" << endl;
	}
	valur3 = valur1 + valur2;
	cout << "La suma es de " << val3 << endl;
	valur3 = valur1 - valur2;
	cout << "La resta es de " << valur3 << endl;
	valur3 = valur1 * valur2;
	cout << "La multiplicación es de " << valur3 << endl;
	valur3 = valur1 / valur2;
	cout << "La divicion es de " << valur3 << endl;
	cout << "--------------------------------------------------";

	//6
	int Num1;
	int Num2;
	int Num3;
	int NumTemp;
	cout << "--------------------------------------------------";
	cout << "Ingresa el valor 1:" << endl;
	cin >> Num1;
	cout << "Ingresa el valor 2:" << endl;
	cin >> Num2;
	cout << "Ingresa el valor 3:" << endl;
	cin >> Num3;

	if (Num1 > Num2)
	{
		NumTemp = Num1;
		Num1 = Num2;
		Num2 = NumTemp;
	}
	if (Num1 > Num3)
	{
		NumTemp = Num1;
		Num1 = Num3;
		Num2 = NumTemp;
	}
	if (Num2 > Num3)
	{
		NumTemp = Num2;
		Num2 = Num3;
		Num3 = NumTemp;
	}
	cout << "Los numeros de menor a mayor son: " << Num1 << " " << Num2 << " " << Num3 << endl;
	cout << "--------------------------------------------------";

	//7
	string Val1;
	string Val2;
	string Val3;
	string ValTemp;
	cout << "--------------------------------------------------";
	cout << "Ingresa el valor 1:" << endl;
	cin >> Val1;
	cout << "Ingresa el valor 2:" << endl;
	cin >> Val2;
	cout << "Ingresa el valor 3:" << endl;
	cin >> Val3;

	if (Val1 > Val2)
	{
		ValTemp = Val1;
		Val1 = Val2;
		Val2 = ValTemp;
	}
	if (Val1 > Val3)
	{
		ValTemp = Val1;
		Val1 = Val3;
		Val2 = ValTemp;
	}
	if (Val2 > Val3)
	{
		ValTemp = Val2;
		Val2 = Val3;
		Val3 = ValTemp;
	}
	cout << "Las paalabras de menor a mayor son: " << Val1 << " " << Val2 << " " << Val3 << endl;
	cout << "--------------------------------------------------";

	//8
	int par;
	cout << "--------------------------------------------------";
	cout << "Ingresa un numero:" << endl;
	cin >> par;

	if (par%2 == 0)
	{
		cout << "Tu valor es par" << endl;
	}
	else
	{
		cout << "Tu valor no es par" << endl;
	}
	cout << "--------------------------------------------------";

	//9
	string numAdivina;
	int comparador;
	int numAdivina2;

	cout << "--------------------------------------------------";
	cout << "Ingresa 1 si quieres usar numeros o 2 si quieres usar la palabra del numero" << endl;
	cin >> comparador;
	if (comparador == 2)
	{
		cout << "Ingresa la palabra del nuemero, tiene del 0 hasta el 4" << endl;
		cin >> numAdivina;
		if (numAdivina == "cero")
		{
			cout << "0";
		}
		if (numAdivina == "uno")
		{
			cout << "1";
		}
		if (numAdivina == "dos")
		{
			cout << "2";
		}
		if (numAdivina == "tres")
		{
			cout << "3";
		}
		if (numAdivina == "cuatro")
		{
			cout << "4";
		}
	}
	else
	{
		cout << "Ingresa el numero" << endl;
		cin >> numAdivina2;
		cout << numAdivina2;
	}
	cout << "--------------------------------------------------";

	//10
	string operando;
	int numb1;
	int numb2;
	cout << "--------------------------------------------------";
	cout << "Ingresa el operador:" << endl;
	cin >> operando;
	cout << "Ingresa el numero:" << endl;
	cin >> numb1;
	cout << "Ingresa el otro numero" << endl;
	cin >> numb2;
	
	if (operando == "+")
	{
		numb1 = numb1 + numb2;
		cout << "La suma es: " << numb1 << endl;
	}
	if (operando == "-")
	{
		numb1 = numb1 - numb2;
		cout << "La resta es: " << numb1 << endl;
	}
	if (operando == "*")
	{
		numb1 = numb1 * numb2;
		cout << "La multiplicacion es: " << numb1 << endl;
	}
	if (operando == "/")
	{
		numb1 = numb1 / numb2;
		cout << "La divicion es: " << numb1 << endl;
	}
	cout << "--------------------------------------------------";

	//11
	int pennies; //1
	int nickels; //5
	int dimes; //10
	int quarters; //25
	int halfD; //50
	int dollar; //100
	double final;

	cout << "--------------------------------------------------";
	cout << "Cuantos pennies tienes" << endl;
	cin >> pennies;
	cout << "Cuantos nickels tienes" << endl;
	cin >> nickels;
	cout << "Cuantos dimes tienes" << endl;
	cin >> dimes;
	cout << "Cuantos quarters tienes" << endl;
	cin >> quarters;
	cout << "Cuantos half dollars tienes" << endl;
	cin >> halfD;
	cout << "Cuantos dollar tienes" << endl;
	cin >> dollar;

	final = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfD * 50) + (dollar * 100);
	cout << "Ahora te dire cuantos centavos tienes en total: " << final << endl;
	final = final * 0.01;
	cout << "Ahora te dire dolares centavos tienes en total: " << final << endl;
	cout << "--------------------------------------------------";
	cin.ignore();
	cin.get();
}

int main()
{
	int valor;
	cout << "Ingresa\n1-Try this #1\n2-Try this #2\n3-Try this #3\n4-Try this #4\n5-Try this #5\n6-Drill\n7-Ejercicios\n" << endl;
	cin >> valor;
	if (valor == 1)
	{
		Uno();
	}
	if (valor == 2)
	{
		Dos();
	}
	if (valor == 3)
	{
		Tres();
	}
	if (valor == 4)
	{
		Cuatro();
	}
	if (valor == 5)
	{
		Cinco();
	}
	if (valor == 6)
	{
		Seis();
	}
	if (valor == 7)
	{
		ejercicios();
	}
	return 0;
}