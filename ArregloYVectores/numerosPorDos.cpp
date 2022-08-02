#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int arreglo1[100],arreglo2[200],n;
	cout<<"Cuantos numeros vas a multiplicar"<<endl;cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Dime un numero: "<<endl;cin>>arreglo1[i];
	}
	for (int i=0;i<n;i++){
		arreglo2[i]=arreglo1[i]*2;
		cout<<arreglo1[i]<<" x2= "<<arreglo2[i]<<endl;
		
	}
	
	system("pause");
	
	return 0;
}
