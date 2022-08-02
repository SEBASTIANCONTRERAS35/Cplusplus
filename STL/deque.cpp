#include <iostream>
#include <deque>
using namespace std;

int main (){
	
	deque<char>letras;
	
	letras.push_front('C');
	letras.push_front('B');
	letras.push_front('A');
	letras.push_back('D');
	letras.push_back('E');
	letras.push_back('F');
	
	for (int i=0;i<letras.size();i++){
		cout<<letras[i]<<" ";
	}
	cout<<endl;
	letras.pop_front();
	letras.pop_back();
	for (int i=0;i<letras.size();i++){
		cout<<letras[i]<<" ";
	}
	return 0;
}
