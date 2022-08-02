#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int n,suma=0;
	cout<<"dime el numero de elementos a sumar "; cin>>n;
	
	for (int i=1; i<=2*n-1;i+=2){
		
		suma+=i;
	}
	cout<<"\n Suma: "<<suma;
	getch();
	return 0;
}

