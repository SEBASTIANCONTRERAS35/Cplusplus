#include <iostream>
using namespace std;
class Atleta{
	int numeroAtleta;
	string nombre;
	float tiempoCarrera;
	public :
		Atleta(int numeroAtleta,string nombre,float tiempoCarrera){
			this->nombre=nombre;
			this->numeroAtleta=numeroAtleta;
			this->tiempoCarrera=tiempoCarrera;
		}
		Atleta(){
			
			
		}
		~Atleta(){
			
		}
		

		float getTiempoCarrera();
		void mostrarDatos();
		static int indiceGanador(Atleta atletas[],int n);

		};
