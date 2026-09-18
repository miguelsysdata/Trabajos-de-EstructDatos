#include<iostream>
#include<fstream>

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
	
	int n;
	FILE *p, *q, *r;	
	estudiante curso[10];
		
	p = fopen("estudiantes.txt", "r");
	q = fopen("aprobados.txt", "w");
	r = fopen("reprobados.txt", "w");
	
	for(int i=0; i<10; i++){
		fscanf(p, "%d %s %f", &curso[i].cod, &curso[i].nombre, &curso[i].prom);
	}
	
	while(!feof(p)){
		fscanf(q, "%f %s %f", &n);
	
	}
	
	fclose(p);
	for(int i=0; i<10; i++)
		cout<<"\n"<<curso[i].cod<<"\t"<<curso[i].nombre<<"\t"<<curso[i].prom;
		
}
