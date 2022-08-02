#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main (){
	
	char palabra [200];
	char elreves[200];
	
	cout<<"Dime una frase: ";
	cin.getline(palabra,200,'\n');
	
	strcpy(elreves,palabra);
	strrev(elreves);
	
	
	if(strcmp(palabra,elreves)==0){
		cout<<"La palabra es polindroma"<<endl<<elreves<<endl;
	}
	else {cout<<"La palabra no es polindroma";
	}
	getch();
	 
	return 0;
}
