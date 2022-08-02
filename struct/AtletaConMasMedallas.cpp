#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct atleta{
	char nombre[30];
	char pais[30];
	int medallas;
}atletas[30];


int main(){
	int n,mayor=0;
	char nombreAtleta[30],paisAtleta[30];
	cout<<"Cuantos atletas registraras?: ";cin>>n;
	
	for (int i=0;i<n;i++){
			fflush(stdin);
		cout<<i+1<<".Nombre: ";cin.getline(atletas[i].nombre,30,'\n');
		cout<<i+1<<".Pais: ";cin.getline(atletas[i].pais,30,'\n');
		cout<<i+1<<".Medallas: ";cin>>atletas[i].medallas;
		cout<<endl;
		if(atletas[i].medallas>mayor){
			mayor=atletas[i].medallas;
			strcpy(nombreAtleta,atletas[i].nombre);
			strcpy(paisAtleta,atletas[i].pais);
		}
	}
	system("clear");
		cout<<"\t Atleta con mayor medallas"<<endl;
		cout<<"Nombre: "<<nombreAtleta<<endl;
		cout<<"Pais: "<<paisAtleta<<endl;
		cout<<"Medallas: "<<mayor<<endl;
	getch();
	return 0;
}
