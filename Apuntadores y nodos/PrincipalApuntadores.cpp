#include <iostream>
#include <string>
#include "nodo.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

void leerTeclado(int[]);
void leerArchivo(int[]);
void guardar(int[]);
void mostrar(int[]);

int main (int argc, char** argv){
	nodo x,y;
	x.imprimir();
	y.imprimir();
	nodo * z=&y;
	x.siguientePtr=&y;
	x.imprimir();
	z ->imprimir();
	/*int curso[5]={0};
    cout<<"Datos del arreglo"<<endl;
	cout<<&edad<<endl;
	estudiante * edadPtr=&edad;
	edadPtr ->imprimir();
	cout<<&edadPtr<<endl;*/	
	return 0;
}

