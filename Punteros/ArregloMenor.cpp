#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int n;
	cout<<"Cuantos elementos tiene tu arreglo: ";cin>>n;
	int numeros[n],*dir,menor=99999;
	for (int i=0;i<n;i++){
		cout<<"Dame un numero: ";cin>>numeros[i];
	}
	dir=numeros;
	for (int i=0;i<n;i++){
		if (*dir<menor){
			menor=*dir;
		}
		dir++;
	}
	cout<<"Menor: "<<menor;
	cout<<"\nUbicacion: "<<dir<<endl;
	
	getch ();
	return 0;
}
