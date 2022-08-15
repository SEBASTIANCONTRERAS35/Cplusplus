#include <iostream>
using namespace std;

//Recursiva
int sumaRecursiva(int n){
	if(n<=9){
		return n;
	}
	else{
		return sumaRecursiva(n/10)+n%10;
	}
	
}
//Interativa
int sumaIterativa(int n){
	int suma=0;
	while (n>9){
		suma+=n%10;
		n/=10;
	}
	return (suma+n);
}
int main (){
	int numero;
	cout<<"Dame un numero: ";cin>>numero;
	cout<<"La suma de los digitos del numero es: "<<endl;
	cout<<"Recursivo: "<<sumaRecursiva(numero)<<endl;
	cout<<"Iteritivo: "<<sumaIterativa(numero)<<endl;
	
	
	
	return 0;
}
