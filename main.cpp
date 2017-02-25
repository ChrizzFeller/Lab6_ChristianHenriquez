#include <iostream>
#include <vector>
#include <string>
#include "funcion.h"
#include <vector>

using namespace std;

int main() {
	vector <funcion*> vect;
	cout << "Ingrese el grado de la primera funcion: " << endl;
	int grad1;
	cin >> grad1;
	int* arr1 = new int[grad1];
	for (int i = 0; i <= grad1; i++) {
		cout << "Ingrese un numero: " << endl;
		int resp1;
		cin >> resp1;
		arr1[i] = resp1;
	}
	cout << "Ingrese el grado de la segunda funcion: " << endl;
	int grad2;
	cin >> grad2;
	int* arr2 = new int[grad2];
	for (int i = 0; i <= grad2; i++) {
		cout << "Ingrese un numero: " << endl;
		int resp2;
		cin >> resp2;
		arr2[i] = resp2;
	}
	funcion* fun1 = new funcion(arr1, grad1);
	funcion* fun2 = new funcion(arr2, grad2);
	vect.push_back(fun1);
	vect.push_back(fun2);
	int respu = 1;
	int respu1;
	while (respu > 0 && respu < 10) {
		cout << "---Menu---" << endl;
		cout << "1) Suma de funciones" << endl;
		cout << "2) Resta de funciones" << endl;
		cout << "3) Multiplicacion de funciones" << endl;
		cout << "4) Division de funciones" << endl;
		cout << "5) Factor comun de una funcion" << endl;
		cout << "6) Verificar si 2 funciones son iguales" << endl;
		cout << "7) Verificar si 2 funciones son diferentes" << endl;
		cout << "8) Imprimir una funcion" << endl;
		cout << "9) Agregar funcion" << endl;
		cout << "10) Salir" << endl;
		cin >> respu1;
		if (respu1 == 1)
		{
			cout << "Eliga los funciones que desea sumar" << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1, func2;
			cin >> func1;
			cin >> func2;
			funcion* fun3 = new funcion();
			fun3 = *vect.at(func1) + vect.at(func2);
			vect.push_back(fun3);
			cout << fun3 << endl;
		} else if (respu1 == 2)
		{
			cout << "Eliga los funciones que desea restar" << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1, func2;
			cin >> func1;
			cin >> func2;
			funcion* fun3 = new funcion();
			fun3 = *vect.at(func1) - vect.at(func2);
			vect.push_back(fun3);
			cout << fun3 << endl;
		} else if (respu1 == 3)
		{
			cout << "Eliga los funciones que desea multiplicar" << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1, func2;
			cin >> func1;
			cin >> func2;
			funcion* fun3 = new funcion();
			fun3 = *vect.at(func1) * vect.at(func2);
			vect.push_back(fun3);
			cout << fun3 << endl;
		} else if (respu1 == 4)
		{
			
		} else if (respu1 == 5)
		{
			cout << "Elija la funcion a la que le desea sacar el factor comun: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1;
			cin >> func1;
			++(*vect.at(func1));
			cout << endl;
		} else if (respu1 == 6)
		{
			cout << "Elija la funcion que desea comparar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1, func2;
			cin >> func1;
			cin >> func2;
			bool boo;
			boo = *vect.at(func1) == vect.at(func2);
			if (boo == true)
			{
				cout << "Las funciones son iguales." << endl;
			} else {
				cout << "Las funciones no son iguales" << endl;
			}
		} else if (respu1 == 7)
		{
			cout << "Elija la funcion que desea comparar: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1, func2;
			cin >> func1;
			cin >> func2;
			bool boo;
			boo = *vect.at(func1) != vect.at(func2);
			if (boo == true)
			{
				cout << "Las funciones son iguales." << endl;
			} else {
				cout << "Las funciones no son iguales" << endl;
			}
		} else if (respu1 == 8)
		{
			cout << "Elija la funcion que desea imprimir: " << endl;
			for (int i = 0; i < vect.size(); i++)
			{
				cout << i << ") " << vect[i] << endl;
			}
			int func1;
			cin >> func1;
			cout << vect.at(func1) << endl;
		} else if (respu1 == 9)
		{
			cout << "Ingrese el grado de la funcion: " << endl;
			int grad3;
			cin >> grad3;
			int* arr3 = new int[grad3];
			for (int i = 0; i <= grad3; i++) {
				cout << "Ingrese un numero: " << endl;
				int resp4;
				cin >> resp4;
				arr2[i] = resp4;
			}
			funcion* temp = new funcion(arr3, grad3);
			vect.push_back(temp);
		} else {
		}
	}
	for (int i = 0; i < vect.size(); ++i)
	{
		delete vect.at(i);
	}
	vect.clear();
	delete arr1;
	delete arr2;
	return 0;
}