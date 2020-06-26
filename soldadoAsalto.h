#ifndef SOLDADOASALTO_H
#define SOLDADOASALTO_H

#include "Soldados.h"

class soldadoAsalto : public Soldados
{
	public:
		soldadoAsalto();
		soldadoAsalto(string,int,int,int,int);
		int getVelocidad();
		int getFuerzaExtra();
		
		void setVelocidad(int);
		void setFuerzaExtra(int);
		
		void PVida(bool,int);
		int Ataque(bool);
	
		~soldadoAsalto();
	protected:
		int velocidad,fuerzaExtra;
};

#endif
