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
void soldadoAsalto::PVida(bool control,int ataque){
	if(control){
		this->pVida -= ataque;	
	}else{
		this->pVida -= ataque/this->fuerzaExtra; 
	}
		
		
}
int soldadoAsalto::Ataque(bool asaltar){
	if(asaltar){
		return this->fuerzaExtra*10;	
	}else{
		return this->fuerzaExtra*(10+(this->velocidad*2));
	}	
}
soldadoAsalto::~soldadoAsalto()
{
}
