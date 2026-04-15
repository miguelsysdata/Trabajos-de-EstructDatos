#include "maleta.h"
#include "nodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mostrar(maleta[]);

int main(int argc, char** argv) {
	
	nodo x, y;
	x.imprimir();
	y.imprimir();
	
	x.setSiguientePtr(&y);
	cout<<endl;
	nodo * temp = new nodo();
	y.setSiguientePtr(temp);
	x.imprimir();
	y.imprimir();
	cout<<endl;
	cout<<"valor de temp: "<<temp<<endl;
	cout<<"Posicion de temp: "<<&temp<<endl;

	/*maleta toto[3];
	mostrar(toto);
	toto[0].setColor("Amarillo");
	toto[0].setSize(10);
	mostrar(toto);
	for(int i=0; i<3; i++){
		cout<<&toto[i]<<endl;
	}*/	
	
	return 0;
}

void mostrar(maleta a[]){
	for(int i=0; i<3; i++){
		cout<<"Color: "<<a[i].getColor()<<
		"\t"<<"Tamaño: "<<a[i].getSize()<<endl;
	}
}
