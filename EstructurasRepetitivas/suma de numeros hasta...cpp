#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero,suma;
	cout<<"Dime hasta que numero quieres la suma: "<<endl;cin>>numero;
	cout<<"\nNumero:"<<endl;
	for (int i=1;i<=numero;i++){
		cout<<"\n"<<i<<endl;
		suma+=i;
		
	}
	cout<<"\t----------------- "<<endl;
	cout<<"\nLa suma es: "<<suma;
	
	getch ();
	
	return 0;
}
