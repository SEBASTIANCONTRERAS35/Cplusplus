#include <iostream>

using namespace std;

template <class T>
class Materia{
	
	private:
		string nombreMateria;
		int claveMateria;
		T calificacion;
		
		public:
			
			Materia(string nombreMateria,int clave,T calificacion){
				this->nombreMateria=nombreMateria;
				this->claveMateria=claveMateria;
				this->calificacion=calificacion;
			}
			
			void mostrarDatos(){
				cout<<"Materia: "<<this->nombreMateria<<endl;
				cout<<"Clave: "<<this->claveMateria<<endl;
				cout<<"Calificacion: "<<this->calificacion<<endl;
				
				
			}
			
			void setCalificacion (T nuevaCalificacion){
				this->calificacion=nuevaCalificacion;
				
				
			}
			
			T getCalificacion(){
				return this->calificacion;
			}
			
};
