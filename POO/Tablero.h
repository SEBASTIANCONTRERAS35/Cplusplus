#include <iostream>
using namespace std;

class Tablero{
	private:
		int x,y;
		
		public:
			Tablero(int x,int y){
				this->y=y;
				this->x=x;
				
			}
			void moverArriba(int);
			void moverAbajo(int);
			void moverDerecha(int);
			void moverIzquierda(int);
			
			int getX();
			int getY();
			
};
