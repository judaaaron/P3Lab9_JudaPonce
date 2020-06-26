#ifndef SOLDADOSOPORTE_H
#define SOLDADOSOPORTE_H

#include "Soldados.h"

class soldadoSoporte : public Soldados
{
	public:
		soldadoSoporte(string, int, int, int, int);
		int getBlindaje();
		int getCamuflaje();
		
		void setBlindaje(int);
		void setCamuflaje(int);
		
		void PVida(bool,int);
		int Ataque(bool);
		
		~soldadoSoporte();
	protected:
		int blindaje, camuflaje;
};

#endif
