#include <iostream>
using namespace std;

int main (){
	
	int edad;
	
	cout<<"Dime tu edad: "; cin>>edad;
	
	if (edad>17&&edad<26){
		
		cout<<"Tu edad esta entre 18 y 25";
	}
	else cout<<"Tu edad no esta en el rango";
	
	return 0;
}
