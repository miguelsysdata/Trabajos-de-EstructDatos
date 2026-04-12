#ifndef NODO_H
#define NODO_H
#include "Estudiante.h"
class nodo
{
	private:
		
	public:
		estudiante dato;
		nodo * siguientePtr;
		nodo();
		~nodo();
		void imprimir();
};

#endif

