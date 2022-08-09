#ifndef ENTRENADOR_H
#define ENTRENADOR_H
#include <iostream>

using namespace std;
class Deportista{
	
	private:
		string Entrenador;
		
		public:
			Deportista(string Entrenador){
				this->Entrenador=Entrenador;
			}
				
				~Deportista(){
					
				}
			void mostrarDatos(){
				cout<<"Entrenador: "<<Entrenador<<endl;
			}
			void setEntrenador(string nuevoEntrenador){
				this->Entrenador=nuevoEntrenador;
				
			}
			string getEntrenador(){
				return Entrenador;
			}
	
};
#endif
