#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main (){
	char nombre[200],consola[200];
	
	cout<<"Dime tu nombre: ";
	cin.getline(nombre,200,'\n');
	strcpy(consola,nombre);
	system ("clear");
	cout<<consola<<endl;
	
	
	getch ();
	return 0;
}
