#include "nodo.h"
#include <iostream>
nodo::nodo(){
	siguientePtr=0;
}
nodo::~nodo(){
}
void nodo::imprimir(){
	dato.imprimir();
	cout<<"El nodo apunta a:"<<siguientePtr<<endl;
}

