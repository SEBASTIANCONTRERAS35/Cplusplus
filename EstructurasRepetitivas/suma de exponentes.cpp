#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;


int main (){
	
	int exponente,suma,resultado;
	cout <<"Dime hasta que exponente "<<endl;cin>>exponente;
	for (int i; i<=exponente;i++){
		resultado=pow(2,i);
		suma+=resultado;
		cout<<"2^"<<i<<"="<<resultado<<endl;
		
		
		
		
	}
	cout<<"\n"<<suma;
	getch ();
	
	return 0;
}

