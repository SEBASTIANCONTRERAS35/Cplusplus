#include <iostream>
using namespace std;

template <typename T,typename T2>
T mayor(T dato1,T2 dato2){
	if (dato1>=dato2){
		return dato1;
		
	}
	else return dato2;
}

int main (){
	cout<<"Mayor: "<<mayor(5,9.81)<<endl;
	cout<<"Mayor de reales: "<<mayor(9.87,5.47)<<endl;
		cout<<"Mayor de caracter: "<<mayor('r','z');
	
	return 0;
}
