#include <iostream> //Libreria estandar de c++
#include <conio.h>	//Libreria estandar de c++
#include <stdlib.h> //Libreria estandar de c++
//#include<string>//Libreria estandar de c++
//#include<fstream>//Libreria estandar de c++
using namespace std; //Para no usar std:: y otros
//void lectura();//Function llamada lectura
/*
lectura();//Ejecutamos lectura
PD:Saca toda la lectura del archivo
*/
int main()
{							//Eject
	int total = 2000;		//En 2000 ponga el valor que usted quiere que tenga el banco de por si
	int valor, opcion, op2; //Variables
	cout << "\tGinko e yokoso jikko suru opushon o sentaku shite kudasai\n1-Yokin\n2-Okanewohikidasu\n3-Ginko o tojiru\n\n\tOpushon o sentaku shite kudasai: ";
	cin >> opcion;
	/*Pregunta las opciones, si no entiendes japones a continuacion te las pongo
	                Bienvenido al banco elija una opcion para ejecutar
								1-Ingresar dinero
								2-Retirar dinero
								3-Cerrar banco
*/
	switch (opcion)
	{ //Haremos un switch de opcion para ejecutar segun la opcion que elijio
	case 1:
	{
		system("CLS"); //Borrara todo el historial
		/*cout<<"Yuza-mei o iu: ";//Pedira el nombre de usurio
	cin>>user;//Guardara el nombre de usurio
	*/
		cout << "Nyuryoku suru atai o nyuryoku shimasu: ";
		cin >> valor; //Preguntara cuanto quiere ingresar y luego lo pondra en la variable
		cout << "Kanpekidesu, ima anata wa motte imasu: " << valor + total << "\n\n\t1 O nyuryoku shite akushon o jikko shi, 2 o nyuryoku shite jikko o shuryo shimasu: ";
		cin >> op2; //1-Dira cuanto tiene en total. 2-Dira si quiere realiazr mas ejecuciones
		switch (op2)
		{ //Otro switch
		case 1:
			system("CLS");
			exit(main());
			break; //En el caso de uno, borra la consola y vuelve
		case 2:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de dos, borra la consola y termina
		case 3:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de tres, borra la consola y termina
		default:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de nada, borra la consola y termina
		}
		getch(); //Para que no se cierre por que si
	}
	break; //Caso de la opcion 1
	case 2:
	{
		system("CLS"); //Borrara todo el historial
		cout << "Hikidashitai kingaku o nyuryoku shite kudasai: ";
		cin >> valor; //Preguntara cuanto quiere retirar
		if (valor > total)
		{																		//Si lo que quiere sacar es mayor a lo que tiene
			cout << "Hikidashitai atai ga anata ga motte iru atai yori mo oki"; //Dira que lo que quiere sacar es mayor a lo que tiene
			getch();															//Para que no se cierre por que si
			return 0;															//Retorna cero
		}
		cout << "Kanpekidesu, anata wa intai shimashita: " << valor << "\n\n\tIma anata wa motte imasu: " << total - valor; //1-Dice el valor que ingreso sacar. 2-Dice el valor que le quedo
		cout << "\n\n\t1 O nyuryoku shite akushon o jikko shi, 2 o nyuryoku shite jikko o shuryo shimasu: ";
		cin >> op2; //1-Dira cuanto tiene en total. 2-Dira si quiere realiazr mas ejecuciones
		switch (op2)
		{ //Otro switch
		case 1:
			system("CLS");
			exit(main());
			break; //En el caso de uno, borra la consola y vuelve
		case 2:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de dos, borra la consola y termina
		case 3:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de tres, borra la consola y termina
		default:
			system("CLS");
			system("exit");
			return 0;
			break; //En el caso de nada, borra la consola y termina
		}
		getch(); //Para que no se cierre por que si
	};
	break; //Caso de la opcion 2
	case 3:
		system("CLS");
		system("exit");
		return 0;
		break; //Caso de la opcion 3 retorna xd
	default:
		system("CLS");
		system("exit");
		return 0;
		break;	 //En el caso de nada, borra la consola y termina
		getch(); //Para que no se cierre por que si
	}
	getch();  //Para que no se cierre por que si
	return 0; //Retorna 0
}
/*
Para terminar de leciconar
void lectura() {
	ifstream file;//Usaremos file para referirnos al archivo
	string outx;//Guardaremos en un string lo que tenga el .txt
	file.open("data-base.txt");//Abriremos el archivo .txt
	if(file.fail()) {
		cout<<"Yokyu sa reta fairuwohiraku/ yomitoru koto ga dekimasendeshita";//Si no se puede abrir/leer el arhcivo dira que no se pudo leer
	}
	while(!file.eof()){
		getline(file,outx);
		cout<<outx;
	}
	file.close();//Cerramos el archivo
}
*/
