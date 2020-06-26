#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include "Soldados.h"
#include "soldadoSoporte.h"
#include "soldadoAsalto.h "

using namespace std;

vector<Soldados*> soldiers;
vector<soldadoAsalto*> asaltos;
vector<soldadoSoporte*> soportes;

int main(int argc, char** argv) {
	int opcion=7;
	do{
		cout<<"Seleccione una opcion "<<endl;
		cout<<"1. Crear soldado"<<endl;
		cout<<"2. Eliminar soldados"<<endl;
		cout<<"3. Listar soldados"<<endl;
		cout<<"4. Guardar soldados"<<endl;
		cout<<"5. Cargar soldados"<<endl;
		cout<<"6. Simulación"<<endl;
		cout<<"7 Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{// crear soldado
				int option2;
				string nombre;
				int vida,fuerza,velocidad,fuerzaExtra,blindaje, camuflaje;
				cout<<"Ingrese nombre del soldado: ";
				cin>>nombre;
				cout<<"Ingrese vida del soldado: ";
				cin>>vida;
				cout<<"Ingrese fuerza del soldado: ";
				cin>>fuerza;
				cout<<"Seleccione que tipo de soldado es"<<endl;
				cout<<"1. Soldado de Asalto"<<endl;
				cout<<"2. Soldado de soporte"<<endl;
				cin>>option2;
				while(option2<=0 || option2>=3){
					cout<<" Opcion incorrecta, ingrese una opcion valida: ";
					cin>>option2;
				}
				switch(option2){
					case 1:{// crear soldado de asalto
						cout<<"Ingrese velocidad del soldado: ";
						cin>> velocidad;
						cout<<"Ingrese fuerza extra del soldado: ";
						cin>>fuerzaExtra;
						soldiers.push_back(new soldadoAsalto(nombre,vida,fuerza,velocidad,fuerzaExtra));
						cout<<"Soldado de asalto ha sido creado exitosamente"<<endl;
						cout<<endl;
		
						break;
					}
					
					case 2:{// crear soldado de soporte
						cout<<"Ingrese blindaje del soldado: ";
						cin>>blindaje;
						cout<<"Ingrese camuflaje del soldado:";
						cin>>camuflaje;
						soldiers.push_back(new soldadoSoporte(nombre,vida,fuerza,blindaje,camuflaje));
						cout<<"Soldado de soporte ha sido creado exitosamente"<<endl;
						cout<<endl;
						break;
					}
				}
			
			break;
			}
			
			case 2:{// Eliminar soldados
				
				break;
			}
			
			case 3:{//Listar soldados
				
				break;
			}
			
			case 4:{// Guardar soldados
				
				break;
			}
			
			case 5:{// Cargar soldados
				
				break;
			}
			
			case 6:{//simulacion
				
				
				break;
			}
		}
		
		
	}while(opcion!=7);
	return 0;
}
