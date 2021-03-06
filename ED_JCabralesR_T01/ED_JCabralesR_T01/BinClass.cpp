#include "BinClass.h"
#include <iostream>
#include <time.h>
using namespace std;


BinClass::BinClass()
{
}

int BinClass::bFetch(int e) {
	return bFetch(myArray, e);
}

int BinClass::bFetch(int a[], int e) {
	int inicio, centro, fin, valorCentro;
	inicio = 0;
	fin = sizeof(a) - 1;

	while (inicio <= fin) {
		centro = (inicio + fin) / 2;
		valorCentro = a[centro];
		if (valorCentro == e) {
			return centro;
		}
		else {
			if (e < valorCentro) {
				fin = centro - 1;
			}
			else {
				inicio = centro + 1;
			}
		}
	}
	return -1;
}

void BinClass::setArray(int _myArray[]) {
	myArray = _myArray;
}

int* BinClass::getArray() {
	return myArray;
}

void BinClass::showArray() {
	showArray(myArray);
}

void BinClass::showFetch(int position) { //La posicion la obtenemos gracias al metodo bFetch; aqui solo la mostramos
	if (position == -1) {
		cout << "El numero no existe" << endl;
	}
	else {
		cout << "La posicion del numero deseado es: " << position << endl;
	}
}


int* BinClass::RandArray(int _n) { //Generamos array con numeros diferentes cada vez
	srand(time(NULL));
	int *arr = new int[_n];
	for (int i = 0; i < sizeof(arr); i++) {
		arr[i] = (int)(rand() % 20 + 1);
	}
	return arr;

	/*int* arr = new int[_n];  //Mismos numeros siempre
	for (int i = 0; i < sizeof(arr); i++) {
	arr[i] = rand() % 20;
	}
	return arr;
	*/
}

void BinClass::showArray(int a[]) {
	for (int i = 0; i < sizeof(a); i++) {
		cout << "El valor en la posicion " << i << " es: " << a[i] << endl;
	}
}

BinClass::~BinClass()
{
}