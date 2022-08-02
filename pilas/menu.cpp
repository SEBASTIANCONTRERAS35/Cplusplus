#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
	
};
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char&);
int main(){
	int numero;
	char caracter;
	Nodo *pila=NULL;
	do{
		
		cout<<"\t Menu\n"<<endl;
	
		cout<<"\n1. Insertar un caracter a la pila"<<endl;
		cout<<"2. Mostrar todo los caracteres de la pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"\nDigita el numero de la accion que deseas: ";cin>>numero;
		system("clear");
		if (numero==2 && pila==NULL){
			cout<<"La pila esta vacia porfavor digita 1 o 3: ";cin>>numero;
			system("clear");
		}
		switch(numero){
			case 1: cout<<"Dame un caracter: ";cin>>caracter;
					agregarPila(pila,caracter);break;
			case 2: 	while(pila!=NULL){
							sacarPila(pila,caracter);
							if (pila !=NULL){
							cout<<caracter<<" , ";
												}
							else{
							cout<<caracter<<"."<<endl;
								}
								}system("pause");break;
			case 3:			cout<<"\nADIOS";break;
						}
		
		
	}while (numero!=3);
	
	getch ();
	return 0;
}
void agregarPila(Nodo *&pila,char caracter){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=caracter;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<"\n\t Elemento "<<caracter<<" agregado a la pila"<<endl;
	system("pause");
	system("clear");
}
void sacarPila(Nodo *&pila,char &caracter){
	Nodo *aux=pila;
	caracter=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
