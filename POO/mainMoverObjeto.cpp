#include <iostream>
#include "Tablero.h"
using namespace std;
int main(int argc, char** argv) {
	Tablero*obj1;
	int x,y,opc,n;
	cout<<"Dame x: ";cin>>x;
	cout<<"Dame y: ";cin>>y;
	
	obj1=new Tablero(x,y);
	
	do{
		cout<<"\n\t MENU"<<endl;
		cout<<"1.Mover Arriba"<<endl;
		cout<<"2.Mover Abajo"<<endl;
		cout<<"3.Mover Derecha"<<endl;
		cout<<"4.Mover Izquierda"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"Opcion:";cin>>opc;
		if (opc>=1&&opc<=4){
			cout<<"Cuantas posiciones desea mover?: ";cin>>n;
		}
		
		switch(opc){
		case 1: obj1->moverArriba(n);break;
		case 2: obj1->moverAbajo(n);break;
		case 3: obj1->moverDerecha(n);break;
		case 4: obj1->moverIzquierda(n);break;
		case 5: break;
		default :cout<<"Digita una opcion valida"<<endl;
		}
		
		cout<<"Posicion Actual(X/Y):  ("<<obj1->getX()<<","<<obj1->getY()<<")"<<endl;
		
	}while(opc!=5);
	return 0;
}
