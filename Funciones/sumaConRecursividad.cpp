#include <iostream>
#include <conio.h>

using namespace std;

int suma(int);
int main (){
	int numero;
	do{
		cout<<"Dime el numero de elementos: ";cin>>numero;
	}while(numero<=0);
	cout<<"\nSuma: "<<suma(numero)<<endl;
	getch ();
	return 0;
}
int suma(int n){
	int sumar=0;
	if (n==1){
		sumar=1;
		
	}
	else {
		sumar=n+suma(n-1);
	}
	
}
