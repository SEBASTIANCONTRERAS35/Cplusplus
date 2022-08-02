#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int arreglo1[]={1,2,3,4,5};
	int arreglo2[]={6,7,8,9,10};
	int arregloFinal[10];
	for (int i=0;i<5;i++){
		arregloFinal[i]=arreglo1[i];
		
	}
		for (int i=5;i<10;i++){
		arregloFinal[i]=arreglo2[i-5];
		
	}
	
	for(int i=0;i<10;i++){
		
		cout<<arregloFinal[i]<<endl;
	}

	
	getch();
	return 0;
}
