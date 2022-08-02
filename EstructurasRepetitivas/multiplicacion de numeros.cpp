#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero,multiplicacion=1;
	cout<<"Dime hasta que numero quieres la multiplicacion: "<<endl;cin>>numero;
	cout<<"\nNumero:"<<endl;
	for (int i=1;i<=numero;i++){
		cout<<"\n"<<i<<endl;
		multiplicacion*=i;
		
	}
	cout<<"\t----------------- "<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion;
	
	getch ();
	
	return 0;
}
