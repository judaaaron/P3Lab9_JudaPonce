#include "soldadoAsalto.h"

soldadoAsalto::soldadoAsalto()
{
}


int soldadoAsalto:: getVelocidad(){
	return this->velocidad;
}
int soldadoAsalto:: getFuerzaExtra(){
	return this->fuerzaExtra;
}
		
void soldadoAsalto:: setVelocidad(int rapidez){
	this->velocidad=rapidez;
	
}
void soldadoAsalto:: setFuerzaExtra(int xforce){
	this->fuerzaExtra= xforce;
}

soldadoAsalto::soldadoAsalto(string name,int vida ,int fuerza ,int velocidad ,int xforce) : Soldados(name,vida,fuerza){
	this->velocidad=velocidad;
	this->fuerzaExtra=xforce;
}

soldadoAsalto::~soldadoAsalto()
{
}
