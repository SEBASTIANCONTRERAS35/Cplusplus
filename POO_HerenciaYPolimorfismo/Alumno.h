#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>

using namespace std;
class Alumno{
	
	private:
		string nombreCarrera;
		
		public:
			Alumno(string nombreCarrera){
				this->nombreCarrera=nombreCarrera;
			}
			~Alumno(){
				
			}
			void mostrarDatos(){
				cout<<"Carrera: "<<nombreCarrera<<endl;
			}
			void setCarrera(string nuevaCarrera){
				this->nombreCarrera=nuevaCarrera;
				
			}
			string getCarrera(){
				return nombreCarrera;
			}
			
};
#endif
