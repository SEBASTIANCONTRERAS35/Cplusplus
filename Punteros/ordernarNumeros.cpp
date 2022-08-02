#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void Datos();
void ordernar(int *,int);
void mostrar (int*,int);
int n,*elemento;
int main (){
	Datos();
	ordernar(elemento,n);
	mostrar(elemento,n);
	delete []elemento;
	getch ();
	return 0;
}
void Datos(){
	cout<<"Dame el numero de elementos del arreglo: ";cin>>n;
	elemento=new int [n];
	for (int i=0;i<n;i++){
		cout<<"Dame un numero: ";cin>>*(elemento+i);
	}
}
void ordernar(int *elemento,int n){
	int aux;
	for (int i=0;i<n;i++){
		
		for (int j=0;j<n-1;j++){
			if (*(elemento+j)>*(elemento+j+1)){
				aux =*(elemento+j);
				*(elemento+j)=*(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
		
	}
}
void mostrar (int *elemento,int n){	
cout<<"\n\nArreglo ordenado: "<<endl;
	for (int i=0;i<n;i++){
	cout<<*(elemento+i)<<" ";
		
	}
}
