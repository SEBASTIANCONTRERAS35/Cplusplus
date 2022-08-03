//creacion de objetos
#include <iostream>
#include "Punto.h"
using namespace std;
int main(int argc, char** argv) {
	Punto p1(2,1);
	cout<<"X: "<<p1.getx()<<endl;	
		cout<<"y: "<<p1.gety()<<endl;	
		Punto* p2=new Punto();
		p2->setx(6);
		p2->sety(8);
			cout<<"X: "<<p2->getx()<<endl;	
		cout<<"Y: "<<p2->gety()<<endl;	
	return 0;
}
