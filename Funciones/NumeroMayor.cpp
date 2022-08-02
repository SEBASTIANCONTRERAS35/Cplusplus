#include <iostream>
#include <conio.h>
using namespace std;

int maximo(int n1,int n2,int n3);

int main (){
	int num1,num2,num3;
	cout<<"Dame 3 numeros: ";cin>>num1>>num2>>num3;
	cout<<"Mayor: "<<maximo(num1,num2,num3)<<endl;
	getch();
	return 0;
}
int maximo(int n1,int n2,int n3){
	if (n1>n2&&n1>n3){
		return n1;
	}
	else if (n2>n3&&n2>n1){
		return n2;
	}
	else return n3;
	
}
