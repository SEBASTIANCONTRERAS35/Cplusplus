#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de funcion
int encontrarMax(int x,int y);

int main (){
	int n1,n2,Mayor;
	cout<<"Dame 2 numeros"; cin>>n1>>n2;
	Mayor=encontrarMax(n1,n2);
	cout<<"Mayor: "<<Mayor;
	getch ();
	return 0;
}
//Definicion de funcion

int encontrarMax(int x,int y){
	int numMax;
	if (x>y){
		numMax=x;
	}
	else{
	 numMax=y;}
	 
	 return numMax;
	}
