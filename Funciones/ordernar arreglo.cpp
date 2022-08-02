#include <iostream>
#include <conio.h>
using namespace std;
void PedirNumeros( );
int vec[100],tam;
void ordernado(int vec[],int );
int main (){
	PedirNumeros();
	ordernado(vec,tam);
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
		
	}
	cout<<endl;
	getch ();
	return 0;
}
void PedirNumeros(){
	cout<<"Cuantos elementos tiene el vecto: ";cin>>tam;
	for (int i=0;i<tam;i++){
		cout<<"Dame un numero";cin>>vec[i];
		
	}
}
void ordernado(int vec[],int tam){
	int aux;
for (int i=0;i<tam;i++){
		
		for (int j=0;j<tam-1;j++){
			if(vec[j]>vec[j+1]){
				aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
				
			}
			
			
			
			
		}
	}
}
