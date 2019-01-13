#include <iostream>
using namespace std;

int hola()
{
	//Drill
	cout << "Hello world" << endl;
	//Ejercicio
	cout << "Hello, programming!" << endl;
	cout << "Here we go!" << endl;
	cin.get();
	return 0;
}

int bano()
{
	//Instrucciones para encontrar el ba�o.
	cout << "Bienvenido a las intrucciones para poder encontrar el bano de arriba" << endl;
	cout << "1- Levantate de tu asiento o si estas parado dirigete al corredor ubicado a la derecha" << endl;
	cout << "2- Gira a la derecha en el corredor" << endl;
	cout << "3- Sube las escaleras hasta llegar al limite" << endl;
	cout << "4- Una vez que lleges al segundo piso detente" << endl;
	cout << "5- Voltea hacia la izquierda y encontraras la puerta del ba�o" << endl;
	cout << "6-Abre la puerta y entra, finalmente estas en el bano, por ultimo cierra la puerta y haz tus necesidades" << endl;
	cin.get();
	return 0;

}

int mipuerta()
{
	//Instrucciones para llegar a mi porton desde la universidad.
	cout << "1- Salte de la universidad y detente en cuanto salgas" << endl;
	cout << "2- Gira a la derecha y camina, cruza las dos pequenas calles y detente en el area peatonal frente a la tercera calle" << endl;
	cout << "3- Gira nuevamente hacia la derecha y ve todo recto" << endl;
	cout << "4- Busca la calle con el nombre Bernardo de Balbuena y entra a la calle" << endl;
	cout << "5- Sigue recto y detente en la casa #1166 y fin" << endl;
	cin.get();
	return 0;
}

int receta()
{
	//Ingredientes para hacer un taco.
	cout << "Ingredientes:" << endl;
	cout << "2 tazas de carne picada" << endl;
	cout << "12 tortillas de harina" << endl;
	cout << "1 / 2 taza de aceite de maiz o canola" << endl;	
	cout << "2 tazas de queso cheddar rallado" << endl;
	cout << "1 tomate, cortado en cubitos" << endl;
	cout << "1 cucharada de cebolla verde, picada" << endl;
	cout << "1 / 2 cabeza de lechuga o repollo, rallado" << endl;
	cout << "1 taza de salsa mexicana" << endl;
	//Pasos para hacer el taco.
	cout << "----------------------------------------------------" << endl;
	cout << "1- Encinda la estufa o comal" << endl;
	cout << "2- Calienta aceite en una sarten." << endl;
	cout << "3- Frie una tortilla de harina ligeramente por ambos lados." << endl;
	cout << "4- Antes que la tortilla se endurezca y se vuelva quebradiza, doblala por la mitad usando una pinza y un tenedor para mantenerla firme." << endl;
	cout << "5- Retira y escurre sobre un papel.Repite el procedimiento con todas las tortillas." << endl;
	cout << "6- Coloca una o dos cucharadas de carne picada, previamente salteada y condimentada, dentro del taco." << endl;
	cout << "7- Agrega lechuga picada, la cebolla, el tomate y cubre con queso." << endl;
	cout << "8- Repite para todos los tacos y �sirve inmediatamente!" << endl;
	cout << "9- Finalmente la salsa se pone despues, pues es a entero gusto de cada comensal." << endl;
	cin.get();
	return 0;
}

int terms()
{
	cout << "Esta es la seccion FAQ o preguntas y respuestas de la receta" << endl;
	cout << "---Que es carne picada?- Son solo trozos de carne que puedes cortar tu mismo del bisteq" << endl;
	cout << "---Que es freir?- Es cuando pones algo en aceite caliente para que quede tostado o dorado" << endl;
	cin.get();
	return 0;
}

int main()
{
	//Pues la funci�n principal y el menu uwu
	int valor;
	cout << "Menu de ejercicios y drill del capitulo 2\n1- Hola\n2-Bano\n3-Instruccion a mi casa\n4-Receta\n5-Terms\n" << endl;
	cin >> valor;
	cin.get();
	if (valor == 1)
	{
		hola();
	}
	if (valor == 2)
	{
		bano();
	}
	if (valor == 3)
	{
		mipuerta();
	}
	if (valor == 4)
	{
		receta();
	}
	if (valor == 5)
	{
		terms();
	}
	return 0;
}