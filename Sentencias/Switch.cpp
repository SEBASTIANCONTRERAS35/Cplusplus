//SWITCH

#include <iostream>
using namespace std;

int main (){
	
	int numero;
	
	cout<<"Dame un numero 1-5";
	
	cin>>numero;
	
	switch (numero){
		
		case 1: cout<<"Numero 1"; break;
		case 2: cout<<"Numero 2"; break;
		case 3: cout<<"Numero 3"; break;
		case 4: cout<<"Numero 4"; break;
		case 5: cout<<"Numero 5"; break;
		default :cout <<"No esta entre el rango";break;
		
		
		
		
	}
	
	
	return 0;
	
}
