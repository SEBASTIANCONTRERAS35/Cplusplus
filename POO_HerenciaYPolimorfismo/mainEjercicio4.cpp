#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador1.h"
#include "Medico.h"
using namespace std;

Persona * equipo[4];



void viajarEquipo(){
for (int i=0;i<4;i++){
	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<"->";
	equipo[i]->viajar();
}
}

void entrenamientoEquipo(){
	for (int i=0;i<4;i++){
	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<"->";
	equipo[i]->entrenamiento();
}
}

void JugarPartido(){
	for (int i=0;i<4;i++){
	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<"->";
	equipo[i]->partidoFutbol();
}
}

void planificarEntrenamientoEquipo(){
		cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<"->";
	((Entrenador *)equipo[2])->planificarEntrenamiento();
}

void HacerEntrevista(){
	for (int i=0;i<2;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<"->";
	((Futbolista *)equipo[i])->entrevista();
	}
}
void CurarLesiones(){
		cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<"->";
	((Medico *)equipo[3])->curarLesion();
}
void menu(){
	int opc;
	do{
		cout<<"\n\tMenu"<<endl;
		cout<<"1.Viaje"<<endl;
		cout<<"2.Entrenar"<<endl;
		cout<<"3.Partido"<<endl;
		cout<<"4.Planificar entrenamiento"<<endl;
		cout<<"5.Entrevista"<<endl;
		cout<<"6.Curar lesion"<<endl;
		cout<<"7.Salir"<<endl;
		cout<<"Digite una opcion: ";cin>>opc;
		cout<<endl;
		switch(opc){
			case 1: viajarEquipo();
			break; 
			case 2: entrenamientoEquipo();
			break; 
			case 3:JugarPartido(); 
			break; 
			case 4:planificarEntrenamientoEquipo(); 
			break; 
			case 5:HacerEntrevista(); 
			break; 
			case 6: CurarLesiones();
			break; 	
			case 7: break;  	
		    default:cout<<"Digite una opcion valida"<<endl;break;
		}
		system("pause");
		system("clear");
		cout<<endl;
	}while(opc!=7);
	
	
}
int main(int argc, char** argv) {
	equipo[0]=new Futbolista("Gonzalo","Higuan",30,9,"Delantero");
	equipo[1]=new Futbolista("Paulo","Dybala",24,10,"Delantero");
	equipo[2]=new Entrenador("Massimiliano","Allegri",50,"Defensiva");
	equipo[3]=new Medico("Alex","Marroni",59,"Fisioterapeuta",20);
	
	menu();
	
	
	
	return 0;
}
