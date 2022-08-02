#include <iostream>
#include <conio.h>
using namespace std;

void tiempo (int,int&,int&,int&);

int main (){
	int dato,horas,min,seg;
	cout<<"Cuantos segundos: ";cin>>dato;
	tiempo(dato,horas,min,seg);
	cout<<"\t Tiempo"<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	
	return 0;
}
void tiempo(int dato,int& horas,int& min, int& seg){
	seg=dato;
	horas=0;
	min=0;
	while (seg>=60){
		seg-=60;
		min++;
	}
	
	while (min>=60){
		min-=60;
		horas++;
	}
}
