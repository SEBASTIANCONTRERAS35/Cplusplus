#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct datos{
	char nombre[30];
	bool discapacidad;
}persona[100],personasSinD[100],PersonasConD[100];
int main(){
	int n,j=0,k=0;
	cout<<"Cuantas personas seran: ";cin>>n;
	for (int i;i<n;i++){
		fflush(stdin);
		cout<<i<<". Nombre: ";cin.getline(persona[i].nombre,30,'\n');
		cout<<i<<". La persona tiene discapacidad?: 1/0 ";cin>>persona[i].discapacidad;
		if (persona[i].discapacidad==1){
			strcpy(PersonasConD[j].nombre,persona[i].nombre);
			j++;
		}
		else {
			strcpy(personasSinD[k].nombre,persona[i].nombre);
		k++;
		}
		
	}
	cout<<"Sin Discapacidad: "<<endl;
	for (int i=0;i<k;i++){
		
		cout<<personasSinD[i].nombre<<endl;
	}
		cout<<"Con Discapacidad: "<<endl;
	for (int i=0;i<k;i++){
		cout<<PersonasConD[i].nombre<<endl;
	}
	getch();
	return 0;
}
