#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matriz [200][200],matrizTranspuesta[200][200],n,filas,columnas,conteo=0;
	char band='F';
	cout<<"Cuantas filas tiene la matriz?: ";cin>>filas;
	cout<<"Cuantas columnas tiene la matriz?: ";cin>>columnas;
	if (filas==columnas){
		
		for (int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<"1.Dame un numero ["<<i<<"] ["<<j<<"]";
				cin>>matriz[i][j];
		
			}
			cout<<endl;
		}
		cout<<endl;
		for (int i=0; i<filas;i++){
		for (int j=0; j<columnas;j++){
			cout<<matriz[i][j];
				
		}
			cout<<endl;
	}
	cout<<endl;
	
			for (int i=0; i<filas;i++){
		for (int j=0; j<columnas;j++){
			matrizTranspuesta[i][j]=matriz[j][i];
			cout<<matrizTranspuesta[i][j];
				
		}
			cout<<endl;
	}
	
	
	for (int i=0;i<filas;i++){
		for (int j=0; j<columnas;j++){
			if(matriz[i][j]==matrizTranspuesta[i][j]){
			conteo++;
		}
		
		
		}
	}
		if(conteo==filas*columnas){
			cout<<"L A  M A T R I Z  E S  S I M E T R I C A";
		}
		else {
			cout<<"L A  M A T R I Z  N O  E S  S I M E T R I C A";
		}
	}	
	else {
		cout<<"La matriz debe de ser cuadrada";
	}
	
	
		
	
	
	getch();
	return 0;
}
