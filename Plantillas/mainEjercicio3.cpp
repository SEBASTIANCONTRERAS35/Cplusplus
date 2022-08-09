#include <iostream>
#include "Materia.h"
using namespace std;
int main(int argc, char** argv) {
	Materia <int> curso1("Algoritmos",1,15);
	Materia <float> curso2("Matematicas",2,9.76);
	Materia <char> curso3("Español",3,'F');
	
	cout<<"Mostrando dato..."<<endl;
	curso1.mostrarDatos();
	cout<<endl;
	curso2.mostrarDatos();
	cout<<endl;
	curso3.mostrarDatos();
	
	curso1.setCalificacion(9);
	cout<<endl;
	curso1.mostrarDatos();
	return 0;
}
