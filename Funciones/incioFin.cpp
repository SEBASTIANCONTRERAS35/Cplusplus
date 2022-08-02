#include <iostream>
#include <conio.h>
using namespace std;

int escribeNumeros(int ,int);

int main (){
	int ini,fin;
	cout<<"Cual es el inicio: ";cin>>ini;
	cout<<"Cual es el final: ";cin>>fin;
	
	for(int i=ini;i<=fin;i++){
		cout<<escribeNumeros(i,fin)<<" ";
		
	}
	
	
	
	
	return 0;
}
int escribeNumeros(int ini,int fin){
	
	if (ini==fin){
		return ini;
	}
	else {
		return escribeNumeros(ini,fin-1);
	}
	
}
