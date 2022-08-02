#include <iostream>
#include <conio.h>
using namespace std;
struct persona{
	char nombre[30];
	int edad;
}persona1,*puntero=&persona1;
void mostrar(persona *);
void datos();
int main (){
	datos();
	mostrar(puntero);
	getch ();
	return 0;
	
}

void datos(){
	
	cout<<"dime tu nombre: ";
	cin.getline(puntero->nombre,30,'\n');
		cout<<"dime tu edad: ";
	cin>>puntero->edad;
}
void mostrar(persona *puntero_persona){
	cout<<"Nombre: "<<puntero_persona->nombre<<endl;
	cout<<"Edad: "<<puntero_persona->edad<<endl;
}
