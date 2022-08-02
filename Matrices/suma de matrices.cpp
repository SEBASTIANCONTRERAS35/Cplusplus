#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matriz1[3][3],matriz2[3][3],matrizRespuesta[3][3];
	
	for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
				cout<<"1.Dame un numero ["<<i<<"] ["<<j<<"]";
					cin>>matriz1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
		for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
				cout<<"2.Dame un numero ["<<i<<"] ["<<j<<"]";
					cin>>matriz2[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
		for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
				matrizRespuesta[i][j]=matriz1[i][j]+matriz2[i][j];
				
		}
	}
		for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
				cout<<matriz1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
		for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
				cout<<matriz2[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
		for (int i=0; i<3;i++){
		for (int j=0; j<3;j++){
			cout<<matrizRespuesta[i][j];
				
		}
			cout<<endl;
	}
	
	
	return 0;
}
