#ifndef SOLDADOSOPORTE_H
#define SOLDADOSOPORTE_H

#include "Soldados.h"

class soldadoSoporte : public Soldados
{
	public:
		soldadoSoporte();
		soldadoSoporte(string, int, int, int, int);
		int getBlindaje();
		int getCamuflaje();
		
		void setBlindaje(int);
		void setCamuflaje(int);
		
		~soldadoSoporte();
	protected:
		int blindaje, camuflaje;
};

#endif
