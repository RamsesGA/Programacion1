#include "Includes.h"

void drill()
{
	//1
	cout << "-----------------------\n";
	cout << "Bien hecho!\n";
	cout << "-----------------------\n";
	//2
	cout << "-----------------------\n";
	cout << "Bien hecho x2!\n";
	cout << "-----------------------\n";
	//3
	cout << "-----------------------\n";
	cout << "Bien hecho x3" << "!" << "\n";
	cout << "-----------------------\n";
	//4
	cout << "-----------------------\n";
	cout << "Bien hecho x4" << '\n';
	cout << "-----------------------\n";
	//5
	cout << "-----------------------\n";
	string res = "7";
	vector<int> valor(10);
	valor[5] = std::stoi(res);
	cout << "Bien hecho x5!\n";
	cout << "-----------------------\n";
	//6
	cout << "-----------------------\n";
	vector<int> valor2(10);
	valor2[5] = 7;
	if (valor2[5] != 7)
	{
		cout << "Bien heccho x6!\n";
	}
	else
	{
		cout << "Bien heccho x6!\n";
	}
	cout << "-----------------------\n";
	//7
	cout << "-----------------------\n";
	int cond = 0;
	if (cond == 0)
	{
		cout << "Bien hecho x7!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//8
	cout << "-----------------------\n";
	bool c = false;
	if (c == false)
	{
		cout << "Bien hecho x8!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//9
	cout << "-----------------------\n";
	std::string a = "ape";
	std::string cosa = "fool";
	if (a > cosa)
	{
		cout << "Bien hecho x9!\n";
	}
	else
	{
		cout << "Bien hecho x9!\n";
	}
	cout << "-----------------------\n";
	//10
	cout << "-----------------------\n";
	string sepa = "ape";
	if (sepa == "fool")
	{
		cout << "Bien hecho x10!\n";
	}
	else
	{
		cout << "Bien hecho x10!\n";
	}
	//11
	cout << "-----------------------\n";
	string sepa2 = "ape";
	if (sepa2 == "fool")
	{
		cout << "Bien hecho x11!\n";
	}
	else
	{
		cout << "Bien hecho x11!\n";
	}
	cout << "-----------------------\n";
	//12
	cout << "-----------------------\n";
	string sepa3 = "ape";
	if (sepa3 == "ape")
	{
		sepa3 = sepa3 + "fool";
		cout << "Bien hecho x12!\n";
	}
	cout << "-----------------------\n";
	//13
	cout << "-----------------------\n";
	vector<char> v2(5);
	for (int i = 0; i < v2.size(); i++);
	{
		cout << "Bien hecho x13!\n";
	}
	cout << "-----------------------\n";
	//14
	cout << "-----------------------\n";
	vector<char> v3(5);
	for (int i = 0; i <= v3.size(); ++i);
	{
		cout << "Bien hecho x14!\n";
	}
	cout << "-----------------------\n";
	//15
	cout << "-----------------------\n";
	string s = "Success";
	for (int i = 0; i <= 6; i++)
	{
		cout << s[i];
	}
	cout << "-----------------------\n";
	//16
	cout << "-----------------------\n";
	bool TF = true;
	if (TF == true)
	{
		cout << "Bien hecho x16!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//17
	cout << "-----------------------\n";
	int x = 2000;
	char charcito = x;
	if (charcito == 2000)
	{
		cout << "Bien hecho x17!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//18
	cout << "-----------------------\n";
	string sepa4 = "Success";
	for (int i = 0; i <= sepa4.size(); i++)
	{
		cout << sepa4[i];
	}
	cout << "-----------------------\n";
	//19
	cout << "-----------------------\n";
	vector <int> valor3(5);
	for (int i = 0; i <= valor3.size(); i++);
	{
		cout << "Bien hecho x19!\n";
	}
	cout << "-----------------------\n";
	//20
	cout << "-----------------------\n";
	int i = 0;
	int j = 9;
	while (i <= 10)
	{
		if (j > i)
		{
			cout << "Bien hecho x20!\n";
		}
		i++;
	}
	cout << "-----------------------\n";
	//21
	cout << "-----------------------\n";
	int par = 2;
	double impar = 5;

	impar = impar / (par + 2);

	if (impar == 2 * par + 0.5)
	{
		cout << "Bien hecho x21!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//22
	cout << "-----------------------\n";
	string sepa5 = "Success";
	for (int i = 0; i <= sepa5.size(); i++)
	{
		cout << sepa5[i];
	}
	cout << "-----------------------\n";
	//23
	cout << "-----------------------\n";
	int ini = 0;
	int jota = 10;
	while (ini <= 10)
	{
		if (jota > ini)
		{
			cout << "Bien hecho x23!\n";
		}
		else
		{
			cout << "Fail!\n";
		}
		ini++;
	}
	cout << "-----------------------\n";
	//24
	cout << "-----------------------\n";
	int equis = 4;
	double impar2 = 5 / (x + 2);
	if (impar2 = 2 * x + 0.5)
	{
		cout << "Bien hecho x24!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
	cout << "-----------------------\n";
	//25
	cout << "-----------------------\n";
	cout << "Bien hecho FINAL!\n";
	cout << "-----------------------\n";
}

void ejercicios()
{
	//2
	cout << "-------------------------------\n";
	cout << "Ejemplo: " << endl;
	cout << "double ctok(double c)" << endl;
	cout << "{" << endl;
	cout << "	double k = c + 273.15;" << endl;
	cout << "	return k;" << endl;
	cout << "}" << endl;
	cout << "-------------------------------\n";
	//3
	cout << "-------------------------------\n";
	double celsi = 0;
	double kel = 0;
	double KelMinimo = -273.15;

	//Celsius a kelvin
	cout << "Ingresa la temperatura en Celsius: " << endl;
	cin >> celsi;

	kel = celsi + 273.15;

	if (kel < KelMinimo)
	{
		error("La temperatura no existe");
	}
	else
	{
		cout << "La temperatura en kelvin es de " << kel << endl;
	}
	cout << "-------------------------------\n";
	//4
	cout << "-------------------------------\n";
	double celsi2 = 0;
	double kel2 = 0;
	double KelMinimo2 = 0;

	//Celsius a kelvin
	cout << "Ingresa la temperatura en Celsius: " << endl;
	cin >> celsi2;

	kel2 = celsi2 + 273.15;

	if (kel2 < KelMinimo2)
	{
		error("La temperatura no existe");
	}
	else
	{
		cout << "La temperatura en kelvin es de " << kel2 << endl;
	}
	cout << "-------------------------------\n";
	//5
	cout << "-------------------------------\n";
	double celsi3 = 0;
	double kel3 = 0;
	double celsiMinimo = -273.15;

	//Kelvin a Celsius
	cout << "Ingresa la temperatura en Kelvin: " << endl;
	cin >> kel3;

	celsi3 = kel3 - 273.15;

	if (celsi3 < celsiMinimo)
	{
		error("La temperatura no existe");
	}
	else
	{
		cout << "La temperatura en celsius es de " << celsi3 << endl;
	}
	cout << "-------------------------------\n";
	//6
	cout << "-------------------------------\n";
	double celsi4 = 0;
	double fahr = 0;

	cout << "Ingresa el valor Celsius: " << endl;
	cin >> celsi4;
	cout << "Ingresa los grados Fahrenheit: " << endl;
	cin >> fahr;

	celsi4 = (celsi4 * (9 / 5)) + 32;
	fahr = (fahr - 32) * (5 / 9);
	cout << "Celsius a Fahrenheit " << celsi4 << endl;
	cout << "Fahrenheit a Celsius " << fahr << endl;
	cout << "-------------------------------\n";
	//7
	cout << "-------------------------------\n";
	int valA = 0;
	int valB = 0;
	int valC = 0;
	int resu = 0;
	cout << "Calculadora para la forma ax2 + bx + c = 0" << endl;

	cout << "Ingresa el valor de a: " << endl;
	cin >> valA;
	cout << "Ingresa el valor de b: " << endl;
	cin >> valB;
	cout << "Ingresa el valor de c: " << endl;
	cin >> valC;

	resu = valB + valC;
	resu = (resu * -1);
	resu = resu / valA;
	cout << "x = 0   o " << "x = " << resu << endl;

	cout << "-------------------------------\n";
	//8
	cout << "-------------------------------\n";
	int Val = 0;
	int Val2 = 0;
	vector <int> Numeros1;
	cout << "Ingresa los numeros: " << endl;
	cin >> Val;
	cout << "Ingresa numeros enteros, si quieres cerrar el ciclo persiona | " << endl;

	for (int i; cin >> i; )
	{
		Numeros1.push_back(i);
	}

	for (int j = 0; j < Val; j++)
	{
		Val2 = Val2 + Numeros1[j];
	}

	cout << "La suma es: " << Val2 << endl;
	cout << "-------------------------------\n";
	//9
	cout << "-------------------------------\n";
	int Val3 = 0;
	int Val4 = 0;
	vector <int> Numeros2;
	cout << "Ingresa los numeros: " << endl;
	cin >> Val3;
	cout << "Ingresa numeros enteros, si quieres cerrar el ciclo persiona | " << endl;

	for (int i; cin >> i; )
	{
		Numeros2.push_back(i);
	}

	if (Val3 > Numeros2.size())
	{
		cout << "Ingreso un valor mas grande de lo requerido" << endl;
		cin >> Val3;
		exit(-1);
	}

	for (int j = 0; j < Val; j++)
	{
		Val4 = Val4 + Numeros2[j];
	}

	cout << "La suma es: " << Val4 << endl;
	cout << "-------------------------------\n";
	//10
	cout << "-------------------------------\n";
	double Valo = 0;
	double Valo2 = 0;
	vector <double> Numeros3;
	cout << "Ingresa los numeros: " << endl;
	cin >> Valo;
	cout << "Ingresa numeros enteros, si quieres cerrar el ciclo persiona | " << endl;

	for (int i; cin >> i; )
	{
		Numeros3.push_back(i);
	}

	for (int j = 0; j < Valo; j++)
	{
		Valo2 = Valo2 + Numeros3[j];
	}

	cout << "La suma es: " << Valo2 << endl;
	cout << "-------------------------------\n";
	//11
	cout << "-------------------------------\n";
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
	cout << "-------------------------------\n";
	//12
	cout << "-------------------------------\n";
	vector <string> NumeroR{ "1529","1237", "3294", "5421" };
	vector <string> NumeroRandom(1);
	string Usuario;
	int NumAdi = 0;

	cout << "Juego de la vaca y el toro" << endl;

	cout << "Ingresa un numero del 0 al 3: " << endl;
	cin >> NumAdi;

	NumeroRandom[0] = NumeroR[NumAdi];

	for (int i = 0; i < NumeroRandom.size(); i++)
	{
		cout << "Ingresa un numero del 0000 al 9999: " << endl;
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
	cout << "-------------------------------\n";
	//13
	cout << "-------------------------------\n";
	int Toros = 0;
	int Vacas = 0;
	int Valor1 = 0;
	int Valor2 = 0;
	int Valor3 = 0;
	int Valor4 = 0;
	int Numcito = 10;
	int Rand;
	vector <int> Valores2;
	cout << "Juego de  la vaca y el toro" << endl;
	cout << "Ingrese un numero aleatorio" << endl;

	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		Rand = rand() % Numcito;
		Valores2.push_back(Rand);
		Numcito = Numcito - 1;
	}

	while (Toros < 4)
	{
		Toros = 0;
		Vacas = 0;
		cout << "Ingrese su primer valor" << endl;
		cin >> Valor1;
		cout << "Ingrese su segundo valor" << endl;
		cin >> Valor2;
		cout << "Ingrese su tercer valor" << endl;
		cin >> Valor3;
		cout << "Ingrese su cuarto valor" << endl;
		cin >> Valor4;

		if (Valor1 == Valores2[0])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Valor2 == Valores2[1])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Valor3 == Valores2[2])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Valor4 == Valores2[3])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}
		cout << "Toros: " << Toros << endl;
		cout << "Vacas: " << Vacas << endl;

	}
	cout << "Adivinaste el numero " << Valor1 << Valor2 << Valor3 << Valor4 << endl;
	cout << "-------------------------------\n";
	//14
	cout << "-------------------------------\n";
	string Day;
	int Number;
	int Suma = 0;
	vector < string > Dias;
	vector < int > Numero;

	while (Dias.size() < 6)
	{
		cout << "Ingresu un dia de la semana con su respectivo numero" << endl;
		cin >> Day;
		cin >> Number;

		if (Day == "lunes" || Day == "martes" || Day == "miercoles" || Day == "jueves" || Day == "viernes" || Day == "sabado" || Day == "domigo")
		{
			Dias.push_back(Day);
		}
		else
		{
			cout << "Ese dia no existe" << endl;
			return 1;
		}
		if (Number <= 0 || Number > 31)
		{
			cout << "El numero de dia esta fuera de rango" << endl;
			return 1;
		}
		else
		{
			Numero.push_back(Number);
		}

	}
	for (int i = 0; i < 6; i++)
	{
		Suma = Suma + Numero[i];
	}
	cout << "La suma de todos los dias(numero) es de: " << Suma << endl;

	cout << "-------------------------------\n";
	cin.ignore();
	cin.get();
}


void test()
{

	cin.ignore();
	cin.get();
}


int main()
{
	int valor;
	cout << "Ingresa 1-Los drill\n 2-Los ejercicios\n 3-TEST\n";
	cin >> valor;

	switch (valor)
	{
		case 1:
			drill();
			break;
		case 2:
			ejercicios();
			break;
		case 3:
			test();
			break;
	default:
		cout << "Ingresaste un valor incorrecto";
		break;
	}

	cin.ignore();
	cin.get();
	return 0;
}