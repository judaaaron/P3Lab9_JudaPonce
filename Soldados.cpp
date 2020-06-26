#include "Soldados.h"

Soldados::Soldados()
{
}

string Soldados:: getNombre(){
	return this->nombre;
}
int Soldados:: getPvida(){
	return this->pVida;	
}
int Soldados:: getPfuerza(){
	return this->pFuerza;	
}

void Soldados:: setNombre(string name){
	this->nombre=name;
}
void Soldados:: setVida(int life){
	this->pVida=life;
}
void Soldados:: setFuerza(int force){
	this->pFuerza=force;
}

Soldados::Soldados(string name, int pVida, int pFuerza)
{
	this->nombre=name;
	this->pVida=pVida;
	this->pFuerza=pFuerza;	
}

Soldados::~Soldados()
{
}
