#include <iostream>
#include <conio.h>
using namespace std;

void cambio(int ,int&,int&,int&,int&,int&,int&);


int main (){
	int pago,cien,cincuenta,veinte,diez,cinco,uno;
	cout<<"Con cuanto pago el cliente? :";cin>>pago;
	
	cambio(pago,cien,cincuenta,veinte,diez,cinco,uno);
	cout<<"Cantidad de billetes: "<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Dien: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	getch ();
	return 0;
}

void cambio(int num,int& cien,int& cincuenta,int& veinte,int& diez,int&cinco,int&uno){
	
	cien=num/100;
	num%=100;
	cincuenta=num/50;
	num%=50;
	veinte=num/20;
	num%=20;
	diez=num/10;
	num%=10;
	cinco=num/5;
	num%=5;
	uno=num%5;
}
