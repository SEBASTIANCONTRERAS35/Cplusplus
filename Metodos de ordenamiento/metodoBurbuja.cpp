#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int numero[]={4,1,2,3,5};
	int i,j,aux;
	
	for (i=0;i<5;i++){
		
		for (j=0;j<4;j++){
			if(numero[j]>numero[j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
				
			}
			
			
			
			
		}
	}
	cout<<"Orden Ascendente:";
	for(i=0;i<5;i++){
		cout<<numero[i];
	}
	
	
	getch ();
	return 0;
}
