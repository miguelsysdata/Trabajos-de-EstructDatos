#include "nodo.h"
#include "maleta.h"
nodo::nodo()
{
	//setDato(-1);
	setSiguientePtr(0);
}

nodo::~nodo()
{
	;
}

void nodo::setDato(maleta d){
	dato=d;
}

void nodo::setSiguientePtr(nodo * s){
	siguientePtr=s;
}

maleta nodo::getDato(){
	return dato;
}

nodo * nodo::getSiguientePtr(){
	return siguientePtr;
}

void nodo::imprimir(){
	
	cout<<"Dato: "<<getDato().getColor()<<"\t"<<
		getDato().getSize()<<
		"\t"<<"Apunta a: "<<getSiguientePtr()<<endl;
	
}

