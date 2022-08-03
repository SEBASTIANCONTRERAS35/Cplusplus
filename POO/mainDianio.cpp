#include <iostream>
#include "Dia—o.h"
using namespace std;

int main(int argc, char** argv) {
Diaanio* hoy;
Diaanio* cumple;
int d,m;
cout<<"Dame la fecha"<<endl;
cout<<"Dia: ";cin>>d;
cout<<"Mes: ";cin>>m;
hoy=new Diaanio(d,m);
cout<<"Dame tu cumpleaÒos"<<endl;
cout<<"Dia: ";cin>>d;
cout<<"Mes: ";cin>>m;
cumple=new Diaanio(d,m);

hoy->visualizar();
cout<<endl;
cout<<"\tCumpleaÒos";
cumple->visualizar();

if (hoy->igual(*cumple)){
	cout<<"Feliz cumpleaÒos"<<endl;
}
else{
	cout<<"Buen dia";
} 


	return 0;
}
