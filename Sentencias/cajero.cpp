#include <iostream>
using namespace std;

int main (){
	int saldo_inicial=1000,opc;
	float extra, saldo_final;
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1.Ingresar dinero en cuenta"<<endl;
	cout<<"2.Retirar dinero"<<endl;
	cout<<"3.Salir"<<endl;
	cin>>opc;
	switch (opc){
		case 1:
			cout<<"Cuanto ingresaras?";cin>>extra;
			saldo_final=saldo_inicial+extra;
			cout<<"Tu saldo es: "<<saldo_final;
			break;
			
			 
		case 2:cout<<"Cuanto retiras?";cin>>extra;
		if(extra>saldo_inicial){
			cout<<"No tienes tanto dinero"; break;
		}
	    else{saldo_final=saldo_inicial-extra; 
		cout<<"Tu saldo es: "<<saldo_final;break;
		}	
		
		case 3:cout<<"Adios"; break;
		default: "Opcion no valida"; break;
	}
	
	
	return 0;
}
