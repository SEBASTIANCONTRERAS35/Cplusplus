#include <iostream>
using namespace std;

int main (){
	float practicas,teorica,participacion,promedio=0;
	
	cout<<"Dame la calificacion de la practicas: "<<endl; cin>>practicas;
	cout<<"Dame la calificacion teorica: "<<endl; cin>>teorica;
	cout<<"Dame la calificacion de las participaciones"<<endl; cin>>participacion;
	
	
	practicas*= 0.30;
	teorica *=0.60;
	participacion*=0.10;
	 promedio =practicas+teorica+participacion;
	 cout<<"Nota final: "<<promedio;
	
	
	return 0;
}
