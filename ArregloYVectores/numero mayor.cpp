#include <iostream>
#include <stdlib.h>

using namespace std;
 int main (){
 	int numeros [200],n,mayor=0;
 	cout<<"Cuantos elementos lleva tu arreglo?: "<<endl;cin>>n;
 	for (int i=0; i<n;i++){
 		cout<<"Dime un numero: "<<endl; cin>>numeros[i];
 		if(numeros[i]>mayor){
 			mayor=numeros[i];
		 }
 		
 		
	 }
	 cout<<"Mayor: "<<mayor<<endl;
	 system("pause");
 	
 	
 	
 	return 0;
 }
