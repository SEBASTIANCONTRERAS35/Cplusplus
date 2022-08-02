#include <iostream>
#include <conio.h>
using namespace std;
void PedirDatos();
float fraccion(float n);
float numero;
int main (){
PedirDatos();	

cout<<"Resultado: "<<fraccion(numero)<<endl;
	getch ();
	return 0;
}
void PedirDatos(){
	
	cout<<"Dame un numero: "; cin>>numero;
}
float fraccion(float n){
	int entero=n;
	float resultado=n-entero;
	return resultado;
	
}
