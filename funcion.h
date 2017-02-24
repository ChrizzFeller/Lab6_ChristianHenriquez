//Clase funcion
#pragma once

#ifndef FUNCION_H
#define FUNCION_H

class funcion {

	private:
		int* numeros;
		int grado;

	public:
		funcion();
		funcion(int*, int);
		int getGrado();
		void setGrado(int);
		int* getNumeros(int);
		void setNumeros(int*);
		funcion* operator+(funcion*);
		funcion* operator-(funcion*;

};
#endif