#include <iostream>
#include <stdlib.h>
using namespace std;
int m[100][100],filas,columnas;
void datos ();
void simetria(int m[][100],int,int);
int main (){
	datos();
	simetria(m,filas,columnas);
system("pause");
	return 0;
}
void datos(){
	cout<<"Cuantas filas: ";cin>>filas;
	cout<<"Cuantas columnas: ";cin>>columnas;
	
	
	for (int i;i<filas;i++){
		for (int j=0;j<columnas;j++){
			cout<<"Dime un numero: ["<<i<<"]["<<j<<"]";cin>>m[i][j];
		}
	}
	
}
 void simetria(int m[][100],int filas,int columnas){
 	int contador=0;
	 if (filas==columnas){
 	for (int i=0;i<filas;i++){
 		for (int j=0;j<columnas;j++){
 			
 			if(m[i][j]==m[j][i]){
 				contador++;
			 }
		 }
	 }
	 if(contador==filas*columnas){
	 	cout<<"La matriz es simetrica"<<endl;
	 }
	 else cout<<"No es simetrica"<<endl;
}
else cout<<"Debe de ser Cuadrada"<<endl;
 }
