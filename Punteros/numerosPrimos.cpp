#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int numero,*dir,conteo=0;
	
	
	cout <<"Dame un numero: "; cin>>numero;
	dir=&numero;
	
	for (int i=1;i<*dir;i++){
		if (*dir%i==0){
			conteo++;
		}
	}
	if (conteo>2){
		cout<<"El numero no es primo"<<endl;
		cout<<"Direccion: "<<dir;
	}
	else{ cout<<"El numero  es primo"<<endl;
		cout<<"Direccion: "<<dir;
	}
	
	getch ();
	return 0;
}
