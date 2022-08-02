#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{

	float dato;
	Nodo *siguiente;
	
};

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo*);
void sumaPromedio(Nodo*,int);

int main (){
	
		Nodo *lista=NULL;
	float dato,contador;
	char rpt;
	do{
		contador++;
		cout<<"Dame un numero: ";cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"Desea agregar otro nodo(s/n)";cin>>rpt;
		
	}while(rpt=='s'||rpt=='S');
	cout<<endl<<"Elementos de la lista: "<<endl;
	mostrarLista(lista);
	sumaPromedio(lista,contador);
	getch ();
	return 0;
}

void insertarLista(Nodo *&lista,float n){
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
 void sumaPromedio(Nodo* lista,int n){
 		float suma=0;
		 float promedio;
	
	while (lista!= NULL){
	
			suma+=lista->dato;
	
		
		lista=lista->siguiente;
	}
	promedio=suma/n;
	cout<<"\nla suma es: "<<suma<<endl;
	cout<<"\nEl promedio es:  "<<promedio<<endl;
 	
 	
 }
