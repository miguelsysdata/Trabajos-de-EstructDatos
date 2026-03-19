#include "producto.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void leer(int []);
void mostrar(int[]);

int main(int argc, char** argv) {
	
	int edad[5];
	leer(edad);
	mostrar(edad);
	
	
	/*Producto x, y, z;
	Producto inventario[3];
	for(int i=0; i<3; i++){
		inventario[i].imprimir();
	}

	
	x.imprimir();
	y.imprimir();
	x.nombre="Papa";
	x.imprimir();
	*/

	return 0;
}

void leer(int a []){
	
	for(int i=0; i<5; i++){
		cout<<"Digita dato: "<<endl;
		std::cin>>a[i];
		
	}
}

void mostrar(int b[]){
	
	cout<<endl;
	for(int i=0; i<5; i++){
		cout<<b[i]<<endl;

	}
}


