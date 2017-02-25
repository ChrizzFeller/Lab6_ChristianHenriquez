#include "funcion.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

funcion::funcion() {
}

funcion::~funcion() {
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

int funcion::getNumeros(int pos) {
	return numeros[pos];
}

void funcion::setNumeros(int* arr) {
	numeros = arr;
}

funcion* funcion::operator+(funcion* temp) {
	cout << "Aqui esta el error 2" << endl;
	if (grado >= temp -> getGrado()) {
		funcion* temp2 = new funcion();
		int* nums = new int[grado];
		temp2 -> setGrado(grado);
		for(int i = grado - 1; i >= 0; i--) {
			nums[i] = numeros[i] + temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	} else {
		funcion* temp2 = new funcion();
		int* nums = new int[temp -> getGrado()];
		temp2 -> setGrado(temp -> getGrado());
		for(int i = temp -> getGrado() - 1; i >= 0; i--) {
			nums[i] = numeros[i] + temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	}
}

funcion* funcion::operator-(funcion* temp) {
	if (grado > temp -> getGrado()) {
		funcion* temp2 = new funcion();
		int* nums = new int[grado];
		temp2 -> setGrado(grado);
		for(int i = grado - 1; i >= 0; i--) {
			nums[i] = numeros[i] - temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	} else {
		funcion* temp2 = new funcion();
		int* nums = new int[temp -> getGrado()];
		temp2 -> setGrado(temp -> getGrado());
		for(int i = temp -> getGrado() - 1; i >= 0; i--) {
			nums[i] = numeros[i] - temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	}
}

funcion* funcion::operator*(funcion* temp) {
	if (grado > temp -> getGrado()) {
		funcion* temp2 = new funcion();
		int* nums = new int[grado];
		temp2 -> setGrado(grado);
		for(int i = grado - 1; i >= 0; i--) {
			nums[i] = numeros[i] * temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	} else {
		funcion* temp2 = new funcion();
		int* nums = new int[temp -> getGrado()];
		temp2 -> setGrado(temp -> getGrado());
		for(int i = temp -> getGrado() - 1; i >= 0; i--) {
			nums[i] = numeros[i] * temp -> getNumeros(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	}
}

funcion* funcion::operator/(funcion* temp) {
	/*
	if (grado > temp -> getGrado()) {
		funcion* temp2 = new funcion();
		int* nums = new int[grado];
		temp2 -> setGrado(grado);
		for(int i = grado; i > 0; i--) {
			nums[i] = numeros[i] + temp -> getNumero(i);
		}
		temp2 -> setNumeros(nums);
		return temp2;
	} else {
		funcion* temp2 = new funcion();
		int* nums = new int[temp -> getGrado()];
		temp2 -> setGrado(temp -> getGrado());
		for(int i = temp -> getGrado(); i > 0; i--) {
			nums[i] = numeros[i] + temp -> getNumero(i);
		}
		return temp2;
	}
	*/
}

void funcion::operator++() {
	bool ver = true;
	int temp2 = numeros[0];
	cout << "Erro1" << endl;
	for (int i = 0; i < grado; i++) {
		if (i < grado - 1 && temp2 % numeros[i+1] == 0)	{
			ver = true;
			if (temp2 > numeros[i+1])
			{
				temp2 = numeros[i+1];
			}
		} else if(i < grado - 1) {
			temp2 = 1;
			ver = false;
			i = grado;
		}
	}
	if (temp2 != 1)
	{
		cout << "El factor comun es: " << temp2;
	} else {
		cout << "No hay factor comun.";
	}
}

bool funcion::operator==(funcion* temp) {
	bool rev = false;
	if (grado == temp -> getGrado()) {
		for (int i = 0; i < grado; i++) {
			if (numeros[i] == temp -> getNumeros(i)) {
				rev = true;
			} else {
				rev = false;
			}
		}
	} else {
		rev = false;
	}
	return rev;
}

bool funcion::operator!=(funcion* temp) {
	bool rev = false;
	if (grado == temp -> getGrado()) {
		for (int i = 0; i < grado; i++) {
			if (numeros[i] == temp -> getNumeros(i)) {
				rev = true;
			} else {
				rev = false;
			}
		}
	} else {
		rev = false;
	}
	return rev;
}

ostream& operator<<(ostream& out, funcion* r){
    out << r->toString();
    return out;
}

string funcion::toString() {
	stringstream ss;
	int t = grado;
	for (int i = 0; i < grado; i++)
	{
		ss << numeros[i] << "x^" << t << " ";
		t--;
	}
	return ss.str();
}