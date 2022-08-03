class Punto{
	//Atributos
	private:
		int x,y;
	//Metodos
	public:
		Punto(int _x,int _y ){//Constructor
			x=_x;
			y=_y;
		}
	Punto(){
		x=y=0;
	}
	void setx(int valorx);
	void sety(int valory);
	int getx();
	int gety();
};



