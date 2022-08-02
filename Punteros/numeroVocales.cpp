#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void nombre();
char cad[200],n;
void vocales(char*);
int main (){
	
	nombre();
	vocales(cad);
	getch ();
	return 0;
}

void nombre(){
	cout<<"Dime una frase:\n";cin.getline(cad,200,'\n');
		strlwr(cad);
		cout<<cad;
}
void vocales(char *cad){
	int a=0,e=0,i=0,o=0,u=0;
	while(*cad){
		switch(*cad){
			case 'a':a++; break;
			case 'e':e++; break;
			case 'i':i++; break;
			case 'o':o++; break;
			case 'u':u++; break;	
		}
		cad++;
	}
	cout<<"\nA: "<<a<<endl;
	cout<<"E: "<<e<<endl;
	cout<<"I: "<<i<<endl;
	cout<<"O: "<<o<<endl;
	cout<<"U: "<<u<<endl;
}
