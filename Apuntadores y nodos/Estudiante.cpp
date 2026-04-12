#include "Estudiante.h"
#include <iostream>
estudiante::estudiante(){
	nombre="Juan Esteban";
	codigo=123;
}
estudiante::estudiante(string n, int c){
	setNombre (n);
	setCodigo (c);
}
estudiante::~estudiante(){	
}
void estudiante::setNombre(string n){
	nombre=n;
}
void estudiante::setCodigo(int c){
	codigo=c;
}
string estudiante::getNombre(){
	return nombre;
}
int estudiante::getCodigo(){
	return codigo;
}
void estudiante::imprimir(){
	cout<<"Nombre: "<<getNombre()<<"\t"<<"Codigo "<<getCodigo()<<endl;
}

