#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main (){
	
	char nombre[30];
	cout<<"Dime tu nombre EN MAYUSCULAS: ";cin.getline(nombre,30,'\n');
	
	if (nombre[0]=='A'){
		strlwr(nombre);
	}
	cout<<endl<<nombre<<endl; 
	
	getch ();
	return 0;
}
