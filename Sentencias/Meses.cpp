#include <iostream>
using namespace std;

int main (){
	
	int numero;
	
	cout<<"Dame un numero: ";cin>>numero;
	
	switch (numero){
		case 1: cout<<numero<<" es Enero";break;
		case 2: cout<<numero<<" es Febrero";break;
		case 3: cout<<numero<<" es Marzo";break;
		case 4: cout<<numero<<" es Abril";break;
		case 5: cout<<numero<<" es Mayo";break;
		case 6: cout<<numero<<" es Junio";break;
		case 7: cout<<numero<<" es Julio";break;
		case 8: cout<<numero<<" es Agosto";break;
		case 9: cout<<numero<<" es Septiembre";break;
		case 10: cout<<numero<<" es Octubre";break;
		case 11: cout<<numero<<" es Noviembre";break;
		case 12: cout<<numero<<" es Diciembre";break;
		default:cout<<"No corresponde a ningun mes";
	}
	
	return 0;
}
