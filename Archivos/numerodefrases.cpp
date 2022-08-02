#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ofstream archivo;
		string nombreArchivo,frase;
		int frases;
	cout<<"Dame el nombre del archivo"<<endl;
	getline(cin,nombreArchivo);
		
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Cuantas frases quieres ingresar: ";
	cin>>frases;
	for (int i=0;i<frases;i++){
		fflush(stdin);
		cout<<"Dime una frase"<<endl;
		getline(cin,frase);
		archivo<<frase<<endl;
		
	}
	archivo.close();
	
	
	return 0;
}
