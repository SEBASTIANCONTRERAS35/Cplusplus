#include <iostream>
#include <conio.h>
using namespace std;

struct fecha{
	int anio;
	int mes;
	int dia;
	
}date[200];

int n,pos=0;
void datos();
void muestra(fecha);
fecha mayor(fecha[200]);

int main (){
	
	datos();

fecha x=mayor(date);
	
	muestra(x);
	getch ();
	return 0;
}

void datos(){
	cout<<"Cuantas fechas vas a anotar?: ";cin>>n;
	for(int i=0;i<=n;i++){
		cout<<"Año: ";cin>>date[i].anio;
		cout<<"Mes: ";cin>>date[i].mes;
		cout<<"Dia: ";cin>>date[i].dia;
		
	}
}
fecha mayor(fecha[],int n){
	int j;
	for (int i=0;i<=n;i++){
		j=i+1;
		if ((date[i].anio>=date[j].anio)&&(date[i].mes>=date[j].mes)&&(date[i].dia>=date[j].dia)){
			pos=i;
		}
		i++;
	}
	return date[pos];
}
void muestra(fecha x){
	cout<<date[pos].dia<<"/"<<date[pos].mes<<"/"<<date[pos].anio<<endl;
}
