#include <iostream>
#include <conio.h>
using namespace std;
struct persona{
	char nombre[30];
	int edad;
}p1;

void pedirDatos ();
void mostrarDatos(persona);
int main (){
	pedirDatos();
	mostrarDatos(p1);
	getch ();
	return 0;
}
void pedirDatos(){
	cout <<"Dime tu nombre: "; cin.getline(p1.nombre,30,'\n');
	cout<<"Dame tu edad: "; cin>>p1.edad;
	
}
void mostrarDatos(persona p){
	cout<<"\n\nNombre: "<<p.nombre;
	cout<<"\n Edad: "<<p.edad;
}
