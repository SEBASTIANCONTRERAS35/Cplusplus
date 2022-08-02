#include <iostream>
#include <conio.h>

using namespace std;


int main (){
	float suma_total ,promedio=0,temperatura,mayor=0,menor=999999;
	
	for (int i=0;i<24;i+=4){
		
		cout <<"Dame la temperatura de la hora"<<i<<": ";
		cin>>temperatura;
		suma_total+=temperatura;
		if (temperatura > mayor){
			mayor=temperatura;
		}
		if(temperatura<menor){
			menor=temperatura;
					}
	}
	promedio =suma_total/6;
	cout<<"\ntemperatura promedio= "<<promedio<<endl;
	cout<<"temperatura menor: "<<menor;
	cout<<"\ntemperatura mayor: "<<mayor;
	getch();
	return 0;
}
