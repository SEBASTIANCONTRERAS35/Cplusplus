#include <iostream>
using namespace std;

int main (){
	float a,b,c,d ,resultado=0;
	
	cout<<"Dame el valor de a \n"; cin >>a;
		cout<<"Dame el valor de b \n"; cin >>b;
			cout<<"Dame el valor de c \n"; cin >>c;
				cout<<"Dame el valor de d \n"; cin >>d;
				
				resultado= a+(b/(c-d));
				cout.precision(3);
				cout<<"Resultado es: "<<resultado;
				
	
	
	return 0;
}
