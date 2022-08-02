#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main (){
	char cad[200];
	int a=0,e=0,I=0,o=0,u=0;
	
	cout<<"Escribe una frase"<<endl;cin.getline(cad,200,'\n');
	strlwr(cad);
	system("clear");
	cout<<cad<<endl<<endl;
	for (int i=0;i<=strlen(cad);i++){
		if(cad[i]=='a'){
			a++;
		}
		
	}
	for (int i=0;i<=strlen(cad);i++){
		if(cad[i]=='e'){
			e++;
		}
		
	}
	for (int i=0;i<=strlen(cad);i++){
		if(cad[i]=='i'){
			I++;
		}
		
	}
	for (int i=0;i<=strlen(cad);i++){
		if(cad[i]=='o'){
			o++;
		}
		
	}
	for (int i=0;i<=strlen(cad);i++){
		if(cad[i]=='u'){
			u++;
		}
		
	}	
	cout<<"a: "<<a<<endl;
	cout<<"e: "<<e<<endl;
	cout<<"i: "<<I<<endl;
	cout<<"o: "<<o<<endl;
	cout<<"u: "<<u<<endl;
	
	getch ();
	return 0;
}
