#include <iostream>
#include "Personaje.h"
using namespace std;
void modificar(Personaje &p,int at,int def){
	p.ataque=at;
	p.defenza=def;
}


int main(int argc, char** argv) {
	
	Personaje* principal =new Personaje(100,90);
	principal->mostrarDatos();
	modificar(*principal,60,50);
		principal->mostrarDatos();
	return 0;
}
