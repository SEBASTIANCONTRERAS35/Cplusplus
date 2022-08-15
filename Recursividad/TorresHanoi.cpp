#include <iostream>
using namespace std;

void hanoi(char varInicial,char varCentral,char varFinal, int n){
	
	if (n==1){
		cout<<"Mover disco "<<n<<"  desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
	}
	else {
		hanoi(varInicial,varFinal,varCentral,n-1);
		cout<<"Mover disco "<<n<<"  desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
		hanoi(varCentral,varFinal,varInicial,n-1);
	}
	
	
}

int main (){
	
	
	int n;
	cout<<"Cuantos discos : ";cin>>n;
	hanoi('A','B','C',n);
	return 0;
}
