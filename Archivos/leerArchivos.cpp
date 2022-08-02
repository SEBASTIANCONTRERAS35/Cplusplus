#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;


int main (){
ifstream archivo;
string texto;
archivo.open("numerodefrases.txt",ios::in);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
	
	return 0;
}
