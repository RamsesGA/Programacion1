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
	//4 gracias 
	cout << "-----------------------------" << endl;
	vector<int>Numeros;
	vector<int>Numeros2;
	vector<int>Numeros3;
	vector<int>Numeros4;
	int b = 101;
	for (int i = 0; i != b;)
	{
		Numeros.push_back(i);
		i++;
	}
	cout << "Bienvenido al juego en el que la maquina te adivinara el numero en el que estas pensando del 1 al cien\n";
	cout << "Tu numero es mayor a 50?:\n";
	string NumeroDeUsuario0;
	cin >> NumeroDeUsuario0;
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] >= 50)
			{
				Numeros2.push_back(s);
			}
		}
	}
	if (NumeroDeUsuario0 == "Si" || NumeroDeUsuario0 == "si")
	{
		string Mayor75;
		cout << "Tu numero es mayor a 75?\n";
		cin >> Mayor75;
		if (Mayor75 == "Si" || Mayor75 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 75)
				{
					Numeros3.push_back(Numeros2[y]);
				}
			}
		}

		if (Mayor75 == "No" || Mayor75 == "no")
		{
			for (int i = 0; i < Numeros2.size(); i++)
			{
				if (Numeros2[i] <= 75)
				{
					Numeros3.push_back(Numeros2[i]);
				}
			}
		}

	}


	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] <= 50)
			{
				Numeros2.push_back(s);
			}
		}


	}
	if (NumeroDeUsuario0 == "No" || NumeroDeUsuario0 == "no")
	{
		string Mayor25;
		cout << "Tu numero es mayor a 25?\n";
		cin >> Mayor25;
		if (Mayor25 == "Si" || Mayor25 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
		else if (Mayor25 == "no" || Mayor25 == "No")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] <= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
	}


	string MultiplosLocos;
	if (Numeros3.back() == 25)
	{
		cout << "Tu numero es multiplo de 5?\n";
		cin >> MultiplosLocos;
		if (MultiplosLocos == "Si" || MultiplosLocos == "si")
		{
			cout << "Tu numero es mayor 15?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es 20?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiiiiiiii\n";
				}
				else
				{
					cout << "Tu numero es 25";
				}

			}
			else if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero es 15?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Wiiii!!\n";
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero es 10?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Wiiiiiiiii\n";
					}
					else
					{
						cout << "Tu numero es 5";
					}
				}
			}
		}
		else if (MultiplosLocos == "No" || MultiplosLocos == "no")
		{
			cout << "Tu numero esta entre el 1 y el 13\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "No" || MultiplosLocos == "no")
			{
				cout << "Tu numero esta entre 14 y 24\n";
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "Si" || MultiplosLocos == "si")
				{
					cout << "Tu numero es 18?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";
					}
					else if ((MultiplosLocos == "no" || MultiplosLocos == "No"))
					{
						cout << "Tu numero es 24?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Tu numero es 21\n";
						}
					}
				}

				else if (MultiplosLocos == "No" || MultiplosLocos == "no")
				{
					cout << "Tu numero esta entre el 14 y 24\n";
					cout << "Tu numero es mayor a 17?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 19?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 23?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 24";
							}
							else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 17?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 16?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 14\n";
							}
						}
					}
				}
			}
			if (MultiplosLocos == "Si" || MultiplosLocos == "si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es mayor a 4?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "Si" || MultiplosLocos == "si")
					{
						cout << "Tu numero es 7?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 11?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 13";
							}

						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 4?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "Si" || MultiplosLocos == "si")
						{
							cout << "Yay\n";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 2?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "Si" || MultiplosLocos == "si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 1";
							}
						}
					}
				}
				else if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 9?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 12\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es 9?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 6?";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{

									cout << "Yay";
								}
								else if (MultiplosLocos == "no" || MultiplosLocos == "No")
								{
									cout << "Tu numero es 3";
								}
							}
						}
					}


				}

			}

		}
	}
	else if (Numeros3.back() == 50)
	{
		cout << "Tu numero es multiplo de 5?\n";
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 40?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 45?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 50\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 40?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 35?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 30";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")
		{
			cout << "Tu numero esta entre el 26 y 37?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es mayor a 29?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es un multiplo de 3?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 36\n";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 32?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 34?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 37";
							}
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//esto es por si el numero es menor a 29
				{
					cout << "Tu numero es multiplo de 3?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 21?";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 18";
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 29?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 28?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 26";
							}
						}
					}
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 38 hasta 49
			{
				cout << "Tu numero es multiplo de 3?";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 45?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 48";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 42?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 39";
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 44?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 46?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 47?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 49";
							}
						}

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
					{
						cout << "Tu numero es 44?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 43?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 41?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay\n";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 38";
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 75)
	{
		cout << "Tu numero es multiplo de 5?\n";//Multiplos de 5
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 65?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 70?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 75\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 40?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 60?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 55";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")//52 62
		{
			cout << "Tu numero esta entre el 52 y 62?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es 51?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 54?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 51";
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 52 y 62
				{
					cout << "Tu numero es mayor a 58?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 59?";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 61?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 62";
							}
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 58?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 56?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 53?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 52";
								}
							}
						}
					}
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 64 hasta 74 
			{
				cout << "Tu numero es multiplo de 3?";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 69?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 72";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 69?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 66?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 63";
							}
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 68?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 71?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 73?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 74";
							}
						}

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
					{
						cout << "Tu numero es 68?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 64";
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 100)
	{
		cout << "Tu numero es multiplo de 5?\n";//Multiplos de 5
		cin >> MultiplosLocos;
		if (MultiplosLocos == "si" || MultiplosLocos == "Si")
		{
			cout << "Tu numero es mayor a 90?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es 95?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay\n";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 100\n";
				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")
			{
				cout << "Tu numero es 90?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Yay";
				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")
				{
					cout << "Tu numero es 85?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay\n";

					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 80";
					}
				}

			}
		}
		else if (MultiplosLocos == "no" || MultiplosLocos == "No")//76 86 
		{
			cout << "Tu numero esta entre el 76 y 86?\n";
			cin >> MultiplosLocos;
			if (MultiplosLocos == "si" || MultiplosLocos == "Si")
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es mayor a 84?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 87";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 84?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 81?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "no" || MultiplosLocos == "No")
							{
								cout << "Tu numero es 78";
							}
						}
					}

				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 76 y 86
				{
					cout << "Tu numero es mayor a 79?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						{
							cout << "Tu numero es 82?";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 83?\n";
								cin >> MultiplosLocos;
								if (MultiplosLocos == "si" || MultiplosLocos == "Si")
								{
									cout << "Yay";
								}
								else if (MultiplosLocos == "No" || MultiplosLocos == "no")
								{
									cout << "Tu numero es 86";
								}
							}
						}
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 79?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 77?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 76\n";
							}
						}
					}

				}
			}
			else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Acuerdate que este else if es para el 88 hasta 98
			{
				cout << "Tu numero es multiplo de 3?\n";
				cin >> MultiplosLocos;
				if (MultiplosLocos == "si" || MultiplosLocos == "Si")
				{
					cout << "Tu numero es 93?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "no" || MultiplosLocos == "No")
					{
						cout << "Tu numero es 96?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 99";
						}
					}
				}
				else if (MultiplosLocos == "No" || MultiplosLocos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 92?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Tu numero es 94?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "No" || MultiplosLocos == "no")
						{
							cout << "Tu numero es 97?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es 98";
							}
						}

					}



				}
				else if (MultiplosLocos == "no" || MultiplosLocos == "No")//Menor a 44
				{
					cout << "Tu numero es 92?\n";
					cin >> MultiplosLocos;
					if (MultiplosLocos == "si" || MultiplosLocos == "Si")
					{
						cout << "Yay";
					}
					else if (MultiplosLocos == "No" || MultiplosLocos == "no")
					{
						cout << "Tu numero es 91?\n";
						cin >> MultiplosLocos;
						if (MultiplosLocos == "si" || MultiplosLocos == "Si")
						{
							cout << "Yay";
						}
						else if (MultiplosLocos == "no" || MultiplosLocos == "No")
						{
							cout << "Tu numero es el 89?\n";
							cin >> MultiplosLocos;
							if (MultiplosLocos == "si" || MultiplosLocos == "Si")
							{
								cout << "Yay\n";
							}
							else if (MultiplosLocos == "No" || MultiplosLocos == "no")
							{
								cout << "Tu numero es el 88";
							}
						}
					}
				}
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
	//13 (P E N D I E N T E)
	cout << "-----------------------------" << endl;
	vector<int>lista;
	int contador = 9;
	//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 y 97
	//Ingresar valores del 1 al 100
	for (int i = 2; i <= 100; i++)
	{
		lista.push_back(i);
	}
	//eliminar los numeros multiplos de 2 sustituyendolos por 0
	for (int j = 0; j < lista.size(); j++)
	{
		if (lista[j] % 2 == 0)
		{
			lista[j] = 0;
		}
	}
	//se busca eliminar los numeros multiplos de 3
	for (int l = 7; l < lista.size(); l += 3)
	{
		lista[l] = 0;
	}
	//imprimir el resultado final
	for (int m = 0; m < lista.size(); m++)
	{
		if (lista[m] != 0)
		{
			cout << lista[m] << " ";
		}
	}
	cout << "-----------------------------" << endl;
	//14 (P E N D I E N T E)
	cout << "-----------------------------" << endl;
	vector<int>lista;
	int contador = 9;
	//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 y 97
	//Ingresar valores del 1 al 100
	for (int i = 2; i <= 100; i++)
	{
		lista.push_back(i);
	}
	//eliminar los numeros multiplos de 2 sustituyendolos por 0
	for (int j = 0; j < lista.size(); j++)
	{
		if (lista[j] % 2 == 0)
		{
			lista[j] = 0;
		}
	}
	//se busca eliminar los numeros multiplos de 3
	for (int l = 7; l < lista.size(); l += 3)
	{
		lista[l] = 0;
	}
	//imprimir el resultado final
	for (int m = 0; m < lista.size(); m++)
	{
		if (lista[m] != 0)
		{
			cout << lista[m] << " ";
		}
	}
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
	vector<int>lista;
	int contador = 9;
	//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 y 97
	//Ingresar valores del 1 al 100
	for (int i = 2; i <= 100; i++)
	{
		lista.push_back(i);
	}
	//eliminar los numeros multiplos de 2 sustituyendolos por 0
	for (int j = 0; j < lista.size(); j++)
	{
		if (lista[j] % 2 == 0)
		{
			lista[j] = 0;
		}
	}
	//se busca eliminar los numeros multiplos de 3
	for (int l = 7; l < lista.size(); l+=3)
	{
		lista[l] = 0;
	}
	//imprimir el resultado final
	for (int m = 0; m < lista.size(); m++)
	{
		if (lista[m] != 0)
		{
			cout << lista[m] << " ";
		}
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