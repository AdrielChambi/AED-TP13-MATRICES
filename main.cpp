#include <iostream>
#include <cstdlib>
#include <array>    // Se necesita activar C++11
#include "ventas.h"

/* Trabajo Practico N13 - MATRICES

REQUISITO:
Leer los importes de las ventas del año pasado de N vendedores que hicieron por cada una de las M regiones
Informar:
- 1. Ventas total del año pasado.
- 2. Ventas por region.
- 3. Ventas por vendedor
- 4. Vendedor con mas ventas.
- 5. Region con mas ventas.

EJEMPLO:
Vendedor 1, Region 1: $250, Region 2: $300
Vendedor 2, Region 1: $ 10, Region 2: $ 50

- 1. Ventas Total: $250 + $300 + $10 + $50 = $610
- 2. Ventas por region: Region 1: $260, Region 2: $350
- 3. Ventas por vendedor: Vendedor 1: $550, Vendedor 2: $60
- 4. Vendedor con mas ventas: Vendedor 1: $550
- 5. Region con mas ventas: Region 2: $350

PRE-CONDICIONES:
El usuario ingresa bien los valores numericos

MATERIA:
Algoritmos y Estructura de Datos

INTEGRANTES:
Martin AGUEL
Adriel CHAMBI
Federico BUSTAMANTE
Augusto SCHMID

*/
using namespace std;



int main(int argc, char** argv) {
	//Variables
	Ventas var_matrix;	
	
	//Interfaz:
	cout<<endl<<"Presione Ctrl + Z para terminar la carga las ventas del actual vendedor"<<endl<<endl;
	cout<<endl<<"Ingrese en las columnas Ventas de la region y en las filas vendedores:"<<endl;
	cout<<"19 32 45 ^Z"<<endl;
	cout<<"20 30 60 ^Z"<<endl;
	cout<<"23 44 70 -1 ^Z ^Z"<<endl<<endl;
	
	//Carga de Datos:
	unsigned i = 0;
	unsigned t = 0;
	
	double aux;
	double flag = -1;
	
	do {		
		t = 0;
		while (leer_dato(aux) && flag == -1){			
			//cout<<"Flag:"<<aux;
			if (aux == flag) {
				flag = -2;
			}
			else {
				var_matrix.Matrix.at(i).at(t) = aux;
				t++;
			}
		}
		cin.clear();
		cin.ignore();
		i++;
	} while (flag == -1);
	
	cout<<endl<<"i: "<<i<<endl;
	cout<<endl<<"t: "<<t<<endl;
	var_matrix.i = i;
	var_matrix.j = j;
	
	return 0;
}


