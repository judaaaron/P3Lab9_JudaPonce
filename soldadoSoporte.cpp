#include "soldadoSoporte.h"

soldadoSoporte::soldadoSoporte()
{
}
int soldadoSoporte:: getBlindaje(){
	return this->blindaje;
}
int soldadoSoporte:: getCamuflaje(){
	return this->camuflaje;
}
		
void soldadoSoporte:: setBlindaje(int blindaj){
	this->blindaje=blindaj;
}
void soldadoSoporte:: setCamuflaje(int camuf){
	this->camuflaje=camuf;
	
}

soldadoSoporte::soldadoSoporte(string name, int vida, int fuerza, int blindaje, int camufla) : Soldados(name,vida,fuerza){
	this->blindaje=blindaje;
	this->camuflaje=camufla;
}

void soldadoSoporte ::PVida(bool asaltar,int atac){
	if(asaltar)
		this->pVida -= atac/(this->blindaje*2);
	else
		this->pVida -= atac;
}
int soldadoSoporte::Ataque(bool asaltar){
	if(asaltar)
		return this->pFuerza*(15+this->camuflaje);
	else
		return this->pFuerza*10;	
}

soldadoSoporte::~soldadoSoporte()
{
}
