#include <iostream>
#include <conio.h>
using namespace std;
struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3],*puntero=alumno;
void promedio(Alumno *);
void datos();
int main (){
	datos();
	promedio(puntero);
	
	
	getch ();
	return 0;
}
void datos(){
	for (int i =0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre: ";cin.getline((puntero+i)->nombre,30,'\n');
		cout<<"Edad: ";cin>>(puntero+i)->edad;
		cout<<"Promedio: ";cin>>(puntero+i)->promedio;
		cout<<endl;
	}
	
}
void promedio(Alumno *puntero){
	float mayor=0;
	int pos=0;
	
	for (int i=0;i<3;i++){
		if ((puntero+i)->promedio>mayor){
			mayor=(puntero+i)->promedio;
			pos=i;
		}
	}
	cout<<"Mejor alumno: "<<(puntero+pos)->nombre<<endl;
		cout<<"Edad "<<(puntero+pos)->edad<<endl;
		cout<<"Promedio "<<(puntero+pos)->promedio<<endl;
	cout<<endl;
}
