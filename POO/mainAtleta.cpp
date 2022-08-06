#include <iostream>
#include "Atleta.h"
using namespace std;

int main(int argc, char** argv) {
	Atleta* atletas;
	int numeroAtleta,indiceAtleta;
	string nombre;
	float tiempoCarrera;
	int numeroAtletas;
	cout<<"Cuantos atletas competirán?: ";cin>>numeroAtletas;
	atletas=new Atleta[numeroAtletas];
	
	for (int i=0;i<numeroAtletas;i++){
		cout<<"\tDame los datos del atleta "<<i+1<<endl;
	
		cout<<"Dame el numero del atleta: ";cin>>numeroAtleta;	
		fflush(stdin);
		cout<<"Dame su nombre: ";getline(cin,nombre);
		cout<<"Dame su tiempo: ";cin>>tiempoCarrera;
		
		atletas[i]=Atleta(numeroAtleta,nombre,tiempoCarrera);
		
		
	}
	indiceAtleta=Atleta::indiceGanador(atletas,numeroAtletas);
	system("clear");
	cout<<"\n\tAtleta ganador de la carrera es..."<<endl;
	(atletas+indiceAtleta)->mostrarDatos();
	
	
	
	return 0;
}
