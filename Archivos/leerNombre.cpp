#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream archivo;
string nombre,texto;
cout<<"Dame el nombre del archivo que quieres leer"<<endl;
getline(cin,nombre);
archivo.open(nombre.c_str(),ios::in);
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
