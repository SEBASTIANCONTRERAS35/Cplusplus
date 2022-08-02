#include <iostream>
using namespace std;

int main (){
	int n1,n2,n3,n4;
	
	cout<<"Dame 3 numeros: "<<endl; cin>>n1>>n2>>n3;
	cout<<"Dame un 4arto numero: ";cin>>n4;
 
 if (n1==n4){
 	cout <<"El numero es igual al primer numero";
 }
 else if (n2==n4){
 	cout <<"El numero es igual al segundo numero";
 }
  else if (n3==n4){
 	cout <<"El numero es igual al tercer numero";
 }
 else cout<<"El numero no coincide con los 3 anteriores";
	
	
	
	return 0;
}
