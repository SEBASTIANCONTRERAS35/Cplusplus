#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int);

int main (){
	
	int elementos;
	do{
		cout<<"NUmero de elementos: ";cin>>elementos;
	}while (elementos<=0);
	
	cout<<"\n Serie: ";
	for (int i=0;i<elementos;i++){
		cout<<fibonacci(i)<<"  ";
	}
}

int fibonacci(int n){

	 if (n<2){
	 	return n;
	 	
	 
	 }
	 else {
	 	return fibonacci(n-1)+fibonacci(n-2);
	 }
}
