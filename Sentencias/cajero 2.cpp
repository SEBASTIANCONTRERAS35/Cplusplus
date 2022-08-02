#include <iostream>
#include <math.h>
using namespace std ;

int main (){
	int opc,ImparPar;
	float numero,cubo;
	cout <<"\tBienvenido a tu menu"<<endl; 
	cout <<"1.Cubo de un numero"<<endl;
	cout <<"2.Numero par o impar"<<endl;
	cout <<"3.Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"Dame un numero"<<endl;cin>>numero;
				cubo= pow(numero,3);
				cout<<"El cubo es: "<<cubo; break;
				
		case 2: cout<<"Dame un numero: "; cin>>ImparPar;
				if (ImparPar%2==0){
				cout<<ImparPar<<" Es par";break;
									}
				else {
				cout<<ImparPar<<" Es inpar";break;
					}
	

	}
	
	
	return 0;
}
