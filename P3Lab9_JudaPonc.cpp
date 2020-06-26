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
