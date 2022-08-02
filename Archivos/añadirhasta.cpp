#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

int main (){
	
	
	ofstream archivo;
	string texto,nombre;
	char rpt;
	cout<<"Que archivo quieres añadir texto?: ";
	getline(cin,nombre);
	
		archivo.open(nombre.c_str(),ios::app);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	do{
		fflush(stdin);
		cout<<"Dame el texto que quieres añadir";
	getline(cin,texto);
		archivo<<texto<<endl;
	cout<<"Quieres añadir otra linea?:  ";
	cin>>rpt;
	
		
	}while (rpt=='s');
	
	archivo.close();
	return 0;
}
