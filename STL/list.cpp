#include <iostream>
#include <list>
using namespace std;

int main (){
	
list <int>datos;

	
datos.push_back(5);
datos.push_back(1);
datos.push_back(6);
datos.push_front(2);
datos.push_front(7);
datos.push_front(4);

datos.sort();
list <int>::iterator i;
i=datos.begin()	;
while (i!=datos.end()){
	cout<<*i<<" ";
	i++;
}
cout<<endl;
//Eliminar
datos.pop_back();
datos.pop_front();

while (i!=datos.end()){
	cout<<*i<<" ";
	i++;
}
	
	return 0;
}
