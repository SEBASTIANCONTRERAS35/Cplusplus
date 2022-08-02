#include <iostream>
#include <conio.h>
using namespace std;

struct Ciclista {
	int horas;
	int min;
	int seg;
}etapa[3],*puntador=etapa;

void datos();

void calcular(Ciclista*);

void resultados(int,int,int);

int main(){
	datos();
	calcular(puntador);
	
	getch ();
	
	return 0;
}

void datos(){
	for (int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Etapa: "<<i+1<<endl;
		cout<<"Horas: ";cin>>(puntador+i)->horas;
		cout<<"Min: ";cin>>(puntador+i)->min;
		cout<<"Seg: ";cin>>(puntador+i)->seg;
	
		cout<<endl;
	}
	
}

		




void calcular(Ciclista *puntero){
	int horasT=0,minT=0,segT=0;
	
	for (int i=0;i<3;i++){
	horasT+=(puntador+i)->horas;
		minT+=(puntador+i)->min;
		segT+=(puntador+i)->seg;
	}	
	if (segT >=60){
		segT-=60;
		minT++;
	}
	if(minT>=60){
		minT-=60;
		horasT++;
	

	}	
	cout<<"\nHoras: "<<horasT<<endl;
		cout<<"Minutos: "<<minT<<endl;
			cout<<"Segundos: "<<segT<<endl;
			cout<<endl;
}
