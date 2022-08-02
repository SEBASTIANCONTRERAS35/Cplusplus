#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	int numero,aleatorio,intentos=0;
	
	srand(time(NULL));
	aleatorio=1+rand()%(100);
	do{
		cout<<"Dime un numero: ";cin>>numero;
		if(numero>aleatorio){
			cout<<"\n Es muy grande\n";
			
		}
		if (numero<aleatorio){
			cout<<"\nEs muy chico\n";
		}
		intentos++;
	}while (numero !=aleatorio);
	cout<<"Felicidades, es correcto";
	cout<<"\nTus intentos: "<<intentos<<endl;
	system("pause");
	return 0;
}
