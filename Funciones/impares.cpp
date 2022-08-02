#include <iostream>
#include <conio.h>

using namespace std;
void arreglo();
void impares(int vec[],int);
int vec[100],tam;
int main (){
	arreglo();
	
	impares(vec,tam);
	
	getch ();	
	return 0;
}
void arreglo(){
	cout<<"Dime el tamaño del vector: "; cin>>tam;
	for (int i =0;i<tam;i++){
		
		cout<<"Dame un numero: ";cin>>vec[i];
		
	}
}
void impares(int vec[],int tam){
	for (int i=0;i<tam;i++){
		if (vec[i]%2!=0){
			cout<<vec[i]<<" ";
		}
	}
}
