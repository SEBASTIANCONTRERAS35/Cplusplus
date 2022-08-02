#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main (){
	
	char hola []="Hola que tal ";
	char nombre [100];
	
	cout <<"Dime tu nombre: ";
	cin.getline(nombre,100,'\n');
	system ("clear");
	strcat(hola,nombre);
	cout<<endl<<hola<<endl;
	getch ();
	return 0;
}
