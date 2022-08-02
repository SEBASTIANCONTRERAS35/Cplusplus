#include <iostream>
#include <conio.h>

using namespace std;
void intercambio(float &x,int n)
void ordenacionShell(float a[],int n){
	float aux;
	aux=x;
	x=y;
	y=aux;
	
}
	
	int salto,i,j,k;
	salto=n/2;
	
	while(salto>0){
		for (i=salto;i<n;i++){
			j=i-salto;
			while (j>=0){
				k=j+salto;
				if (a[j]<=a[k]){
					j=-1;
				}
				else{
					intercambio(a[j],a[k]);
					j-=salto;
				}
			}
		}
	}
	salto=salto/2
}
int main (){
	float arreglo[]={4,6,7,4,2,8,1,5}
	ordenacionShell(arreglo,10);
	
	cout<<"Ascendente: "<<endl;
	for (int i=0;i<10;i++){
		cout<<arreglo[i]<<"|";
		
	}
	cout<<"Descendente: "<<endl;
	for (int i=9;i>=0;i--){
		cout<<arreglo[i]<<"|";
		
	}
	getch();
	return 0;
}
