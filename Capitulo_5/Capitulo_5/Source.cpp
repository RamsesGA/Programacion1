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

void test()
{
	int i = 0;
	int j = 10;
	while (i <= 10)
	{
		if (j > i)
		{
			cout << "Bien hecho x23!\n";
		}
		else
		{
			cout << "Fail!\n";
		}
		i++;
	}
}

void ejercicios()
{

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