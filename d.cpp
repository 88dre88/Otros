#include<iostream>
#include<string>
#include<cstring>
#include"PilaE.h"
using namespace std;

int main(){

	string cadena;
	cout << endl << "EJERCICIO 5" << endl << endl;

	cout << "Introduce cadena, solo puede contener '<', '>' , '.': ";
	getline(cin, cadena);
	cout << cadena << endl;
	PilaE<char> pilaEstatica;
	int fin = cadena.length();
	int numDiamantes = 0;
	for(int i = 0; i < fin; i++){
		if(cadena.at(i) == '<'){
			pilaEstatica.apila('<');
		}
		if(!pilaEstatica.esVacia() && cadena.at(i) == '>'){
			pilaEstatica.desapila();
			numDiamantes++;
		}
	}

	cout << "El numero de diamantes es: " << numDiamantes << endl;


	system("pause");
	return 0;
}