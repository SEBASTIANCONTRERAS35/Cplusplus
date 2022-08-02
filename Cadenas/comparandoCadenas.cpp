#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (){
	char palabra1[200];
	char palabra2[200];
	
	cout <<"Dime una palabra"<<endl;
	cin.getline(palabra1,200,'\n');
		cout <<"Dime otra palabra"<<endl;
	cin.getline(palabra2,200,'\n');
		system ("clear");
		if(strcmp(palabra1,palabra2)==0){
		cout<<"Las palabras son iguales"<<endl;
		}
		else if (strcmp(palabra1,palabra2)>0){
			cout<<palabra1<<" es mayor alfabeticamente"<<endl;
		}
		else{
			cout<<palabra2<<" es mayor alfabeticamente"<<endl;
		}
	
	system ("pause");
	return 0;
}
