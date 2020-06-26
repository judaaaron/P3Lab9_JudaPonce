#ifndef SOLDADOS_H
#define SOLDADOS_H
#include<string>

using std::string;

class Soldados
{
	public:
		Soldados();
		Soldados(string,int,int);
		string getNombre();
		int getPvida();
		int getPfuerza();
		
		void setNombre(string);
		void setVida(int);
		void setFuerza(int);
		virtual void PVida(bool,int) = 0;
		virtual int Ataque(bool) = 0;
		~Soldados();
	protected:
		string nombre;
		int pVida, pFuerza;
};

#endif
