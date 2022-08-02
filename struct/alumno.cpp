#include <iostream>
#include <stdlib.h>

using namespace std;


struct alumno{
	char nombre[30];
	int edad;
	float promedio;
	
}alumnos[3];

int main (){
	float mayor=0;
	int pos;
	
	
	
	for (int i=0;i<3;i++){
		cout<<i+1<<".Nombre: ";cin.getline(alumnos[i].nombre,30,'\n');
		cout<<i+1<<".Edad: ";cin>>alumnos[i].edad;
		cout<<i+1<<".Promedio: ";cin>>alumnos[i].promedio;
		cout<<endl;
		fflush(stdin);
		if (alumnos[i].promedio>mayor){
			mayor=alumnos[i].promedio;
			pos=i;
		}
	}
	
	for (int i=0;i<3;i++){
		cout<<alumnos[i].nombre<<endl;
		cout<<alumnos[i].edad<<endl;
		cout<<alumnos[i].promedio<<endl<<endl;
	}
	cout<<"Mejor promedio: "<<mayor<<endl;
	system ("pause");
	return 0;
}
