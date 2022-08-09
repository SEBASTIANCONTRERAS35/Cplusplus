#include <iostream>
#include "Planta.h"
#include "Carnivoro.h"
#include "Herbivoro.h"
using namespace std;
int main(int argc, char** argv) {
	Planta*planta1=new Planta();
	planta1->alimentarse();
	Carnivoro*carnivoro1=new Carnivoro();
	carnivoro1->alimentarse();
		Herbivoro*herbivoro1=new Herbivoro();
		herbivoro1->alimentarse();
	return 0;
}
