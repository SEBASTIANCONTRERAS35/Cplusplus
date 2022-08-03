//Implementacion de la clase persona

#include <iostream>
using namespace std;
class Persona{
	private:
		string nombre;
		int edad;
		string dni;
		
		
		public:
			Persona(string _nombre, int _edad){
				nombre=_nombre;
				edad=_edad;
			}
			Persona(string _dni){
				dni=_dni;
			}
			void correr(){
				cout<<"Soy "<<nombre<<"y tengo "<<edad<<endl;
			}
			void correr(int km){
				cout<<"He corrido "<<km<<endl;
			}
			
};
