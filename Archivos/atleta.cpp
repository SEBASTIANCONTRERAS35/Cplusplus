#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Registro{
	float hora;
	int pulsaciones;
};
void menu();
void comenzar();
void aniadir();
void mostrar();
int main (){
	menu();
	
	
	return 0;
}

void menu(){
	
	int opcion;
	do{
		system("clear");
		cout<<"\t Menu"<<endl;
		cout<<"1.Comenzar mediciones"<<endl;
		cout<<"2.Añadir pulsaciones"<<endl;
		cout<<"3.Mostrar pulsaciones"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Opcion: ";cin>>opcion;
		
		
		switch (opcion){
			case 1: comenzar();break;
			case 2:aniadir();break;
			case 3:mostrar();system("pause");break;
			case 4:break;
			default:"Digite una opcion valida";break;
			system("clear");
			
		}
	}while(opcion!=4);
	
}
void comenzar(){
	system("clear");
	ofstream archivo;
	Registro pulso;
	archivo.open("Pulsaciones.dat",ios::out|ios::binary);
	
		
	if (archivo.fail()){
		cout<<"No se puede crear el archivo";
		exit(1);
	}
cout<<"Hora: ";cin>>pulso.hora;
cout<<"Pulsaciones: ";cin>>pulso.pulsaciones;

archivo.write((char*)&pulso,sizeof(Registro));
archivo.close();
	
		
}

void aniadir(){
		system("clear");
			ofstream archivo;
	Registro pulso;
	archivo.open("Pulsaciones.dat",ios::app|ios::binary);
	
		
	if (archivo.fail()){
		cout<<"No se puede crear el archivo";
		exit(1);
	}
cout<<"Hora: ";cin>>pulso.hora;
cout<<"Pulsaciones: ";cin>>pulso.pulsaciones;

archivo.write((char*)&pulso,sizeof(Registro));
archivo.close();
	
	}
	void mostrar(){
			system("clear");
		
					ifstream archivo;
	Registro pulso;
	archivo.open("Pulsaciones.dat",ios::in|ios::binary);
	
		
	if (archivo.fail()){
		cout<<"No se puede crear el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		archivo.read((char*)&pulso,sizeof(Registro));
		if (!archivo.eof()){
			cout<<"Hora: "<<pulso.hora<<endl;
		
				cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl;
				cout<<endl;
		}
	}


archivo.close();
		
	}
