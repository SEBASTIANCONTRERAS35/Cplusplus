#include <iostream>
#include "Alumno.h"
#include "Entrenador.h"
#include "BecadoDeporte.h"
using namespace std;

int main(int argc, char** argv) {
	Alumno *alumnoJuan =new Alumno("Informatica");
	Alumno *alumnoPedro=new Alumno("Ingenieria");
	Deportista *deporLuis =new Deportista("Popeye");
	BecadoDeporte *bdAna=new BecadoDeporte("Administracion","Luis",1200);
		BecadoDeporte *bdCarmen=new BecadoDeporte("Contabilidad","Roca",1350);
	
	cout<<"Mostrando datos:"<<endl;
	cout<<"Juan: "<<endl;
	alumnoJuan->mostrarDatos();
	cout<<endl;
		cout<<"Pedro: "<<endl;
	alumnoPedro->mostrarDatos();
	cout<<endl;
	
		cout<<"Luis: "<<endl;
	deporLuis->mostrarDatos();
	cout<<endl;
	
		cout<<"Ana: "<<endl;
	bdAna->mostrarDatos();
	cout<<endl;
	
		cout<<"Carmen: "<<endl;
	bdCarmen->mostrarDatos();
	cout<<endl;
	
	string nuevaCarrera;
	cout<<"Dime la nueva carrera de Juan: ";getline(cin,nuevaCarrera);
	alumnoJuan->setCarrera(nuevaCarrera); 
	cout<<"La nueva carrera de Juan es "<<alumnoJuan->getCarrera()<<endl;
		cout<<"Dime la nueva carrera de Ana: ";getline(cin,nuevaCarrera);
	bdAna->setCarrera(nuevaCarrera); 
		cout<<"La nueva carrera de Ana es "<<bdAna->getCarrera()<<endl;
	string nuevoEntrenador;
	cout<<"Dime el nombre del nuevo entrenador de luis: ";getline(cin,nuevoEntrenador);
	deporLuis->setEntrenador(nuevoEntrenador);
		cout<<"El nuevo entrenador de Luis es :  "<<deporLuis->getEntrenador()<<endl;
		cout<<"Dime el nombre del nuevo entrenador de Carmen: ";getline(cin,nuevoEntrenador);
		bdCarmen->setEntrenador(nuevoEntrenador);
			cout<<"El nuevo entrenador de Carmen es :  "<<bdCarmen->getEntrenador()<<endl;
	
	
float incremento;
cout<<"\n Dime el incremento de Ana: ";cin>>incremento;
bdAna->setBeca(incremento);
cout<<"El nuevo monto de la beca de Ana es: "<<bdAna->getBeca()<<endl;
cout<<"Dime el incremento de Carmen: ";cin>>incremento;
bdCarmen->setBeca(incremento);
cout<<"El nuevo monto de la beca de Carmen es : "<<bdCarmen->getBeca()<<endl;
	
	delete alumnoJuan;
		delete alumnoPedro;
			delete deporLuis;
				delete bdAna;
					delete bdCarmen;
	return 0;
}
