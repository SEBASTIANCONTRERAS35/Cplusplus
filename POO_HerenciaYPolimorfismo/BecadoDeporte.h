#include <iostream>
#include "Alumno.h"
#include "Entrenador.h"
using namespace std;

class BecadoDeporte : public Alumno,public Deportista{
	private:
		float beca;
		
		public :
			BecadoDeporte(string nombreCarrera,string Entrenador,float beca):Alumno(nombreCarrera),Deportista(Entrenador){
				this->beca=beca;
			}
			~BecadoDeporte(){
				
			}
			void mostrarDatos(){
				Alumno::mostrarDatos();
				Deportista::mostrarDatos();
				cout<<"Monto de beca: "<<beca<<endl;
			}
			
			void setBeca(float n){
				float incremento=(beca*n)/100;
				this->beca+=incremento;
				
			}
			
			float getBeca(){
				return beca;
			}
			
};
