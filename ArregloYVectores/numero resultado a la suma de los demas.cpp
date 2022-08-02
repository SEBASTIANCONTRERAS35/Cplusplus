#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numeros[]={1,4,3,10,2};
	int suma,mayor=0;
	for (int i=0;i<5;i++){
		suma+=numeros[i];
		if(numeros [i]>mayor){
			mayor =numeros[i];
		}
	}
	
	if(mayor==suma-mayor){
		cout<<"El numero "<<mayor<<"  equvale a la suma de los demas";
	}
	else cout<<"No existe coincidencia";
	
		getch();
	return 0;
}
