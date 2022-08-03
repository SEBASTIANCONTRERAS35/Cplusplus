class Diaanio{
	//atributos
	private:
		int dia,mes;
		
		//metodos
	public:
		Diaanio(int _dia,int _mes){
			dia=_dia;
			mes=_mes;
			
		}
		bool igual(Diaanio& d);
		void visualizar();
		
};
