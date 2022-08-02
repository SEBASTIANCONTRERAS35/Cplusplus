#include <iostream>
#include <vector>
using namespace std;

int main (){
	
	vector<int>numeros;
	numeros.push_back(5);
	numeros.push_back(10);
	numeros.push_back(1);
	numeros.push_back(15);
	numeros.push_back(20);
//numeros[0]=0;
//numeros[1]=12;
//numeros[2]=15;
//numeros[3]=16;
//numeros[4]=17;
//	
	for (int i=0;i<numeros.size();i++){
		
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
//	numeros.pop_back();
//		numeros.erase(numeros.begin()+1,numeros.begin()+3);
//		for (int i=0;i<numeros.size();i++){
//		
//		cout<<numeros[i]<<" ";

numeros[2]=7;
for (int i=0;i<numeros.size();i++){
		
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
