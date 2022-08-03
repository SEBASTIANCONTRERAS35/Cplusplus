#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();
void leer();

int main (){
	escribir();
	leer();
	
	return 0;
}
void escribir(){
	ofstream archivo;
	archivo.open("Posicion.txt",ios::out);
	
	if (archivo.fail()){
		cout<<"No se puedo crear el archivo";
		exit(1);
	}
	
	cout<<"Posicion del archivo: "<<archivo.tellp()<<endl;
	
	archivo<<"Hola que ondaa";
//	archivo.seekp(6);
//	archivo<<"BICHOTEE";
		cout<<"Posicion del archivo: "<<archivo.tellp()<<endl;
	archivo.close();
	
}
void leer(){
	
	ifstream archivo;
	archivo.open("Posicion.txt",ios::in);
	
	if (archivo.fail()){
		cout<<"No se puedo crear el archivo";
		exit(1);
	}
	string linea;
	archivo.seekg(5);
		cout<<"Posicion del archivo: "<<archivo.tellg()<<endl;
	getline(archivo,linea);
	cout<<linea<<endl;
	archivo.close();
}
