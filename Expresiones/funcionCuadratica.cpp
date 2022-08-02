#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	float a ,b,c,resultado1,resultado2;
	
	cout<<"Digita a"<<endl; cin>>a;
		cout<<"Digita b"<<endl; cin>>b;
		cout<<"Digita c"<<endl; cin>>c;
	
	
	resultado1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
		resultado2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	
	cout<<"\n El resultado 1 es: "<<resultado1;
	cout<<"\n El resultado 1 es: "<<resultado2;
	
	return 0;
}
