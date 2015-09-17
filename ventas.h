#ifndef _ventas_h
#define _ventas_h

#include <iostream>
#include <array>    // Se necesita activar C++11

using namespace std;

//DECLARACIONES:

struct Ventas {														//Tipo de Dato Ventas
	array<array<double,100>,100> Matrix;
	unsigned i;
	unsigned j;
};

istream& leer_dato(double &par_dato);								//Lee un Dato
void mostrar_matrix(Ventas &par_matrix);							//Muestra la matriz de n x m

#endif
