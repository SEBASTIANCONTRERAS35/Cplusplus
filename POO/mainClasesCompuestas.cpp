#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(int argc, char** argv) {
	Estudiante *estudiante1=new Estudiante("34FG",9.5,56,"Av de las Torres");
	
	estudiante1->mostrarDatos();
	
	return 0;
}
