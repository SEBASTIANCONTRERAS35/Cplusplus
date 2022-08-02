#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void cuadrado(int vec[],int);
void muestra(int vex[],int);
int main (){
	const int tam=5;
	int vec[tam]={1,2,3,4,5};
		//Por referencia
	cuadrado(vec,tam);
	muestra(vec,tam);
	
	getch ();
	return 0;
}
void cuadrado(int vec[],int tam){
	for (int i =0; i<tam;i++){
		vec[i]=pow(vec[i],2);
	}
}

void muestra(int vex[],int tam){
	for (int i=0;i<tam;i++){
		cout<<vex[i]<<" ";
	}
}
