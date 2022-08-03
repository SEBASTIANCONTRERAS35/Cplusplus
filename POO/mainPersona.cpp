#include <iostream>
#include "Persona.h"
using namespace std;
int main(int argc, char** argv) {
	Persona* persona1=new Persona("BICHOTEE",20);
	Persona* persona2=new Persona("4343255dd5");
	persona1->correr();
	persona1->correr(20);
	persona2->correr();
	
	return 0;
}
