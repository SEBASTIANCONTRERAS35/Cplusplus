#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	int n,sumaTotal,sumaPares=0,resultado,par,sumaImpares=0;
	cout<<"Hasta que numero quieres la suma"<<endl; cin>>n;
	
	for (int i=1;i<=n;i++ ){
	if (i%2==0){
		par=i*-1;
		sumaPares+=par;
	}
	else{
		sumaImpares+=i;
	}
		sumaTotal=sumaPares+sumaImpares;
	}
	cout<<sumaTotal;
	
	return 0;
}
