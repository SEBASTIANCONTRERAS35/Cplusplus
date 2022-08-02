#include <iostream>
#include <conio.h>
using namespace std;
int vec[100],tam;
void arreglo();
void cambiarSigno(int vec[],int);

int main (){
	
	arreglo();
	cambiarSigno(vec,tam);
	for (int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
	getch ();
	return 0;
}
void arreglo (){
	cout<<"Cuantos lugares tendra el arreglo?: ";cin>>tam;
	for (int i=0;i<tam;i++){
		cout<<"Dame un numero: ";cin>>vec[i];
		
		
	}
	
	
}

void cambiarSigno(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=-1;
	}
}
