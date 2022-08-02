#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ofstream archivo;
	string texto;
	archivo.open("intro.txt",ios::app);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	cout<<"Dame el texto que quieres añadir";
	getline(cin,texto);
		archivo<<texto;
	archivo.close();
	
	return 0;
}
