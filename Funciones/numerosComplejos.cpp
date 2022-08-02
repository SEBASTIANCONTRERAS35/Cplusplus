#include <iostream>
#include <conio.h>
using namespace std;

struct complejo{
	float real, imaginaria;
	
}z1,z2;
void pedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);
int main (){
	pedirDatos();
	complejo x=suma(z1,z2);
	muestra(x);
	
	getch ();
	return 0;
}
void pedirDatos(){
	cout<<"Dame un numero complejo: "<<endl;
	cout<<"Parte real: ";cin>>z1.real;
	cout<<"\nParte imaginaria: ";cin>>z1.imaginaria;
	cout<<endl;
	cout<<"\nParte real: ";cin>>z2.real;
	cout<<"\nParte imaginaria: ";cin>>z2.imaginaria;
}
complejo suma(complejo z1,complejo z2){
z1.real+=z2.real;
z1.imaginaria+=z2.imaginaria;	
return z1;
}
void muestra(complejo x){
	cout<<"\n Resultado: "<<x.real<<" ,"<<x.imaginaria<<endl;
}
