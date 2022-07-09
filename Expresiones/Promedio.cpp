#include <iostream>
using namespace std;

int main (){
	float Calificacion1 ,Calificacion2 ,Calificacion3 ,Calificacion4, promedio; 
	cout <<"Dame la calificacion del primer alumno\n"; cin>>Calificacion1 ;
	cout <<"Dame la calificacion del segundo alumno\n"; cin>>Calificacion2 ;
	cout <<"Dame la calificacion del tercer alumno\n"; cin>>Calificacion3 ;
	cout <<"Dame la calificacion del cuarto alumno\n"; cin>> Calificacion4;
	
	promedio = (Calificacion1+Calificacion2+Calificacion3+Calificacion4)/4;
	cout<<"El promedio es; "<<promedio;
	
	
	return 0;
}
