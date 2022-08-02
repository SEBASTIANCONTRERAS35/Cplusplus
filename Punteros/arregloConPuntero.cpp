#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	
	int numeros[]={1,2,3,4,5};
	int *puntero;
	puntero=numeros;
	for (int i=0;i<5;i++){
		cout<<"Elemeneto del vector: ["<<i<<"]: "<<*puntero++<<endl;
		cout<<"Ubicacion: "<<puntero++<<endl;
	}
	
	
	getch ();
	return 0;
}
