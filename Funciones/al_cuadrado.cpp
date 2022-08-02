#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float al_cuadrado(float x);


int main (){
	float num1;
	cout<<"Dame un numero: ";cin>>num1;
	
	cout<<"Resultado: "<<al_cuadrado(num1)<<endl;
	getch ();
	return 0;
}

float al_cuadrado(float x){
	float multiplicacion;
	multiplicacion=pow(x,2);
	return multiplicacion;
}

