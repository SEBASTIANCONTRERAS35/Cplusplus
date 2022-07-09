#include <iostream>
using namespace std;


int main (){
	float a,b,c,d,e,f, resultado=0;
	
	cout<<"Dame el valor de a"<<endl; cin>>a;
	cout<<"Dame el valor de b"<<endl; cin>>b;
	cout<<"Dame el valor de c"<<endl; cin>>c;
	cout<<"Dame el valor de d"<<endl; cin>>d;
	cout<<"Dame el valor de e"<<endl; cin>>e;
	cout<<"Dame el valor de f"<<endl; cin>>f;
	 
	resultado =(a+(b/c))/(d+(e/f));
	cout.precision(3);
	cout<<"El resultado es:  "<<resultado;
	
	
	
	
	return 0;
	
}
