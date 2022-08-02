#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main (){
		
	int matriz1[200][200];
	int filas,columnas,aletorio;
	
	cout<<"Cuantas filas tiene la matriz: ";cin>>filas;
	cout<<"Cuantas columnas tiene la matriz: ";cin>>columnas;
	
	srand(time(NULL));
		for (int i=0;i<filas;i++){
		
		for(int j=0;j<columnas;j++)
	{
					
				matriz1[i][j]=1+rand()%(100);
				
	}
	cout<<endl;
}
for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			
					cout<<matriz1[i][j]<<" ";
			
				
			}
			cout<<endl;
		}
	return 0;
}
