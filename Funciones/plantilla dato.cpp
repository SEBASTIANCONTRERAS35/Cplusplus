#include <iostream>
#include <conio.h>
using namespace std;

template<class TIPOD>
void despliege(TIPOD dato);
int main (){
	
	int dato1=4;
	float dato2=15.67;
	double dato3=567.7890;
	char dato4[]= "A";
	despliege(dato1);
	despliege(dato2);
	despliege(dato3);
	despliege(dato4);
	getch();
	return 0;
}
template<class TIPOD>
void despliege(TIPOD dato){
	
	cout<<dato<<endl;
}
