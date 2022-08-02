#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


struct Nodo{
int dato;
Nodo *siguiente;	
	
};
void eliminar(Nodo*&,Nodo*&,int&);
void insertarCola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
int main (){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	int dato;
	cout<<"\tDame un numero: ";cin>>dato;
	
	insertarCola(frente,fin,dato);
	cout<<"\tDame un numero: ";cin>>dato;
	
	insertarCola(frente,fin,dato);
	
	cout<<"\tDame un numero: ";cin>>dato;
	
	insertarCola(frente,fin,dato);
	cout<<"\n\tEliminando ..."<<endl;
	while (frente != NULL){
		eliminar(frente,fin,dato);
		
		if (frente !=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	
	
	getch ();
	return 0;;
}
void insertarCola(Nodo *&frente,Nodo*&fin,int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	if (cola_vacia(frente)){
		frente=nuevo_nodo;
			
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	cout<<"Elemento  "<<n<<"  insertado en la cola"<<endl;
}

bool cola_vacia(Nodo *frente){
	return (frente==NULL)?true:false;
	
}
void eliminar(Nodo*& frente,Nodo*& fin ,int&n){
	n=frente->dato;
	Nodo *aux=frente;
	
	if (frente==fin){
		frente=NULL;
		fin=NULL;
	}
	else{
		frente=frente->siguiente;
	}
	delete aux;
	
}

