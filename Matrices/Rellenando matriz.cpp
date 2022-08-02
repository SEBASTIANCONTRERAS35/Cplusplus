#include <iostream>
#include <conio.h>

using namespace std;

int main (){
		int matriz [100][100],filas,columnas;
		
		cout<<"Dame el numero de filas: "<<endl; cin>>filas;
		cout<<"Dame el numero de columnas"<<endl;cin>>columnas;
		
		for (int i=0;i<filas;i++){
			
			for (int j=0;j<columnas;j++){
				cout<<"Dame un numero ["<<i<<"] ["<<j<<"]";
				cin>>matriz[i][j];
				
			}
		}
		for(int i=0;i<filas;i++){
			for (int j=0;j<columnas;j++){
				cout<<matriz[i][j];
			}
			cout<<endl;
		}
		

getch();
return 0;
}
