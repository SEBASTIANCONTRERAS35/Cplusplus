#include <iostream>
#include <stdlib.h>
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
}alumno1;

int main (){
	float promedio;
	
	cout<<"Nombre: ";cin.getline(alumno1.nombre,30,'\n');
	cout<<"Sexo: ";cin.getline(alumno1.sexo,20,'\n');
	cout<<"Edad: ";cin>>alumno1.edad;
	cout<<"Nota1: ";cin>>alumno1.calificaciones.nota1;
	cout<<"Nota2: ";cin>>alumno1.calificaciones.nota2;
	cout<<"Nota3: ";cin>>alumno1.calificaciones.nota3;
	promedio=(alumno1.calificaciones.nota1+alumno1.calificaciones.nota2+alumno1.calificaciones.nota3)/3;
	system("clear");
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	
	system ("pause");
	return 0;
}
