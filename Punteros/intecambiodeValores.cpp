#include <iostream>
#include <conio.h>
using namespace std;


void intercambio(float *,float *);

int main (){
	float num1=20.8,num2=6.78;
	cout<<"Primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
		
	intercambio(&num1,&num2);
	cout<<"Intercambio....";
	cout<<"\nPrimer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	getch ();
	return 0;
}
void intercambio(float *dirnum1,float *dirnum2){
	float aux;
	aux=*dirnum1;
	*dirnum1=*dirnum2;
	*dirnum2=aux;
}
