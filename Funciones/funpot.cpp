#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int num1,num2;
void PedirExponente();
void funpot(int x,int y);

int main (){
	cout<<"Dime un numero";cin>>num1;
	PedirExponente();
	funpot(num1,num2);
	
	getch ();
	return 0;
}
void PedirExponente(){
	cout<<"Dame otro numero: ";cin>>num2;
}
void funpot(int x,int y){
	long resultado;
	if (y<0){
		cout<<"No puede ser negativo";
	}
	else{	
	resultado=pow(x,y);
	cout<<"Resultado: "<<resultado;
	}

}
