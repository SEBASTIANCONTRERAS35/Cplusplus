#include <iostream>
#include "ArregloObjetos.h"

using namespace std;
void Alumno::pedirDatos(){
	cout<<"Dame la calificacion de matematicas: ";cin>>calMate;
	cout<<"Dame la calificacion de programacion: ";cin>>calProgram;
	promedio=(calMate+calProgram)/2;
}

void Alumno::mostrarNotas(){

cout<<"Nota de matematicas: "<<calMate<<endl;
cout<<"Nota de programacion: "<<calProgram<<endl,
cout<<"Promedio: "<<promedio<<endl;

}
