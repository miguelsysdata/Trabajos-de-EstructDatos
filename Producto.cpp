#include "Producto.h"

Producto::Producto(){
	nombre="Galletas";
	precio=40;
	codigo=123;	
}

Producto::~Producto(){
	//cout<<"Objeto destruido"<<endl;
	
}

void Producto::imprimir(){
	cout<<"Nombre: "<<nombre<<"\t"<<
	"Codigo: "<<codigo<<"\t"<<"Precio: "<<precio<<endl;
}

