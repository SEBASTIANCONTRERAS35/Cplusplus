#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
	
	char cadena [200];
	cout<<"Dime una frase con mas de 10 caracteres"<<endl;
	cin.getline(cadena,200,'\n');
	system("clear");
if(strlen(cadena)>10){
	cout<<cadena;
}
else{
	cout<<"Tu frase es demasiado corta";
}
	
	
	system("pause");
	return 0;
}
