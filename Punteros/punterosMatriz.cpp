#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void datos();
void mostrar(int**,int,int);
int **puntero,filas,columnas;
int main (){
	datos();
	mostrar(puntero,filas,columnas);
	for (int i=0;i<filas;i++){
		delete[]puntero[i];
			
	}
	delete[]puntero;
	getch ();
	return 0;
}
void datos(){
	cout<<"Dame el numero de filas: ";
	cin>>filas;
	cout<<"Dame el numero de columnas";
	cin>>columnas;
	puntero=new int *[filas];
	for (int i=0;i<filas;i++){
		puntero[i]=new int [columnas];
		
	}
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<"Dame un numero ["<<i<<"]["<<j<<"]";
			cin>>*(*(puntero+i)+j);
		}
	}
}
void mostrar(int**,int filas ,int columnas){
	cout<<"\n Matriz: "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<*(*(puntero+i)+j);
		}
		cout<<endl;
	}
}
