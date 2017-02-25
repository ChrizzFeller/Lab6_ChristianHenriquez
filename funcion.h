//Clase funcion
#include <string>
#include <iostream>
#include <sstream>

#pragma once

#ifndef FUNCION_H
#define FUNCION_H

using namespace std;

class funcion {

	private:
		int* numeros;
		int grado;

	public:
		friend ostream& operator<<(ostream&, funcion*);
		funcion();
		~funcion();
		funcion(int*, int);
		int getGrado();
		void setGrado(int);
		int getNumeros(int);
		void setNumeros(int*);
		funcion* operator+(funcion*);
		funcion* operator-(funcion*);
		funcion* operator*(funcion*);
		funcion* operator/(funcion*);
		void operator++();
		bool operator==(funcion*);
		bool operator!=(funcion*);
		string toString();
};
#endif