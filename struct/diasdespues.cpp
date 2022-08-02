#include <iostream>
#include <conio.h>
using namespace std;

void calc_anos(int,int&,int&,int&);
int main (){
	int dato,dia,mes,ano;
	cout<<"Cuantos dias quieres añadir?: ";cin>>dato;
	calc_anos(dato,dia,mes,ano);
	cout<<"\nAño:"<<dia<<"/"<<mes<<"/"<<ano<<endl;
	
	getch ();
	return 0;
}
void calc_anos(int dato,int& dias,int& mes,int& ano){
	dias=dato+1;
	mes=1;
	ano=2000;
	while (dias>30){
		dias-=30;
		mes++;
	}
	while (dias>365){
		dias-=365;
		ano++;
	}
	while (mes>12){
		mes-=12;
	
	}
	
}
