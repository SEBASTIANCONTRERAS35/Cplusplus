//Precio con iva

#include <iostream>
using namespace std;

int main(){
	float precio, iva, precioFinal;
	cout<< "Digita el precio";
	cin>>precio;
	iva=precio*0.21;
	precioFinal=iva+precio;
	cout<<"\nprecio final es:   "<<precioFinal;
	
	return 0;
}
