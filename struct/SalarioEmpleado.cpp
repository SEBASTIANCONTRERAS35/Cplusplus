#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct empresa{
	char nombre[30];
	int edad;
	char pais[30];
	int salario;
	
}empleados[200];


int main (){
	
	int n,mayor,menor=999999999,pre,pos;
		cout<<"Cuantos empleados: "<<endl; cin>>n;
	for (int i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<".Nombre: ";cin.getline(empleados[i].nombre,30,'\n');
		cout<<i+1<<".Edad: ";cin>>empleados[i].edad;
			fflush(stdin);
		cout<<i+1<<".pais: ";cin.getline(empleados[i].pais,30,'\n');
		cout<<i+1<<".Salario: ";cin>>empleados[i].salario;
		cout<<endl;
		fflush(stdin);
		if (empleados[i].salario>mayor){
			mayor=empleados[i].salario;
			pos=i;
		}
		else if(empleados[i].salario<menor){
			menor=empleados[i].salario;
			pre=i;
		}
	}
	system("clear");
		for (int i=0;i<n;i++){
		cout<<empleados[i].nombre<<endl;
		cout<<empleados[i].edad<<endl;
		cout<<empleados[i].pais<<endl;
		cout<<empleados[i].salario<<endl<<endl;
	}
	cout<<"Mejor salario: "<<mayor<<endl;
		cout<<"Peor salario: "<<menor<<endl;
	getch();
	
	return 0;
}
