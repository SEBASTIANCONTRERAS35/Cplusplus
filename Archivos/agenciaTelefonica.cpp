#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;
	ofstream archivo;
void menu();
void crear();
void agregar();
void mostrar();
struct Datos{
	string nombre,apellido,telefono;
	
}datos;



int main (){
	menu();
	
	
	return 0;
}
void menu(){
	int opcion;
	do{
		system("clear");
		cout<<"\t Menu"<<endl;
		cout<<"1.Crear(nombre,apellidos,telefono)"<<endl;
		cout<<"2.Agregar mas contactos"<<endl;
		cout<<"3.Mostrar contactos"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch (opcion){
			case 1:crear();break;
			case 2:agregar();break;
			case 3: mostrar();system("pause");break;
		}
		
	}while(opcion!=4);
}
void crear(){

	char rpt;
	archivo.open("Agenda telefonica.txt",ios::out);
	if (archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	system("clear");
	archivo<<"\t Agenda telefonica"<<endl;
	do{
		
		fflush(stdin);
		cout<<"Nombre:  ";
		getline(cin,datos.nombre);
		cout<<"Apellido: ";
		getline(cin,datos.apellido);
		cout<<"Telefono: ";
		getline(cin,datos.telefono);
		
		archivo<<"Nombre:  "<<datos.nombre<<endl;
		archivo<<"Apellido:  "<<datos.apellido<<endl;
		archivo<<"Telefono:  "<<datos.telefono<<endl;
		system("clear");
		cout<<"Deseas Agregar otro contacto?: ";
		cin>>rpt;
		system("clear");
	}while(rpt=='s'||rpt=='S');
	
	archivo.close();
}

void agregar(){
		char rpt;
	archivo.open("Agenda telefonica.txt",ios::app);
	if (archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	system("clear");
	do{
		
		fflush(stdin);
		cout<<"Nombre:  ";
		getline(cin,datos.nombre);
		cout<<"Apellido: ";
		getline(cin,datos.apellido);
		cout<<"Telefono: ";
		getline(cin,datos.telefono);
		
		archivo<<"Nombre:  "<<datos.nombre<<endl;
		archivo<<"Apellido:  "<<datos.apellido<<endl;
		archivo<<"Telefono:  "<<datos.telefono<<endl;
		system("clear");
		cout<<"Deseas Agregar otro contacto?: ";
		cin>>rpt;
		system("clear");
	}while(rpt=='s'||rpt=='S');
	
	archivo.close();
	
	
}
void mostrar(){
	ifstream archivo;
	string texto;
	system("clear");
		archivo.open("Agenda telefonica.txt",ios::in);
	if (archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
		while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
	
}

