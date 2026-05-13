#include <iostream>
#include <fstream>
#include <cstdlib>
using std::cout;
using std::cin;

// Prototipos de funciones
void menu();
int xmenu();
void leer(const char* datosProductos.txt);
void mostrar();
void guardar(const char* datosProductos.txt);

int main(int argc, char** argv) {
	int opcion;  // ? DECLARAR LA VARIABLE
	
	cout << "¿Qué taller deseas ejecutar?\n";
	cout << "[1] Taller 4 - Proyecto con archivos\n";
	cout << "[2] Taller en clase\n";
	cout << "Opción: ";
	cin >> opcion;
	
	switch(opcion){
		case 1: {
			// Crear aquí la lista (según tu clase lista)
			// lista compras;  // ? Instanciar la lista
			
			menu();
    		xmenu();
			
			// leer(compras, "datosProductos.txt");
			// mostrar(compras);
			// guardar(compras, "datosFinal.txt");
			break;
		}
		case 2: {
			// Taller en clase
			// lista compras, caras, baratas;
			// leer(compras, "datosProductos.txt");
			// compras.mostrar();
			// baratas.mostrar();
			break;
		}
		default:
			cout << "Opción inválida\n";
			return 0;
	}
	
	cin.ignore();
	return 0;  // ? RETORNAR
}

// Contenido de funciones
int xmenu(){
	int menup; 
	cout << "\n\nElja una opción: "; 
	cin >> menup;
	
	switch (menup) {
		case 1:
           cout << "Leyendo datos de los productos..." << std::endl;
           break;
		case 2:
           cout << "Mostrando productos..." << std::endl;
           break;
		case 3:
           cout << "Eliminando del comienzo..." << std::endl;
           break;
		case 4:
           cout << "Eliminando del final..." << std::endl;
           break;
		case 5:
		   cout << "Guardando productos..." << std::endl;
           break;
		case 6:
		   system("pause");
       	   return 0;
		default:
			cout << "Opción inválida\n";
	}
	return menup;
}

void menu(){
	cout << "- -- - -- - -- - -- - -- - -- - -- -\n\n"
		 << "\tB I E N V E N I D O\n\n"	
		 << "- -- - -- - -- - -- - -- - -- - -- -\n\n"
		 << "\t   M E N U\n\n"
		 << "[ 1 ] Leer los datos de los productos de la lista\n"
		 << "[ 2 ] Mostrar los productos de la lista\n"
		 << "[ 3 ] Eliminar del comienzo de la lista\n"
		 << "[ 4 ] Eliminar del final de la lista\n"
		 << "[ 5 ] Guardar los productos de la lista\n"
		 << "[ 6 ] Salir\n";
}
