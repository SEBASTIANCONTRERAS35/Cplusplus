#include <iostream>
using namespace std;

int main (){
	int numero;
	
	cout<<"Dame un numero: "; cin>>numero;
	if (numero%2==0){
		cout<<numero<<" Es par";
	}
	else {
		cout<<numero<<" Es inpar";
	}
	
	return 0;
}
