#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void mostrarM(int m[][3],int,int);
void alCuadrado(int m[][3],int,int);

int main (){
	const int filas=2;
	const int columnas= 3;
	int m[filas][columnas]={{1,2,3},{4,5,6}};
	mostrarM(m,filas,columnas);
	alCuadrado(m,filas,columnas);
	getch ();
	return 0;
}
void mostrarM(int m[][3],int filas,int columnas){
	cout<<"Matriz original"<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
void alCuadrado(int m[][3],int filas,int columnas){
	
	cout<<"Matriz al Cuadrado"<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<pow(m[i][j],2)<<" ";
		}
		cout<<endl;
	}
	
	
	
}
