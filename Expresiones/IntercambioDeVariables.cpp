#include <iostream>
using namespace std;
int main(){
	int a,b, aux;
	
	cout <<"Dame a"<<endl; cin>>a;
		cout <<"Dame b"<<endl; cin>>b;
		
		aux=a;
		a=b;
	b=aux;
	
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	
	
	return 0; 
}
