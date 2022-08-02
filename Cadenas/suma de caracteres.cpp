#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main (){
	char numero1[200];
	char numero2[200];
	float num1,num2,suma;
	cout<<"Dame un numero: ";cin.getline(numero1,200,'\n');
	cout<<"Dame otro numero: ";cin.getline(numero2,200,'\n');
	num1=atof(numero1);
	num2=atof(numero2);
	suma=num1+num2;
	system("clear");
	cout<<suma<<endl;
	
	
	
	getch ();
	return 0;
}
