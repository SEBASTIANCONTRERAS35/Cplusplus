#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirNotas();
int numCalif,*calif;
void mostrar();
int main(){
	pedirNotas();
	mostrar();
	delete[]calif;
	getch ();
	return 0;
}

void pedirNotas(){
	cout<<"Dime el numero de calif: ";cin>>numCalif;
	calif=new int [numCalif];
	for (int i=0;i<numCalif;i++){
		cout<<"Dame una nota";cin>>calif[i];
		
		
	}
}
void mostrar(){
cout<<"\n Notas: \n";
for (int i=0;i<numCalif;i++){
	cout<<calif[i]<<endl;
	
}
}
