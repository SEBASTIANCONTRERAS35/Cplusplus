#include <iostream>
using namespace std;

void funcionA(char);
void funcionB(char);


int main (){
	
	cout<<"Alfabeto: ";
	funcionA('Z');
	
	
	return 0;
}

void funcionA(char letra){
	if (letra>'A'){
		funcionB(letra); 
	}
	cout<<letra<<" ";
}

void funcionB(char letra){
	funcionA(--letra);
}
