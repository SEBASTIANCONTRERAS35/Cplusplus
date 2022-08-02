#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int n,y=0,x=1,z=1;
	
	cout<<"Cuantos elementos quieres en la serie?"<<endl;cin>>n;
	
	for (int i=0;i<n;i++){
		
		
		z=y+x;
		cout<<z<<",";
		x=y;
		y=z;
		
		
		
	}
	cout<<endl;
	system("pause");
	return 0;
}
