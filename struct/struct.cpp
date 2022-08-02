#include <iostream>
#include <stdlib.h>

using namespace  std;

struct Persona{
	
	char nombre[20];
	int edad;
}persona1={"BICHOTEE",20}
,persona2={"Sebastian",19};

int main (){
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"edad1: "<<persona1.edad<<endl;
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"edad2: "<<persona2.edad<<endl;
	
	system("pause");
	return 0;
}
