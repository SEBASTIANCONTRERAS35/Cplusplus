#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main (){
	
	char palabra1[]="Hola";
	char palabra2[]="Hola";
	
	if (strcmp(palabra1,palabra2)==0){
		cout<<"ambas son iguales"<<endl;
	}
	system ("pause");
	return 0;
}
