#include <iostream>
#include <stdlib.h>

using namespace std;
int main (){
	int i,x,y,resultado=1;
	

	
	do {
			cout<<"Dame el valor de x, y (positivos): ";cin>>x>>y;
			
	}while (x<0||y<0);
	
	for(i=1;i<=y;i++){
		
		resultado=resultado*x;
			
	}
	cout<<endl<<resultado<<endl<<endl;
	system ("pause");
	return 0;
}
