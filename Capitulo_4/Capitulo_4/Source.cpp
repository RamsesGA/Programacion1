#include "Includes.h"
#include <string>
#include <sstream>

void try1()
{
	double yen;
	double kroner;
	double pounds;
	double dollar;
	double pesos;
	char cambio;

	cout << "Ingresa tu cantidad de yens, kroner y pounds:" << endl;
	cin >> yen >> kroner >> pounds;
	cout << "Ingresa d si quieres tu conversion en dolares o p si en pesos mexicanos:" << endl;
	cin >> cambio;

	if (cambio == 'd')
	{
		dollar = yen * 0.0091;
		dollar = dollar + (kroner * 0.12);
		dollar = dollar + (pounds * 1.29);
		cout << "Tu total en dolares es de " << dollar << endl;
	}
	else if (cambio == 'p')
	{
		pesos = yen * 0.17;
		pesos = pesos + (kroner * 2.23);
		pesos = pesos + (pounds * 24.58);
		cout << "Tu total en pesos mexicanos es de " << pesos << endl;
	}
	cin.ignore();
	cin.get();
}

void try2()
{
	double yen;
	double kroner;
	double pounds;
	double dollar;
	double pesos;
	char cambio;

	cout << "Ingresa tu cantidad de yens, kroner y pounds:" << endl;
	cin >> yen >> kroner >> pounds;
	cout << "Ingresa d si quieres tu conversion en dolares o p si en pesos mexicanos:" << endl;
	cin >> cambio;

	switch (cambio)
	{
		case 'd':
			dollar = yen * 0.0091;
			dollar = dollar + (kroner * 0.12);
			dollar = dollar + (pounds * 1.29);
			cout << "Tu total en dolares es de " << dollar << endl;
			break;
		case 'p':
			pesos = yen * 0.17;
			pesos = pesos + (kroner * 2.23);
			pesos = pesos + (pounds * 24.58);
			cout << "Tu total en pesos mexicanos es de " << pesos << endl;
			break;
	default:
		cout << "Ingrese la letra que corresponde" << endl;
		break;
	}
	cin.ignore();
	cin.get();
}

void try3()
{
	int contador = 0;
	int abc = 97;
	int cont = 0;

	while (contador < 26)
	{
		cout << char('a' + cont) << '\t' << abc << endl;
		cont++;
		abc++;
		contador++;
	}
	cin.ignore();
	cin.get();
}

void try4()
{
	int abc = 65;

	for (int i = 0; i < 26; i++)
	{
		cout << char('A' + i) << '\t' << abc << endl;
		abc++;
	}
	cin.ignore();
	cin.get();
}

void try5()
{
	int cont = 0;

	for (int i = 0; i <= 10; i++)
	{
		cout << "Valor normal: " << cont << endl;
		cout << "Valor SQRT: " << sqrt(cont) << endl;
		cont++;
	}
	

	cin.ignore();
	cin.get();
}

void try6()
{
	int cont;
	string dislike[] = { "estres", "examenes", "miedo", "romance" };
	string bep = "BLEEP";

	cout << "selecciona una palabra que no te guste" << endl;
	cout << "1-" << dislike[0] << " 2-" << dislike[1] << " 3-" << dislike[2] << " 4-" << dislike[3] << endl;
	cin >> cont;
	switch (cont)
	{
		case 1:
			dislike[0] = bep;
			cout << "1-" << dislike[0] << " 2-" << dislike[1] << " 3-" << dislike[2] << " 4-" << dislike[3] << endl;
			break;
		case 2:
			dislike[1] = bep;
			cout << "1-" << dislike[0] << " 2-" << dislike[1] << " 3-" << dislike[2] << " 4-" << dislike[3] << endl;
			break;
		case 3:
			dislike[2] = bep;
			cout << "1-" << dislike[0] << " 2-" << dislike[1] << " 3-" << dislike[2] << " 4-" << dislike[3] << endl;
			break;
		case 4:
			dislike[3] = bep;
			cout << "1-" << dislike[0] << " 2-" << dislike[1] << " 3-" << dislike[2] << " 4-" << dislike[3] << endl;
			break;
	default:
		cout << "Ingresaste un valor invalido";
		break;
	}
	cin.ignore();
	cin.get();
}
	
