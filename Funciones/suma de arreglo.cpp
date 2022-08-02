#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int vec[100],tam;
int calcularSuma(int vec[],int);
int main (){
	pedirDatos();
	cout<<"\n Suma: "<<calcularSuma(vec,tam)<<endl;
	
	getch ();
	return 0;
}

void pedirDatos(){
	cout<<"Dime el numero de elementos: "; cin>>tam;
	for (int i=0;i<tam;i++){
		cout<<"Dime un numero"<<endl;cin>>vec[i];
		
	}
}
int calcularSuma(int vec[],int tam){
	int suma=0;
	for(int i=0;i<tam;i++){
		suma+=vec[i];
	}
	return suma;
}
