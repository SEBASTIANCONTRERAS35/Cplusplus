#include <iostream>
using namespace std;


int busquedaBinaria(int a[],int dato,int inferior,int superior){
	int mitad;
	if (inferior>superior){
		return -1;
	}
	else {
		mitad=(inferior+superior)/2;
		if (dato==a[mitad]){
			return mitad;
			
		}
		else if (dato>a[mitad]){
			return busquedaBinaria(a,dato,mitad+1,superior);
		}
		else {
			return busquedaBinaria(a,dato,inferior,mitad-1);
		}
	}
}

int main ()
{
	int arreglo[]={3,4,5,8,9.10};
	int dato=9;
	
	int retorno=busquedaBinaria(arreglo,dato,0,5);
	
	if (retorno==-1){
		cout<<"El elemento no esta"<<endl;
	}
	else {
		cout<<"El elemento si esta"<<endl;
		cout<<"Posicion: "<<retorno<<endl;
	}
	
	
	return 0;
}
