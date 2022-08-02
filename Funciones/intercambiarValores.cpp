#include <iostream>
#include <conio.h>
using namespace std;

void inter(int&,int&);

int main (){
	int num1=10,num2=15;
	
	cout<<"El valor de num1: "<<num1<<endl;
	cout<<"El valor de num2: "<<num2<<endl;
	cout<<endl;
	inter(num1,num2);
	cout<<"El nuevo valor de num1: "<<num1<<endl;
	cout<<"El nuevo valor de num2: "<<num2<<endl;
	
	getch ();
	return 0;
}
void inter(int& num1,int& num2){
	int aux;
	aux=num1;
	num1=num2;
	num2=aux;
	}
