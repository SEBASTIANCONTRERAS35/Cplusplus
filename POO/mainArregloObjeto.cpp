#include <iostream>
#include "ArregloObjetos.h"
using namespace std;

int main(int argc, char** argv) {
	Alumno alumnos[4];
	Alumno*alumno2=new Alumno[3];
	
	for (int i=0;i<3;i++){
		(alumno2+i)->pedirDatos();
//		alumnos[i].pedirDatos()
		cout<<endl;
		
		
	}
	cout<<"Mostrando.."<<endl;
	for(int i=0;i<3;i++){
		(alumno2+i)->mostrarNotas();
	}
	
	return 0;
}
