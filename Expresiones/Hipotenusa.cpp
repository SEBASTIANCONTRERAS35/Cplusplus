#include <iostream>
#include <math.h>

using namespace std;




int main (){
	
	float opuesto,adyacente,hipotenusa;
	
	
	 cout<<"Dame el valor del cateto opuesto"<<endl; cin>>opuesto;
	 cout<<"Dame el valor del cateto adyacente"<<endl; cin>>adyacente;
	 
	 hipotenusa= sqrt((pow(opuesto,2))+(pow(adyacente,2)));
	 
	 cout<<"El valor de la hipotenusa es: "<<hipotenusa;
	
	
	return 0;
}
