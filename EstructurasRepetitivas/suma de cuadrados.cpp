#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	int suma=0,cuadrado;
	
	for (int i=1;i<=20;i++){
		cuadrado=pow(i,2);
		suma+=cuadrado;
		cout<<i<<"="<<cuadrado<<endl;
		
	}
	cout<<"\n Suma: "<<suma<<endl;
	system ("pause");
	
	return 0;
}
