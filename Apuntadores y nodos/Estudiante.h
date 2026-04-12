#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

struct estudiante
{
	private:
		int codigo;
	public:
	
		string nombre;
		estudiante();
		estudiante(string, int);
		~estudiante();
		void setNombre(string);
		void setCodigo(int);
		string getNombre();
		int getCodigo();
		void imprimir();
};

#endif

