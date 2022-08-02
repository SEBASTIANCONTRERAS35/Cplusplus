#include <iostream>
using namespace std;


int main(){
	
	char letra;
	cout<<"Dame una letra"; cin>>letra;
	
	switch (letra){
		
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout <<"vocal minuscula"; break;
		default :cout << "No es una vocal minuscula"; break;
		
	}
	
	
	return 0;
}
