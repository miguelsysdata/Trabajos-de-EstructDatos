#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

struct Producto{
	private:
		
	public:
		string nombre;
		int codigo;
		float precio;
		
		Producto();
		~Producto();
		void imprimir();
	protected:
};

#endif
