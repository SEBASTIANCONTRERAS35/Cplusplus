

#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"
using namespace std;
int main(int argc, char** argv) {
	
	Turismo* t1=new Turismo("Toyota","Plomo","GH89",4);
	
	cout<<"Color: "<<t1->getColor()<<endl;
	t1->setColor("Negro");
	cout<<"Color: "<<t1->getColor()<<endl;
	
	cout<<"Modelo: "<<t1->retornarModelo()<<endl;

	
	cout<<"\t\n Herencia Privada"<<endl;
	Deportivo *di=new Deportivo("Audi","Blanco","KP98",10);
	
	cout<<"Cilindrada: "<<di->getCilindrada()<<endl;
	cout<<"Marca: "<<di->reportarMarca()<<endl;
		cout<<"\t\n Herencia Protegida"<<endl;
	Furgoneta *f1=new Furgoneta("Kia","Verde","AS12",1200);
	cout<<"Carga: "<<f1->getCarga()<<endl;
	cout<<"Color: "<<f1->reportarColor()<<endl;
	delete di;
	delete f1;
	delete t1;
	return 0;
}
