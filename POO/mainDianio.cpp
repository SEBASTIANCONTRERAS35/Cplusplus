#include <iostream>
#include "Dia�o.h"
using namespace std;

int main(int argc, char** argv) {
Diaanio* hoy;
Diaanio* cumple;
int d,m;
cout<<"Dame la fecha"<<endl;
cout<<"Dia: ";cin>>d;
cout<<"Mes: ";cin>>m;
hoy=new Diaanio(d,m);
cout<<"Dame tu cumplea�os"<<endl;
cout<<"Dia: ";cin>>d;
cout<<"Mes: ";cin>>m;
cumple=new Diaanio(d,m);

hoy->visualizar();
cout<<endl;
cout<<"\tCumplea�os";
cumple->visualizar();

if (hoy->igual(*cumple)){
	cout<<"Feliz cumplea�os"<<endl;
}
else{
	cout<<"Buen dia";
} 


	return 0;
}
