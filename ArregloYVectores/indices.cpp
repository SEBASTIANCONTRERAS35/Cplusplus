#include <iostream>
#include <conio.h>

using namespace std ;

int main (){
	int numeros[100];
	int n;
	cout <<"dame el numero de elementos que del arreglo"<<endl;cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"dame un numero: "<<endl;cin>>numeros[i];
	
			cout<<i<<"->"<<numeros[i]<<endl;
	
	}
//	for (int i=0;i<n;i++){
//		
//		
//	} 
	
	
	
	getch ();
	return 0;
}
