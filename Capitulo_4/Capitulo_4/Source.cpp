#include "Includes.h"


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
	//2 (PENDIENTE)
	cout << "-----------------------------" << endl;
	vector<double> temperaturas;
	for (double tempe; cin >> tempe;)
	{
		temperaturas.push_back(tempe);

		double sum = 0;
		for (double x : temperaturas) sum += x;
		{
		}
		cout << "Temperatura intermedia: " << sum / temperaturas.size() << '\n';
		sort(temperaturas);
		cout << "Temperatura mediana: " << temperaturas[temperaturas.size() / 2] << '\n';
	}
	cout << "-----------------------------" << endl;
	//3 (PENDIENTE)
	cout << "-----------------------------" << endl;
	double secuencia[2];
	double recibo;

	cout << "Ingresa la distancia 1:" << endl;
	cin >> secuencia[0];
	cout << "Ingrese la distancia 2:" << endl;
	cin >> secuencia[1];

	if (secuencia[0] > secuencia[1])
	{
		recibo = secuencia[0];
		secuencia[0] = secuencia[1];
		secuencia[1] = recibo;
		recibo = 0;
	}
	else
	{
		recibo = secuencia[0] + secuencia[1];
		cout << "Distancia total de " << recibo << endl;
	}
	cout << "-----------------------------" << endl;
	//4 (PENDIENTE)
	cout << "-----------------------------" << endl;
	int vek[100];
	int acum = 1;
	int resultado;
	char answ;

	cout << "Usa una v si es verdadero o f si es falso" << endl;
	//Es un ciclo para asignarle 100 valores al vector.
	for (int i = 1; i <= 100; i++)
	{
		vek[i] = acum;
		acum++;

	}
	cout << "Es un numero par?" << endl;
	cin >> answ;
	if (answ == 'v')
	{
		//Lo único que hago es preguntar si en la posición tal es par y lo imprima
		for (int j = 1; j <= 100; j++)
		{
			if (vek[j] % 2 == 0)
			{
				vek[acum] = ("%d, ", vek[j]);
				acum++;
			}
		}
		cout << vek[acum] << endl;
	}
	else if (answ == 'f')
	{
		//Ahora busco los impares
		for (int k = 1; k <= 100; k++)
		{
			if (vek[k] % 2 != 0)
			{
				printf("\n%d", vek[k]);
			}
		}
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

	for (int i = 1; i < 100; i++)
	{
		prime.push_back(i);
		cout << prime.size();
	}



	cout << "-----------------------------" << endl;
	//12
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//13
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//14
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//15
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//16
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//17
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//18
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	//19
	cout << "-----------------------------" << endl;

	cout << "-----------------------------" << endl;
	cin.ignore();
	cin.get();
}

void error()
{
	vector<int>prime;

	for (int i = 1; i <= 100; i++)
	{
		prime.push_back(i);
		cout << '\n' << prime.size();
		if ()
	}

	cin.ignore();
	cin.get();
}

int main()
{
	int valor;
	cout << "Ingresa\n 1-Try 1\n 2-Try 2\n 3-Try 3\n 4-Try 4\n 5-Try 5\n 6-Try 6\n 7-Drill\n 8-Ejercicios\n 0-ERROR" << endl;
	cin >> valor;
	switch (valor)
	{
		case 0:
			error();
			break;
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