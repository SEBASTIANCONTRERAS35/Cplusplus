#include <iostream>
#include <conio.h>
using namespace std;


int main (){
	
	
	int matriz[3][3],matrizTranspuesta[3][3];
		for (int i=0;i<3;i++){
		
		for(int j=0;j<3;j++)
	{
				cout<<"Dame un numero ["<<i<<"] ["<<j<<"]";
					cin>>matriz[i][j];
	}
	cout<<endl;
}

		for (int i=0;i<3;i++){
		
		for(int j=0;j<3;j++)
	{
				matrizTranspuesta[i][j]=matriz[j][i];
	}
	cout<<endl;
}
	


for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			
					cout<<matriz[i][j];
				
				
			}
			cout<<endl;
			
}
cout<<endl;
for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			
					cout<<matrizTranspuesta[i][j];
				
				
			}
			cout<<endl;
			
}
	return 0;
}
