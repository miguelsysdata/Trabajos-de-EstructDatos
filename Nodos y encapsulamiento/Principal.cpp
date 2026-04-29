#include <iostream>
#include "lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	lista x;
	x.imprimir();
    x.insertarInicio();
    x.imprimir();
    x.insertarInicio();
    x.imprimir();
    x.insertarFinal();
    x.imprimir();
    cout<<endl<<endl;
    x.mostrar();
    /*x.eliminarInicio();
    x.imprimir();
    x.eliminarFinal();
	x.imprimir();
	x.mostrar();*/
	return 0;
}

