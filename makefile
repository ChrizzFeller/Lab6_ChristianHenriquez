main: main.o funcion.o
	g++ main.o funcion.o -o main

main.o: main.cpp funcion.h
	g++ -c main.cpp

funcion.o: funcion.h funcion.cpp
	g++ -c funcion.cpp

clean:
	rm -f *.o main
