#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	float x,y,resultado=0;
	
	cout<<"Dame el valor de x: "<<endl; cin>>x;
	cout<<"Dame el valor de y: "<<endl; cin>>y;
	
	resultado= (sqrt(x))/((pow(y,2))-1);
	
	cout<<"Resultado: "<<resultado;
	
	return 0;
}
