#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	float examen1,examen2,examen3;
	int aprobadosTodos=0,aproboUltimo=0,aprobo1=0;
	for(int i=1;i<=3;i++){
		
		cout<<i<<". Dame la calificacion del primer examen"<<endl;cin>>examen1;
		cout<<i<<". Dame la calificacion del segundo examen"<<endl;cin>>examen2;
		cout<<i<<". Dame la calificacion del tercer examen"<<endl;cin>>examen3;
		
		if(examen1>5.9 && examen2>5.9 &&examen3>5.9){
			aprobadosTodos++;
		}
		if(examen1>5.9 || examen2>5.9 || examen3>5.9 ){
			aprobo1++;
		}
		if (examen1<5.9 && examen2<5.9 && examen3>5.9 )
		aproboUltimo++;
	}
	cout<<"aprobados Todos: "<<aprobadosTodos<<endl;
	cout<<"Aprobaron solo 1: "<<aprobo1<<endl;
	cout<<"Aprobaron solo el ultimo"<<aproboUltimo<<endl;
	
	
	system ("pause");
	return 0 ;
}
