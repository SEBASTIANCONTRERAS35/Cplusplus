#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
	int numero,suma=0;
	
	
	
	while (numero!=0 && numero<20 || numero>30){
		cout<<"\nDame un numero: ";cin>>numero;
		suma+=numero;
		
	}
	cout<<"\nla suma es : "<<suma<<endl;;
	system("pause");
	
	
	
	return 0;
}
