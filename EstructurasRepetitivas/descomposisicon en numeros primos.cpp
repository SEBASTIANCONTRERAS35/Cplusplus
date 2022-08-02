#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int numero;
	cout<<"Dime un numero: "<<endl;
	cin>>numero;
	
	for (int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero/=i;
		}
	}
	
	
	getch ();
	return 0;
}
