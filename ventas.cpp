#include "ventas.h"

//DEFINICIONES

istream& leer_dato(double &par_dato){										//Lee un Dato
	return cin>>par_dato;
}

void mostrar_matrix(Ventas &par_matrix){							//Muestra la matriz de n x m
	for(unsigned j = 0; j <= par_matrix.j; j++){
			for(unsigned i = 0; i <= par_matrix.i; i++){
				cout<<var_matrix.Matrix.at(j).at(i)<<" ";
			}
			cout<<endl;
		}
}
