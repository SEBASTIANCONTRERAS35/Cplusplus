#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main (){
	char cat1[]="Esto es una cadena ";
	char cat2[]="de ejemplo";
	char cat3[30];
	
	strcpy(cat3,cat1);
	strcat(cat3,cat2);
	
	cout<<cat3<<endl;
	
	system ("pause");
	return 0;
}
