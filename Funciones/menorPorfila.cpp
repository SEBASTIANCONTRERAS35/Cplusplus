#include <iostream>
#include <conio.h>
using namespace std;
void matriz();
int m[200][200],filas,columnas;

int ObtenerMenor(int m[][200],int,int);
int main (){
	matriz();

	cout<<ObtenerMenor(m,filas,columnas);
	
	getch();
	return 0;
}

void matriz(){
	cout<<"Cuantas filas tiene tu matriz: ";cin>>filas;
	cout<<"Cuantas columnas tiene tu matriz";cin>>columnas;
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
		cout<<"Dime un numero: ["<<i<<"]["<<j<<"]";cin>>m[i][j];
		}
	}
}
int ObtenerMenor(int m[][200],int filas,int columnas)

{
	int filamenor;
	int menor =9999;
	cout<<"De que numero de fila quieres sacar su menor: "<<endl;cin>>filamenor;
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<filas;j++){
			if (i==filamenor-1){
				if (m[i][j]<menor){
				menor=m[i][j];
				return menor;
			}
			
				}
			
		}
		cout<<endl;
	}
}
