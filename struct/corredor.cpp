#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[20];
}corredor1;


int main (){
	char categoria[20];
	cout<<"Nombre: ";
	cin.getline(corredor1.nombre,30,'\n');
	cout<<"Edad: ";
	cin>>corredor1.edad;
	fflush(stdin);
	cout<<"Sexo: ";
	cin.getline(corredor1.sexo,10,'\n');
	cout<<"Club: ";
	cin.getline(corredor1.club,20,'\n');
	cout<<endl;
	
	if (corredor1.edad<=18){
		strcpy(categoria,"Juvenil");
	}
	else if (corredor1.edad<=40){
		strcpy(categoria, "Senior");
	}
	else strcpy(categoria, "Veterano");
	
	
	cout<<"\n Nombre: "<<corredor1.nombre;
	cout<<"\n Edad: "<<corredor1.edad;
	cout<<"\n Sexo: "<<corredor1.sexo;
	cout<<"\n Club: "<<corredor1.club;
	cout<<"\n Categoria: "<<categoria<<endl;
	getch ();
	return 0;
}
