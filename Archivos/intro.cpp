#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();

int main (){
	escribir();
	
	
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombreArchivo,frase;
	cout<<"Dame el nombre del archivo"<<endl;
	getline(cin,nombreArchivo);
	
	
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	cout<<"Dime el texto del archivo: ";
	getline(cin,frase);
	archivo<<frase;
	archivo.close();
	}
	
	


