#include "funcion.h"

funcion::funcion() {
}

funcion::funcion(int* arr, int grad) {
	this->numeros = arr;
	this->grado = grad;
}

int funcion::getGrado() {
	return this->grado;
}

void funcion::setGrado(int num){
	this->grado = num;
}

int* funcion::getNumeros(int pos) {
	return numeros[pos];
}

void funcion::setNumeros(int* arr) {
	numeros = arr;
}

funcion* operator+(funcion* temp) {
	if (grado > temp -> getGrado()) {
		funcion* temp2 = new funcion();
		int* nums = new int[grado];
		temp2 -> setGrado(grado);
		for(int i = grado; i > 0; i--) {
			nums[i] = numeros[i] + temp -> getNumero(i);
		}
	} else {

	}
}