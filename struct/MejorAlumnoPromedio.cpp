#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
	
};

struct alumno{
	char nombre[30];
	char sexo[20];
	int edad;
	struct promedio calificaciones;
}alumnos[20];

int main (){
int seguir=0;
int mayor=0,pos,i=0;
float promedio;

while (seguir==0){

	fflush(stdin);
	system("clear");
	cout<<"Nombre: ";cin.getline(alumnos[i].nombre,30,'\n');
	cout<<"Sexo: ";cin.getline(alumnos[i].sexo,30,'\n');
	cout<<"Edad: ";cin>>alumnos[i].edad;
	cout<<"Nota1: ";cin>>alumnos[i].calificaciones.nota1;
	cout<<"Nota2: ";cin>>alumnos[i].calificaciones.nota3;
	cout<<"Nota3: ";cin>>alumnos[i].calificaciones.nota2;
	promedio=(alumnos[i].calificaciones.nota1+alumnos[i].calificaciones.nota2+alumnos[i].calificaciones.nota3)/3;
	if (promedio>mayor){
		mayor=promedio;
		pos=i;
	}
	i++;
		cout<<"Quieres meter mas alumnos?: 0/1 ";cin>>seguir;
}
cout<<"\tMejor alumno"<<endl;
cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
cout<<"Edad: "<<alumnos[pos].edad<<endl;
cout<<"Promedio: "<<mayor<<endl;

system("pause");
return 0;
}
