#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

	struct estudiante{
		int cod;
		char nombre[20];
		float prom;
	};
	
main(){
	
	FILE *p;	
	estudiante curso[10], aux;
	int pmay=0;
	
	if(p=fopen("estudiantes.txt","r")){
		
		for(int i=0; i<10; i++){
			fscanf(p, "%d %s %f", &curso[i].cod, &curso[i].nombre, &curso[i].prom);
		}
		fclose(p);
		
		//mostrar datos
		for(int i=0; i<10; i++)
			cout<<"\n"<<curso[i].cod<<"\t"<<curso[i].nombre<<"\t"<<curso[i].prom;
		
		for(int i=0; i<10; i++){
			pmay=i;
			for(int j=i+1; j<10; j++){
				if(curso[j].prom>curso[pmay].prom)
					pmay=j;
			}
			aux=curso[i];
			curso[i]=curso[pmay];
			curso[pmay]=aux;
		}
		
		cout<<"\n______________________________\n"
			<<"\nDatos ordenados por promedio: "
			<<"\n______________________________\n";
		for(int i=0; i<10; i++){
			cout<<"\n"<<curso[i].cod<<"\t"<<curso[i].nombre<<"\t"<<curso[i].prom;
			getch();
		}
			
			
	}else
		cout<<"No se pudo abrir el archivo..."<<endl;
	
		
}
