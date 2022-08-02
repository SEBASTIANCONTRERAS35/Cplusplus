#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int cad[]={2,5,6,3,1},band='F';
	int i,numero=6,dato=6;
	
	
//	for (int i=0;i<5;i++){
//		if(cad[i]==numero){
//			cout<<"Si se encuentra el numero\n Esta en la posicion: "<<i<<endl;
//			
//		}
//		
//	}
	i=0;
	while(band=='F'&&(i<5)){
		if(cad[i]==dato){
			band= 'V';
		}
		i++;
	}
	if(band=='F'){
		cout<<"El numero a buscar no existe en el arreglo";
	}
	else if (band =='V'){
		cout<<"El numero a sido encontrado en la pos"<<i-1<<endl;
	}
	getch ();
	return 0;
}
