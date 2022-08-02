#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Nodo{

	int dato;
	Nodo *siguiente;
	
};

void insertarLista(Nodo *&,int);
void mostrarLista(Nodo*);
void calcularMayorMenor(Nodo*);

int main (){
	Nodo *lista=NULL;
	int dato;
	char rpt;
	do{
		cout<<"Dame un numero: ";cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"Desea agregar otro nodo(s/n)";cin>>rpt;
		
	}while(rpt=='s'||rpt=='S');
	cout<<endl<<"Elementos de la lista: "<<endl;
	mostrarLista(lista);
	calcularMayorMenor(lista);
	
	getch ();
	return 0;
}

void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo=new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	
	if (lista==NULL){
		lista=nuevo_nodo;
		
	}
	else{
		aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
			
		}
		aux->siguiente=nuevo_nodo;
	}
	cout<<"\tElemento  "<<n<<"  agregado a lista correctamente\n";
	
}
void mostrarLista(Nodo *lista){
	
	while (lista!=NULL){
		
		cout<<lista->dato<<"->";
		lista=lista->siguiente;
		
	}
}
void calcularMayorMenor(Nodo *lista){
	int mayor=0,menor=9999;
	
	while (lista!= NULL){
		if (lista->dato>mayor){
			mayor=lista->dato;
			
		}
		if (lista->dato<menor){
			menor=lista->dato;
		}
		lista=lista->siguiente;
	}
	cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	
	}



