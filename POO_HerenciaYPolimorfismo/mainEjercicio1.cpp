#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;
int main(int argc, char** argv) {
     GatoDomestico* minimo=new GatoDomestico(2015,"Trujillo","Persa","Sebastian");
     Felino * estrellaCirco=new Felino(2014,"Mexico","Vengala","Espactacular");
     
     cout<<"Dietas: "<<endl;
     cout<<"Gato: "<<minimo->imprimirDieta()<<endl;
     cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
     
      cout<<"\nAño nacimiento - Lugar de nacimiento"<<endl;
     cout<<"Gato: "<<minimo->getAnioNacimiento()<<"-"<<minimo->getLugarNacimiento()<<endl;
     cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<"-"<<estrellaCirco->getLugarNacimiento()<<endl;
     
		cout<<"\n Nuevo nombre de dueño: "<<endl;
		string nuevoDuenio;
		cout<<"Dime el nuevo nombre"<<endl;getline(cin,nuevoDuenio);
		minimo->setNombreDuenio(nuevoDuenio);
		cout<<"El dueño es ahora: "<<minimo->getNombreDuenio()<<endl;
		
		cout<<"\n\t Razas: "<<endl;
		cout<<"Gato: "<<minimo->getRaza()<<endl;
		cout<<"Felino: "<<estrellaCirco->getRaza()<<endl;

	string nuevoCirco;
		cout<<"Dime el nuevo nombre"<<endl;getline(cin,nuevoCirco);
		estrellaCirco->setNombreCirco(nuevoCirco);
		cout<<"El nuevo circo es ahora: "<<estrellaCirco->getNombreCirco()<<endl;
		delete estrellaCirco;
		delete minimo;

	return 0;
}
