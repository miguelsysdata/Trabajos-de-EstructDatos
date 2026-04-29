#include "lista.h"
lista::lista(){
	setPrimerPtr(0);
	setUltimoPtr(0);
}
lista::~lista(){
}
void lista::setPrimerPtr(nodo * p){
	primerPtr=p;
}
void lista::setUltimoPtr(nodo* u){
	ultimoPtr=u;
}
nodo * lista::getPrimerPtr(){
	return primerPtr;
}
nodo * lista::getUltimoPtr(){
	return ultimoPtr;
}
void lista::imprimir(){
	cout<<"Primer apuntador: "<<getPrimerPtr()<<"\t"<<"Ultimo apuntador: "<<getUltimoPtr()<<endl;
}
void lista::insertarInicio(){
        nodo * temp = new nodo();
        if(primerPtr==0){
            primerPtr=temp;
            ultimoPtr=temp;
        }
        else{
            temp->setSiguientePtr(primerPtr);
            primerPtr=temp;
        }
}
void lista::insertarFinal(){
	nodo * temp = new nodo();
        if(ultimoPtr==0){
            primerPtr=temp;
            ultimoPtr=temp;
        }
        else{
            ultimoPtr->setSiguientePtr(temp);
            ultimoPtr=temp;
        }
}
void lista::mostrar(){
	nodo * aux=primerPtr;
	if (primerPtr==0){
		cout<<"Lista vacia"<<endl;
	}
	else{
		while(aux!=0){
			aux->imprimir();
			aux= aux->getSiguientePtr();
		}
	}
}
