#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

template <class Iter>
void mostrar(Iter inicio,Iter final){
	
	while (inicio!=final){
		
		cout<<*inicio<<" ";
		inicio++;
	}
	
}

int main (){
	
	vector<char>letras(10);
	for(int i=0;i<10;i++){
		letras[i]='A'+(rand()%26);
	}
	
	mostrar(letras.begin(),letras.end());
	cout<<endl;
	
	
	mostrar(letras.rbegin(),letras.rend());
	cout<<endl;
	
	mostrar(letras.begin()+1,letras.end()-1);
	cout<<endl;
	
	return 0;
}
