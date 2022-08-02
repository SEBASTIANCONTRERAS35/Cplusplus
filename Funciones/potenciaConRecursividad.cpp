#include <iostream>
#include <conio.h>
using namespace std;
int potencia (int,int);
int main (){
	int base,potencias;
	cout<<"Dame la base ";cin>>base;
	cout<<"Dame el exponente: ";cin>>potencias;
	cout<<"\Potencia de "<<base<<" elevado a"<<potencias<<"es: "<<potencia(base,potencias)<<endl;
	
	getch ();
	return 0;
}

int potencia (int x,int y){
	int pot;
	if (y==1){
		pot= x;
	}
	else {
		pot= x *potencia(x,y-1);
	}
	return pot;
}
