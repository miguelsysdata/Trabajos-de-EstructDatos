#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <string>
#include "maleta.h"
using std::cout;
using std::endl;
class nodo
{
	private:
		
		maleta dato;
		nodo * siguientePtr;
				
	public:
		nodo();
		~nodo();
		void setDato(maleta);
		void setSiguientePtr(nodo *);
		maleta getDato();
		nodo * getSiguientePtr();
		void imprimir();
	protected:
};

#endif
