#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char palabra1[30];
	char palabra2[30];
	
	cout <<"Dame una palabra: ";
	cin.getline(palabra1,30,'\n');
		cout <<"Dame otra palabra: ";
	cin.getline(palabra2,30,'\n');
	
	strupr(palabra1);
	strupr(palabra2);
	cout<<endl<<palabra1<<" "<<palabra2<<endl;
	
	if (strcmp(palabra1,palabra2)==0){
		cout<<"\nLas palabras son iguales\n";
		
	}
	else cout<<"Las palabras no son iguales\n";
	getch();
	return 0;
}
