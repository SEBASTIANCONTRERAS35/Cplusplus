#include <iostream>
#include "Intercambio.h"
using namespace std;
int main(int argc, char** argv) {
	char dato2,dato1;
	cout<<"Dame el primer valor: ";cin>>dato1;
	cout<<"Dame el segundo valor: ";cin>>dato2;
	intercambiar(dato1,dato2);
	cout<<"Los nuevos valores son: "<<endl;
	cout<<"Dato1= "<<dato1<<endl;
	cout<<"Dato2= "<<dato2<<endl;
	
	return 0;
}
