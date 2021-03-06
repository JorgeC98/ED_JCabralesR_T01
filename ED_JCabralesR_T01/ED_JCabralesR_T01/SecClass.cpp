#include <cstdlib> //Libreria para funcion rand
#include "SecClass.h"
#include <iostream>
using namespace std;


SecClass::SecClass()
{
}

int SecClass::sFetch(int n) { //Realiza busqueda para obtener posicion 
	return sFetch(myArray, n);
}

int SecClass::sFetch(int a[], int num) {
	for (int i = 0; i < sizeof(a); i++) {
		if (num == a[i]) {
			return i;
		}
		return -1;
	}
}

void SecClass::setArray(int _myArray[]) {
	myArray = _myArray;
}

int* SecClass::getArray() {
	return myArray;
}

void SecClass::showArray() {
	showArray(myArray);
}

void SecClass::showFetch(int position) { //La posicion la obtenemos gracias al metodo sFetch; aqui solo la mostramos
	if (position == -1) {
		cout << "El numero no existe" << endl;
	}
	else {
		cout << "La posicion del numero deseado es: " << position << endl;
	}
}


int* SecClass::RandArray(int _n) {
	int* arr = new int[_n];
	for (int i = 0; i < sizeof(arr); i++) {
		arr[i] = rand() % 20;
	}
	return arr;
}

void SecClass::showArray(int a[]) {
	for (int i = 0; i < sizeof(a); i++) {
		cout << "El valor en la posicion " << i << " es: " << a[i] << endl;
	}
}

SecClass::~SecClass()
{
}