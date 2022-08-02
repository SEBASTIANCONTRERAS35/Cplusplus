#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <stdlib.h>;
using namespace std;

int aleatorios(){
	
	return rand()%10;
}

int main (){
	//generando
	list<int>valores(10);
	generate(valores.begin(),valores.end(),aleatorios);
	
	
	//Imprimir
	ostream_iterator<int>salida(cout," ");
	copy(valores.begin(),valores.end(),salida);
	
	
	//Buscar
	list<int>::iterator i;
	i=find(valores.begin(),valores.end(),8);
	
	//analizamos si i no sobrepasa los rangos de la lista
	if (i!=valores.end()){
		cout<<"\nEl elemento si a sido encontrado en la lista"<<endl;
	}
	else cout<<"El elemento no ha sido encontrado"<<endl;
	
	
	return 0;
}
