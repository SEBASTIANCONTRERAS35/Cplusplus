#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	
	int matriz1[200][200];
	int matriz2[200][200];
	int filas,columnas;
	
	cout<<"Cuantas filas tiene la matriz";cin>>filas;
	cout<<"Cuantas columnas tiene la matriz";cin>>columnas;
	for (int i=0;i<filas;i++){
		
		for(int j=0;j<columnas;j++)
	{
				cout<<"Dame un numero ["<<i<<"] ["<<j<<"]";
					cin>>matriz1[i][j];
	}
	cout<<endl;
}

for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			
					cout<<matriz1[i][j];
				
				
			}
			cout<<endl;
		}
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			
					matriz2[i][j]=matriz1[i][j]*2;
				
				
			}
			cout<<endl;
		}
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			
					cout<<matriz2[i][j];
			
				
			}
			cout<<endl;
		}
	
}
