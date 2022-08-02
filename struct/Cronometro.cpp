#include <iostream>
#include <conio.h>

using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
}e[100];

int main (){
	int n,horasT=0,minutosT=0,segundosT=0;
	cout<<"Numero de etapas: "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\t"<<i+1<<". Etapa"<<endl;
		cout<<"Horas: ";cin>>e[i].horas;
		cout<<"Minutos: ";cin>>e[i].minutos;
		cout<<"Segundos: ";cin>>e[i].segundos;
		cout<<endl;
		horasT+=e[i].horas;
		minutosT+=e[i].minutos;
		if(minutosT>=60){
			minutosT-=60;
			horasT++;
		}
		segundosT+=e[i].segundos;
		if(segundosT>=60){
			segundosT-=60;
			minutosT++;
		}
	}
	cout<<"\t Tiempo Total"<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
		getch ();
	return 0;
}
