#include <iostream>
#include <conio.h>
using namespace std;

int Max(int *,int);


int main (){
	const int elementos=5;
	int numeros[]={3,12,2,8,1};
	cout<<"Mayor: "<<Max(numeros,elementos);
	
	
	
	getch ();
	return 0;
}

int Max(int *dir,int elementos){
	int max=0;
	for (int i=0;i<elementos;i++){
		
		if (*(dir+i)>max){
			
		max=*(dir+i)	;
		}
		
	}
	return max;
}
