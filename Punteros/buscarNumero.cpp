#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void dato();
void buscar(int *,int);
void mostrar(int*,int);
int *vec,n;
int main (){
	dato();
	mostrar(vec,n);
	buscar(vec,n);
	delete[]vec;
	return 0;
}
void dato(){
	cout<<"Cuantos elementos tiene el arreglo: ";cin>>n;
	vec=new int [n];
	for (int i=0;i<n;i++){
		cout<<"Dame un numero: ";cin>>*(vec+i);
		
		
	}
}
void mostrar(int* vec,int n){
	for (int i=0;i<n;i++){
		cout<<*(vec+i)<<" "<<endl;
	}
}
void buscar(int *vec,int n){
	int numero;
	int band='F';
	cout<<"Que numero buscas?";cin>>numero;
	for (int i=0;i<n;i++){
		if (*(vec+i)==numero){
			cout<<endl<<*(vec+i)<<"  esta en la posicion: "<<i<<"\n En la ubicacion: "<<vec<<endl;
			band='V';
		}
	}
	if (band=='F'){
		cout<<"El numero no se encuentra en el arreglo";
	}
}
