#include <iostream>
#include "Dia—o.h"
using namespace std;
bool Diaanio::igual(Diaanio& d){
	if (dia==d.dia && mes==d.mes ){
		return true;
	}
	else return false;
	
	
}
void Diaanio::visualizar(){
	cout<<"Mostrando datos"<<endl;
	cout<<"Mes: "<<mes<<"\Dia: "<<dia<<endl;
}
