#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
void crear();
void leer();
struct Registros{
	char nombre[30];
	char apellido[30];
};

int main (){
	crear();
	leer();
	return 0;
}
void crear(){
	ofstream archivo;
	archivo.open("Archivos_binarios.dat",ios::out |ios::binary);
	
	if (archivo.fail()){
		cout<<"No se puede crear el archivo";
		exit(1);
	}	
	Registros persona;
	system("clear");
	cout<<"Nombre: ";
	cin.getline(persona.nombre,20,'\n');
		cout<<"Apellido: ";
		cin.getline(persona.apellido,20,'\n');

	archivo.write((char *)&persona,sizeof(Registros));
	archivo.close();
	
	
}
void leer(){
	ifstream archivo;
	archivo.open("Archivos_binarios.dat",ios::in|ios::binary);
	
if (archivo.fail()){
		cout<<"No se puede crear el archivo";
		exit(1);
	}	
	
	Registros persona;
	archivo.read((char *)&persona,sizeof(Registros));
	cout<<"\t Datos:"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
		cout<<"Apellido: "<<persona.apellido<<endl;
	archivo.close();
	
	
}
