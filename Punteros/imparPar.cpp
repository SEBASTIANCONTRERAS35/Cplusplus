#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numero,*dir_numero;
	
	cout<<"Dame un numero";cin>>numero;
	dir_numero=&numero;
	if (*dir_numero%2==0){
		cout<<numero<<" es par"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	else if(*dir_numero%2!=0){
	 cout<<numero<<" es impar"<<endl;
	 cout<<"Posicion"<<dir_numero<<endl;
	 }
	
	getch ();
	return 0;
}
