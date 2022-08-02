#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	int numero[10],*dir;
	dir=numero;
	for (int i=0;i<10;i++){
		
		cout<<"Dame un numero: ";cin>>numero[i];
	}
	for (int i=0;i<10;i++){
		if (*dir%2==0){
			cout<<*dir<<"  es numero par\n";
			cout<<"Ubicacion: "<<dir<<endl;
		}
		else{
			cout<<*dir<<"  es numero impar\n";
			cout<<"Ubicacion: "<<dir<<endl;
		}
		dir++;
	}
	
	getch ();
	return 0;
}
