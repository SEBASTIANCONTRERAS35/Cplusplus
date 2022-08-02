#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){

char palabra1[]="BICHOTEE";
char palabra2[]={'B','I','C','H','O','T','E','E'};
// cout <<palabra1<<endl;
//	cout<<palabra2<<endl;
char nombre[30];

cout<<"Dame tu nombre";
cin.getline(nombre,20,'\n');
cout<<nombre;
getch ();
return 0;
}
