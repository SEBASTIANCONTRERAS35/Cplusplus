#include <iostream>
#include "Vehiculo.h"
using namespace std;
int main(int argc, char** argv) {
	
	Vehiculo* coches;
	int numeroVehiculos,indiceBarato;
	string marca,modelo;
	float precio;
	cout<<"Cuantos vehiculos: ";cin>>numeroVehiculos;
	coches=new Vehiculo[numeroVehiculos];
	
	for (int i=0;i<numeroVehiculos;i++){
		cout<<"Dame los datos del vehiculo "<<i+1<<": "<<endl;
		cin.ignore();
		cout<<"Marca: ";getline(cin,marca);
		cout<<"Modelo: ";getline(cin,modelo);
		cout<<"Precio: ";cin>>precio;
		
		coches[i]=Vehiculo(marca,modelo,precio);
		
		
		
	}
	
	indiceBarato=Vehiculo::indiceMBarato(coches,numeroVehiculos);
	cout<<"\nEl coche mas barato es: "<<endl;
	(coches+indiceBarato)->mostrarDatos();
	
	delete[]coches;
	
	return 0;
}