void drill()
{
	//1
	cout << "-----------------------------" << endl;
	string cont;
	int num1 = 1;
	int num2 = 2;
	int num3 = 0;

	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> cont)
	{
		if (cont == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			num3 = num3 + (num1 + num2);
			cout << num3 << endl;
		}
	}
	cout << "-----------------------------" << endl;
	//2
	cout << "-----------------------------" << endl;
	string conta;
	int Num1 = 1;
	int Num2 = 2;
	int Num3 = 0;

	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> conta)
	{
		if (conta == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			Num3 = Num3 + (Num1 + Num2);
			cout << "El valor mas pequeno es " << Num1 << " y el mas grande es " << Num3 << endl;
			cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
		}
	}
	cout << "-----------------------------" << endl;
	//3
	cout << "-----------------------------" << endl;
	string contad;
	int val1 = 0;
	int val2 = 0;
	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> contad)
	{
		if (contad == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			cout << "Ingresa primer valor:" << endl;
			cin >> val1;
			cout << "Ingresa el segundo valor" << endl;
			cin >> val2;
			if (val1 > val2)
			{
				cout << "El valor mas grande es " << val1 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
			else
			{
				cout << "El valor mas grande es " << val2 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
		}
	}
	cout << "-----------------------------" << endl;
	//4
	cout << "-----------------------------" << endl;
	string contado;
	double valD1 = 0;
	double valD2 = 0;
	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> contado)
	{
		if (contado == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			cout << "Ingresa primer valor:" << endl;
			cin >> valD1;
			cout << "Ingresa el segundo valor" << endl;
			cin >> valD2;
			if (valD1 > valD2)
			{
				cout << "El valor mas grande es " << valD1 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
			else
			{
				cout << "El valor mas grande es " << valD2 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
		}
	}
	cout << "-----------------------------" << endl;
	//5
	cout << "-----------------------------" << endl;
	string contador;
	double valoD1 = 0;
	double valoD2 = 0;
	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> contador)
	{
		if (contador == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			cout << "Ingresa primer valor:" << endl;
			cin >> valoD1;
			cout << "Ingresa el segundo valor" << endl;
			cin >> valoD2;
			if (valoD1 > valoD2)
			{
				cout << "El valor mas grande es " << valoD1 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
			else
			{
				cout << "El valor mas grande es " << valoD2 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
		}
	}
	cout << "-----------------------------" << endl;
	//6
	cout << "-----------------------------" << endl;
	string valor;
	int valo1 = 0;
	int valo2 = 0;
	double valoD3 = 0;
	cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
	while (cin >> valor)
	{
		if (valor == "|")
		{
			cout << "\n Adios" << endl;
			break;
		}
		else
		{
			cout << "Ingresa primer valor:" << endl;
			cin >> valo1;
			cout << "Ingresa el segundo valor" << endl;
			cin >> valo2;
			if (valoD3 > valo1 || valoD3 > valo2)
			{
				cout << "El valor aun mas grande es: " << valoD3 << endl;
				valo1 = 0;
				valo2 = 0;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
			if (valo1 > valo2)
			{
				valoD3 = valo1;
				cout << "El valor mas grande es " << valoD3 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
			else if (valo2 > valo1)
			{
				valoD3 = valo2;
				cout << "El valor mas grande es " << valoD3 << endl;
				cout << "Si deseas cerrar el ciclo presiona: | o si prefieres continuar cualquier otro caracter" << endl;
			}
		}
	}
	cout << "-----------------------------" << endl;
	//7
	cout << "-----------------------------" << endl;
	int decision;
	double cm;
	double m;
	double in;
	double ft;

	cout << "Ingresa un valor en cm: " << endl;
	cin >> cm;
	cout << "Ingresa un valor en m: " << endl;
	cin >> m;
	cout << "Ingresa un valor en in: " << endl;
	cin >> in;
	cout << "Ingresa un valor en ft: " << endl;
	cin >> ft;

	cout << "Ingresa en que quieres tu conversion\n 1-Full cm\n 2-Full m\n 3-Full in\n 4-Full ft" << endl;
	cin >> decision;
	switch (decision)
	{
	case 1:
		//cm
		m = m * 0.01;
		in = in * 0.393701;
		ft = ft * 0.0328084;
		cout << m << "cm" << in << "cm" << ft << "cm" << endl;
		break;
	case 2:
		//m
		cm = cm * 100;
		in = in * 39.3701;
		ft = ft * 3.28084;
		cout << cm << "m" << in << "m" << ft << "m" << endl;
		break;
	case 3:
		//in
		cm = cm * 2.54;
		m = m * 0.0254;
		ft = ft * 0.0833333;
		cout << cm << "in" << m << "in" << ft << "in" << endl;
		break;
	case 4:
		//ft
		cm = cm * 30.48;
		m = m * 0.3048;
		in = in * 12;
		cout << cm << "ft" << m << "ft" << in << endl;
		break;
	default:
		cout << "Valor invalido al indicado" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	//8
	cout << "-----------------------------" << endl;
	char deci;
	double cm2;
	double in2;
	double ft2;

	cout << "Ingresa un valor en cm: " << endl;
	cin >> cm2;
	cout << "Ingresa un valor en in: " << endl;
	cin >> in2;
	cout << "Ingresa un valor en ft: " << endl;
	cin >> ft2;

	cout << "Ingresa en que quieres tu conversion\n cm-Full cm\n in-Full in\n ft-Full ft\n" << endl;
	cin >> deci;
	switch (deci)
	{
	case 'cm':
		//cm
		in = in * 0.393701;
		ft = ft * 0.0328084;
		cout << in << "cm" << ft << "cm" << endl;
		break;
	case 'in':
		//in
		cm = cm * 2.54;
		ft = ft * 0.0833333;
		cout << cm << "in" << ft << "in" << endl;
		break;
	case 'ft':
		//ft
		cm = cm * 30.48;
		in = in * 12;
		cout << cm << "ft" << in << "ft" << endl;
		break;
	default:
		cout << "Valor invalido al indicado" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	//9
	cout << "-----------------------------" << endl;
	int nuMenor;
	int nuMayor;
	int recipiente = 0;
	int contador2;

	cout << "Ingrese el numero de vueltas:" << endl;
	cin >> contador2;
	cout << "Ingrese un numero:" << endl;
	cin >> nuMenor;
	cout << "Ingrese un numero de nuevo:" << endl;
	cin >> nuMayor;

	if (nuMenor > nuMayor)
	{
		recipiente = nuMenor;
		nuMenor = nuMayor;
		nuMayor = recipiente;
		recipiente = 0;
	}
	for (int i = 0; i <= contador2; i++)
	{
		recipiente = recipiente + (nuMenor + nuMayor);
	}
	cout << nuMenor << '\t' << nuMayor << endl;
	cout << recipiente << endl;
	cout << "-----------------------------" << endl;
	//10
	cout << "-----------------------------" << endl;
	double vektor[2];
	double metros1;
	double metros2;

	cout << "Ingresa una distancia en metros: " << endl;
	cin >> metros1;
	cout << "Ingresa una distacia en metros de nuevo" << endl;
	cin >> metros2;

	vektor[0] = metros1;
	vektor[1] = metros2;
	for (int i = 0; i < 2; i++)
	{
		cout << " ----- " << vektor[i] << endl;
	}
	cout << "-----------------------------" << endl;
	//11
	cout << "-----------------------------" << endl;
	int vektor2[2];
	double metro1;
	double metro2;
	double recibido;

	cout << "Ingresa una distancia en metros: " << endl;
	cin >> metro1;
	cout << "Ingresa una distacia en metros de nuevo" << endl;
	cin >> metro2;

	if (metro1 > metro2)
	{
		recibido = metro1;
		metro1 = metro2;
		metro2 = recibido;
		recibido = 0;
	}
	vektor[0] = metros1;
	vektor[1] = metros2;
	for (int i = 0; i < 2; i++)
	{
		cout << " ----- " << vektor[i] << endl;
	}
	cout << "-----------------------------" << endl;
	cin.ignore();
	cin.get();
}

void ejercicio()
{
	//2
	cout << "-----------------------------" << endl;
	
	vector<float> temps;
	float promTemps = 0;

	cout << "Ingresa | para cerrar el programa: ";
	for (double temp; cin >> temp; )
	{
		promTemps = promTemps + temp;
		temps.push_back(temp);
	}
	double sum = 0;

	for (double x : temps)
	{
		sum += x;
	}
	cout << "Average temperature: " << sum / temps.size() << '\n';
	sort(temps);
	cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

	promTemps = promTemps / temps.size();
	cout << "El  valor promedio es: " << promTemps << endl;
	cout << "-----------------------------" << endl;
	//3
	cout << "-----------------------------" << endl;
	vector<double> secuencia;
	double recibo;

	cout << "Ingresa la distancia 1:" << endl;
	cin >> recibo;
	secuencia.push_back(recibo);
	cout << "Ingrese la distancia 2:" << endl;
	cin >> recibo;
	secuencia.push_back(recibo);

	recibo = secuencia[0] + secuencia[1];
	cout << "La suma de las dos distancias es " << recibo << endl;

	sort(secuencia);

	cout << "El valor menor es " << secuencia[0] << " y el mayor es " << secuencia[1] << endl;

	cout << "-----------------------------" << endl;
	//4 
	cout << "-----------------------------" << endl;
	int VoF = 0;
	vector <int> NumTotal;

	for (int i = 1; i <= 100; i++)
	{
		NumTotal.push_back(i);
	}

	cout << "Ingresa 1 para ser verdadero o 2 para ser falso" << endl;
	cout << "Tu numero es mayor o menor a 50: Verdadero o Falso " << endl;
	cin >> VoF;

	switch (VoF)
	{
		//en caso de que sea menor de 50
	case 1:

		VoF = 0;
		cout << "Tu numero es mayor o menor a 25: Verdadero o Falso " << endl;
		cin >> VoF;

		switch (VoF)
		{
			//en caso de ser verdadero
		case 1:
			VoF = 0;
			cout << "Tu numero es par o impar: Verdadero o Falso " << endl;
			cin >> VoF;
			break;
			//en caso de ser falso
		case 2:
			VoF = 0;
			cout << "Tu numero es par o impar: Verdadero o Falso " << endl;
			cin >> VoF;
			break;
		default:
			cout << "Fuera de rango" << endl;
			break;
		}
		break;
		//en caso de que sea mayor a 50
	case 2:

		break;
	default:
		cout << "Fuera de rango" << endl;
		break;
	}

	cout << "-----------------------------" << endl;
	//5
	cout << "-----------------------------" << endl;
	double num1;
	double num2;
	char opera;

	cout << "Ingresa el valor:" << endl;
	cin >> num1;
	cout << "Ingresa el otro valor:" << endl;
	cin >> num2;
	cout << "Ingresa un operador, +, -, *, /:" << endl;
	cin >> opera;

	switch (opera)
	{
	case '+':
		num1 = num1 + num2;
		cout << num1 << endl;
		break;
	case '-':
		num1 = num1 - num2;
		cout << num1 << endl;
		break;
	case '*':
		num1 = num1 * num2;
		cout << num1 << endl;
		break;
	case '/':
		num1 = num1 / num2;
		cout << num1 << endl;
		break;
	default:
		cout << "Valor incorrecto" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	//6
	cout << "-----------------------------" << endl;
	int vec[10];
	int numN;

	for (int i = 0; i < 10; i++)
	{
		vec[i] = i;
		cout << '\n' << vec[i] << '\n';
	}
	cout << "Ingresa el numero del cero al nueve:" << endl;
	cin >> numN;
	switch (numN)
	{
	case 0:
		cout << numN << " es en palabra cero" << endl;
		break;
	case 1:
		cout << numN << " es en palabra uno" << endl;
		break;
	case 2:
		cout << numN << " es en palabra dos" << endl;
		break;
	case 3:
		cout << numN << " es en palabra tres" << endl;
		break;
	case 4:
		cout << numN << " es en palabra cuatro" << endl;
		break;
	case 5:
		cout << numN << " es en palabra cinco" << endl;
		break;
	case 6:
		cout << numN << " es en palabra seis" << endl;
		break;
	case 7:
		cout << numN << " es en palabra siete" << endl;
		break;
	case 8:
		cout << numN << " es en palabra ocho" << endl;
		break;
	case 9:
		cout << numN << " es en palabra nueve" << endl;
		break;
	default:
		break;
	}
	cout << "-----------------------------" << endl;
	//6.5
	cout << "-----------------------------" << endl;
	int vec2[10];
	string numLe;

	for (int i = 0; i < 10; i++)
	{
		vec2[i] = i;
		cout << '\n' << vec2[i] << '\n';
	}
	cout << "Ingresa la palabra del cero al nueve:" << endl;
	cin >> numLe;
	if (numLe == "cero")
	{
		cout << numLe << " es en numero " << vec2[0] << endl;
	}
	if (numLe == "uno")
	{
		cout << numLe << " es en numero " << vec2[1] << endl;
	}
	if (numLe == "dos")
	{
		cout << numLe << " es en numero " << vec2[2] << endl;
	}
	if (numLe == "tres")
	{
		cout << numLe << " es en numero " << vec2[3] << endl;
	}
	if (numLe == "cuatro")
	{
		cout << numLe << " es en numero " << vec2[4] << endl;
	}
	if (numLe == "cinco")
	{
		cout << numLe << " es en numero " << vec2[5] << endl;
	}
	if (numLe == "seis")
	{
		cout << numLe << " es en numero " << vec2[6] << endl;
	}
	if (numLe == "siete")
	{
		cout << numLe << " es en numero " << vec2[7] << endl;
	}
	if (numLe == "ocho")
	{
		cout << numLe << " es en numero " << vec2[8] << endl;
	}
	if (numLe == "nueve")
	{
		cout << numLe << " es en numero " << vec2[9] << endl;
	}
	cout << "-----------------------------" << endl;
	//7
	cout << "-----------------------------" << endl;
	int numU;
	int numD;
	char operad;

	cout << "Ingresa el valor entero:" << endl;
	cin >> numU;
	cout << "Ingresa el otro valor entero:" << endl;
	cin >> numD;
	cout << "Ingresa un operador, +, -, *, /:" << endl;
	cin >> operad;

	switch (operad)
	{
	case '+':
		numU = numU + numD;
		cout << numU << endl;
		break;
	case '-':
		numU = numU - numD;
		cout << numU << endl;
		break;
	case '*':
		numU = numU * numD;
		cout << numU << endl;
		break;
	case '/':
		numU = numU / numD;
		cout << numU << endl;
		break;
	default:
		cout << "Valor incorrecto" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	//8
	cout << "-----------------------------" << endl;
	int arroz = 1;
	int cont = 1;

	while (arroz < 1000)
	{
		arroz = arroz + arroz;
		cont++;
	}
	cout << "El numero de cuadros son " << cont << endl;
	cont = 1;
	while (arroz < 1000000)
	{
		arroz = arroz + arroz;
		cont++;
	}
	cout << "El numero de cuadros son " << cont << endl;
	while (arroz < 1000000000)
	{
		arroz = arroz + arroz;
		cont++;
	}
	cout << "El numero de cuadros son " << cont << endl;
	cout << "-----------------------------" << endl;
	//9
	cout << "-----------------------------" << endl;
	double arroztl = 1;
	double contatl = 1;

	while (arroztl < 1000)
	{
		arroztl = arroztl + arroztl;
		contatl++;
	}
	cout << "El numero de cuadros son " << contatl << endl;
	contatl = 1;
	while (arroztl < 1000000)
	{
		arroztl = arroztl + arroztl;
		contatl++;
	}
	cout << "El numero de cuadros son " << contatl << endl;
	while (arroztl < 1000000000)
	{
		arroztl = arroztl + arroztl;
		contatl++;
	}
	cout << "El numero de cuadros son " << contatl << endl;
	cout << "-----------------------------" << endl;
	//10
	cout << "-----------------------------" << endl;
	vector<int>j2;
	int selection;

	cout << "Ingresa 1-Piedra, 2-Papel, 3-Tijera" << endl;
	cin >> selection;
	j2.push_back(2);
	j2.push_back(2);
	j2.push_back(3);

	switch (selection)
	{
		case 1://piedra
			if (j2[0] = 1)
			{
				cout << "empate" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "gana pc" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "gana humano" << endl;
			}
			//2turno
			if (j2[1] = 1)
			{
				cout << "empate" << endl;
			}
			if (j2[1] = 2)
			{
				cout << "gana pc" << endl;
			}
			if (j2[1] = 3)
			{
				cout << "gana humano" << endl;
			}
			//3er turno
			if (j2[0] = 1)
			{
				cout << "empate" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "gana pc" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "gana humano" << endl;
			}
			break;
		case 2://papel
			//1er turno
			if (j2[0] = 1)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "empate" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "gana pc" << endl;
			}
			//2do turno
			if (j2[0] = 1)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "empate" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "gana pc" << endl;
			}
			//3er turno
			if (j2[0] = 1)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "empate" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "gana pc" << endl;
			}
			break;
		case 3://tijera
			//1er turno
			if (j2[0] = 1)
			{
				cout << "gana pc" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "empate" << endl;
			}
			//2do turno
			if (j2[0] = 1)
			{
				cout << "gana pc" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "empate" << endl;
			}
			//3er turno
			if (j2[0] = 1)
			{
				cout << "gana pc" << endl;
			}
			if (j2[0] = 2)
			{
				cout << "gana humano" << endl;
			}
			if (j2[0] = 3)
			{
				cout << "empate" << endl;
			}
			break;
	default:
		cout << "Valor incorrecto" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	//11
	cout << "-----------------------------" << endl;
	vector<int>prime;
	prime.push_back(2);
	prime.push_back(3);
	prime.push_back(5);
	prime.push_back(7);
	//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 y 97
	//Ciclo para comparar
	for (int i = 8; i < 100; i++)
	{
		bool primo = true;
		for (int j = 0; j < prime.size(); j++)
		{
			if (i % prime[j] == 0 && prime[j] != i)
			{
				primo = false;
			}
		}
		if (primo == true)
		{
			prime.push_back(i);
		}
	}
	//Ciclo para imprimir
	for (int k = 0; k < prime.size(); k++)
	{
		cout << prime[k] << " ";
	}
	cout << "-----------------------------" << endl;
	//12
	cout << "-----------------------------" << endl;
	vector<int>prime2;
	prime2.push_back(2);
	prime2.push_back(3);
	prime2.push_back(5);
	prime2.push_back(7);
	int contMax;
	cout << "Ingresa un valor maximo:" << endl;
	cin >> contMax;
	//Ciclo para comparar
	for (int i = 8; i < contMax; i++)
	{
		bool primo2 = true;
		for (int j = 0; j < prime2.size(); j++)
		{
			if (i % prime2[j] == 0 && prime2[j] != i)
			{
				primo2 = false;
			}
		}
		if (primo2 == true)
		{
			prime2.push_back(i);
		}
	}
	//Ciclo para imprimir
	for (int k = 0; k < prime.size(); k++)
	{
		cout << prime[k] << " ";
	}
	cout << "-----------------------------" << endl;
	//13 ---
	cout << "-----------------------------" << endl;
	
	bool num[100];

	for (int i = 1; i < 100; i++)
	{
		num[i] = true;
	}

	for (int i = 2; i < sqrt(100); i++)
	{
		if (num[i] == true)
		{
			for (int j = i * i; j < 100; j += i)
			{
				num[j] = false;
			}
		}
	}
	cout << "Los numeros primos son: " << endl;
	for (int k = 1; k < 100; k++)
	{
		if (num[k] == true)
		{
			cout << k << endl;
		}
	}
	
	cout << "-----------------------------" << endl;
	//14 ---
	cout << "-----------------------------" << endl;
	bool numsito[100];
	int Cont2;

	cout << "Ingresa un limite: " << endl;
	cin >> Cont2;

	for (int i = 1; i < Cont2; i++)
		numsito[i] = true;

	for (int i = 2; i < sqrt(Cont2); i++)
	{
		if (numsito[i] == true)
		{
			for (int j = i * i; j < Cont2; j += i)
			{
				numsito[j] = false;
			}
		}
	}
	cout << "Los numeros primos son: " << endl;
	for (int k = 1; k < Cont2; k++)
	{
		if (numsito[k] == true)
		{
			cout << k << endl;
		}
	}

	cout << "-----------------------------" << endl;
	//15
	cout << "-----------------------------" << endl;
	vector<int>Prime2;
	Prime2.push_back(2);
	Prime2.push_back(3);
	Prime2.push_back(5);
	Prime2.push_back(7);

	int Limite;
	//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 y 97

	cout << "Ingresa un limite: " << endl;
	cin >> Limite;
	//Ciclo para comparar
	for (int i = 8; i < Limite; i++)
	{
		bool primo2 = true;
		for (int j = 0; j < Prime2.size(); j++)
		{
			if (i % Prime2[j] == 0 && Prime2[j] != i)
			{
				primo2 = false;
			}
		}
		if (primo2 == true)
		{
			Prime2.push_back(i);
		}
	}
	//Ciclo para imprimir
	for (int k = 0; k < Prime2.size(); k++)
	{
		cout << Prime2[k] << " ";
	}

	cout << "-----------------------------" << endl;
	//16
	cout << "-----------------------------" << endl;
	vector <int> contador;
	int conta;
	int cont2;
	int Tactual = 0;
	int Utamaño = 0;
	int NumActual = 0;
	int NumSiguiente = 0;
	int Final = 0;

	cout << "Ingresa la cantidad de numeros que quieres meter al vector" << endl;
	cin >> conta;
	for (int i = 0; i < conta; i++)
	{
		cout << "Ingresa numeros, yo dire cual es la moda(numero que mas se repite)" << endl;
		cin >> cont2;
		contador.push_back(cont2);
	}
	cout << "Este es el tamano del vector " << contador.size() << endl;

	for (int j = 0; j < contador.size(); j++)
	{
		if (j != contador.size() - 1)
		{
			NumActual = contador[j];
			NumSiguiente = contador[j + 1];
		}
		else
		{
			break;
		}

		if (NumActual == NumSiguiente)
		{
			Tactual++;
		}
		else
		{
			if (Utamaño > Tactual)
			{
				Utamaño = Utamaño;
				Tactual = 0;
			}
			else
			{
				Utamaño = Tactual;
				Final = contador[j];
				Tactual = 0;
			}

		}
	}
	cout << "Se repitio " << Utamaño + 1 << " veces el numero " << Final << endl;
	cout << "-----------------------------" << endl;
	//17
	cout << "-----------------------------" << endl;
	string inicial;
	string secundario;
	string tercero;
	string almacenador;

	cout << "Ingresa una palabra: " << endl;
	cin >> inicial;
	cout << "Ingresa una palabra: " << endl;
	cin >> secundario;
	cout << "Ingresa una palabra: " << endl;
	cin >> tercero;

	if (inicial > secundario)
	{
		almacenador = inicial;
		inicial = secundario;
		secundario = almacenador;
	}
	else if (inicial > tercero)
	{
		almacenador = inicial;
		inicial = tercero;
		tercero = almacenador;
	}
	else if (secundario > tercero)
	{
		almacenador = secundario;
		secundario = tercero;
		tercero = almacenador;
	}

	cout << "El string menor es: " << inicial << endl;
	cout << "El string mayor es: " << secundario << endl;

	cout << "-----------------------------" << endl;
	//18
	cout << "-----------------------------" << endl;
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

	cout << "-----------------------------" << endl;
	//19
	cout << "-----------------------------" << endl;
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
	cout << "-----------------------------" << endl;
	//20
	cout << "-----------------------------" << endl;
	vector <string> Nombres2;
	vector <string> Edad2;
	string Recibo2;
	string Age2;
	int Ubicacion2 = 0;

	do
	{
		cout << "Ingresa el nombre o para detener el programa ingresa NoName" << endl;
		cin >> Recibo2;
		cout << "Ingresa la edad o para detener el programa ingresa 0 " << endl;
		cin >> Age2;

		Nombres2.push_back(Recibo2);
		Edad2.push_back(Age2);
	} while (Recibo2 != "NoName"  && Age2 != "0");
	{
	}
	cout << "Escribe el nombre: " << endl;
	cin >> Recibo2;
	Ubicacion2 = 0;

	while (Ubicacion2 < Nombres2.size())
	{
		if (Nombres2[Ubicacion2] == Recibo2)
		{
			break;
		}
		Ubicacion2++;
	}
	if (Ubicacion2 == Nombres2.size())
	{
		cout << "El nombre no existe" << endl;
	}
	else
	{
		cout << Edad2[Ubicacion2];
	}

	cout << "-----------------------------" << endl;
	//21
	cout << "-----------------------------" << endl;
	vector <string> Nombres3;
	vector <string> Edad3;
	vector <string> Alma;
	string Recibo3;
	string Age3;
	int Ubicacion3 = 0;

	do
	{
		cout << "Ingresa el nombre o para detener el programa ingresa NoName" << endl;
		cin >> Recibo3;
		cout << "Ingresa la edad o para detener el programa ingresa 0 " << endl;
		cin >> Age3;

		Nombres3.push_back(Recibo3);
		Edad3.push_back(Age3);
	} while (Recibo3 != "NoName"  && Age3 != "0");
	{
	}
	cout << "Escribe el nombre: " << endl;
	cin >> Recibo3;
	Ubicacion3 = 0;
	while (Ubicacion3 < Nombres3.size())
	{
		if (Nombres3[Ubicacion3] == Recibo3)
		{
			break;
		}
		Ubicacion3++;
	}
	if (Ubicacion3 == Nombres3.size())
	{
		cout << "El nombre no existe" << endl;
	}
	else
	{
		cout << Edad3[Ubicacion3] << endl;
	}

	cout << "Escribe la edad: " << endl;
	cin >> Recibo3;
	Ubicacion3 = 0;

	while (Ubicacion3 < Edad3.size())
	{
		if (Edad3[Ubicacion3] == Recibo3)
		{
			ostringstream convert;
			convert << Recibo3;
			Alma.push_back(convert.str());
		}
		Ubicacion3++;
	}
	if (Alma.size() == 0)
	{
		cout << "No existe la edad" << endl;
	}
	else
	{
		Ubicacion3 = 0;
		while (Ubicacion3 < Alma.size())
		{
			cout << Nombres3[Ubicacion3] << "   " << Edad3[Ubicacion3];
			Ubicacion3++;
		}
	}

	cout << "-----------------------------" << endl;
	cin.ignore();
	cin.get();
}

void error()
{
	int VoF = 0;
	vector <int> NumTotal;

	for (int i = 1; i <= 100; i++)
	{
		NumTotal.push_back(i);
	}

	cout << "Ingresa 1 para ser verdadero o 2 para ser falso" << endl;
	cout << "Tu numero es mayor o menor a 50: Verdadero o Falso " << endl;
	cin >> VoF;

	switch (VoF)
	{
		//en caso de que sea menor de 50
		case 1:

			VoF = 0;
			cout << "Tu numero es mayor o menor a 25: Verdadero o Falso " << endl;
			cin >> VoF;

			switch (VoF)
			{
				//en caso de ser verdadero
				case 1:
					VoF = 0;
					cout << "Tu numero es par o impar: Verdadero o Falso " << endl;
					cin >> VoF;
					break;
				//en caso de ser falso
				case 2:
					VoF = 0;
					cout << "Tu numero es par o impar: Verdadero o Falso " << endl;
					cin >> VoF;
					break;
			default:
				cout << "Fuera de rango" << endl;
				break;
			}
			break;
		//en caso de que sea mayor a 50
		case 2:

			break;
	default:
		cout << "Fuera de rango" << endl;
		break;
	}
	cin.ignore();
	cin.get();
}

int main()
{
	int valor;
	cout << "Ingresa\n 1-Try 1\n 2-Try 2\n 3-Try 3\n 4-Try 4\n 5-Try 5\n 6-Try 6\n 7-Drill\n 8-Ejercicios\n" << endl;
	cin >> valor;
	switch (valor)
	{
		case 0:
			error();
		case 1:
			try1();
			break;
		case 2:
			try2();
			break;
		case 3:
			try3();
			break;
		case 4:
			try4();
			break;
		case 5:
			try5();
			break;
		case 6:
			try6();
			break;
		case 7:
			drill();
			break;
		case 8:
			ejercicio();
			break;
	default:
		cout << "Valor invalido" << endl;
		break;
	}
	return 0;
}