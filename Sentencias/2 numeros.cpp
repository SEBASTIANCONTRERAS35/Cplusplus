#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout << "Dame 2 numeros: ";
	cin>>n1>>n2;
	
	if (n1>n2){
		cout<<"El mayor es: "<<n1;
		
	}
	else if (n1==n2){
		cout<<"Son iguales";
	}
	else {
		cout <<"El mayor es: "<<n2;
	}
	
	return 0;
}
