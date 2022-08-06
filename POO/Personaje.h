#include <iostream>
using namespace std;

class Personaje{
	friend void modificar(Personaje &p,int at,int def);
	
	private:
		int ataque,defenza;
		
		public:
			Personaje(int ataque,int defenza){
				this->ataque=ataque;
				this->defenza=defenza;
			}
			
			void mostrarDatos(){
				cout<<"Ataque: "<<ataque<<endl;
				cout<<"Defenza: "<<defenza<<endl;
			}
	
};
