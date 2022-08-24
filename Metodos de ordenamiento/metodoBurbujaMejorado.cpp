#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int numero[]={4,2,1,3,5};
	int i,j,aux,contador;
	bool ordenado=false;
	
for (i=0;i<5&&ordenado==false;i++){
		 contador=0;
		for (j=0;j<4;j++){
			if(numero[j]>numero[j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
				
			}
			
			
			
			
		}
		cout<<i+1<<" iteracion"<<endl;
		for (int i=0;i<5;i++){
			if (numero[i]<numero[i+1]){	
			
				++contador;
			}
		}
		if (contador==4){
	
			ordenado=true;
			cout<<"Arreglo ordenado en la interacion: "<<i+1<<endl;
		}
	}
	cout<<"Orden Ascendente:";
	for(i=0;i<5;i++){
		cout<<numero[i];
	}
	
	
	getch ();
	return 0;
}
