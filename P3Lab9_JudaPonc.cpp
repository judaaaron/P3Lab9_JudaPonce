#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include "Soldados.h"
#include "soldadoSoporte.h"
#include "soldadoAsalto.h "
using std::string;
using std::strcpy;
using std::stoi;
using std::ofstream;
using std::ifstream;
using std::ios;
using std::to_string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;



vector<Soldados*> team1;
vector<Soldados*> team2;
vector<soldadoAsalto*> asaltos;
vector<soldadoSoporte*> soportes;

struct DatosAsaltos{
    char nombre [20];
    char vida[5];
    char fuerza [5];
    char velocidad[5];
    char fuerzaExtra[5];
    
};

struct DatosSoporte{
    char nombre [20];
    char vida[5];
    char fuerza [5];
    char blindaje[5];
    char camuflaje[5];
    
};

void escribirAsalto(vector<soldadoAsalto*>);

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
						int opTeam;
						cout<<" A que equipo quisiera agregar al soldado"<<endl;
						cout<<"1. Team 1"<<endl;
						cout<<"2. Team 2"<<endl;
						cin>>opTeam;
						while(opTeam<1 || opTeam>2){
							cout<<"Solo existen 2 equipos, ingrese una opcion valida: ";
							cin>>opTeam;
							
						}
						switch(opTeam){
							case 1:{// agregar al equipo 1
								team1.push_back(new soldadoAsalto(nombre,vida,fuerza,velocidad,fuerzaExtra));
								cout<<"Soldado de asalto ha sido creado exitosamente en el equipo 1"<<endl;
								break;
							}
							
							case 2:{// agregar al equipo 2
								team2.push_back(new soldadoAsalto(nombre,vida,fuerza,velocidad,fuerzaExtra));
								cout<<"Soldado de asalto ha sido creado exitosamente en el equipo 2"<<endl;
								break;
							}
						}
					
						cout<<endl;
		
						break;
					}
					
					case 2:{// crear soldado de soporte
						cout<<"Ingrese blindaje del soldado: ";
						cin>>blindaje;
						cout<<"Ingrese camuflaje del soldado:";
						cin>>camuflaje;
							int opTeam;
						cout<<" A que equipo quisiera agregar al soldado"<<endl;
						cout<<"1. Team 1"<<endl;
						cout<<"2. Team 2"<<endl;
						cin>>opTeam;
						while(opTeam<1 || opTeam>2){
							cout<<"Solo existen 2 equipos, ingrese una opcion valida: ";
							cin>>opTeam;
							
						}
						switch(opTeam){
							case 1:{// agregar al equipo 1
								team1.push_back(new soldadoSoporte(nombre,vida,fuerza,blindaje,camuflaje));
								cout<<"Soldado de soporte ha sido creado exitosamente en el equipo 1"<<endl;
								break;
							}
							
							case 2:{// agregar al equipo 2
								team2.push_back(new soldadoSoporte(nombre,vida,fuerza,blindaje,camuflaje));
								cout<<"Soldado de asalto ha sido creado exitosamente en el equipo 2"<<endl;
								break;
							}
						}
				
						cout<<endl;
						break;
					}
				}
			
			break;
			}
			
			case 2:{// Eliminar soldados
				int opTeam;
				cout<<"Seleccione de que equipo es el soldado"<<endl;
				cout<<"1. Team 1"<<endl;
				cout<<"2. Team 2"<<endl;
				cin >> opTeam;
	
				while(opTeam<1 || opTeam>2){
				cout << "Opción invalida, ingrese una opccion nueva" << endl;
				cin >> opTeam;
				}
				cout << endl;
	
				switch(opTeam){
					case 1:{
						if (team1.size()==0){
							cout << "No hay soldados en este equipo hasta el momento." << endl << endl;
						} else {
							int seleccion;
							for(int i=0;i<team1.size();i++){
								cout <<i<<". Nombre: " << team1[i]->getNombre() << endl;
							}
							cout<<"Seleccione el soldado a eliminar: "<<endl;
							cout<<"NOTA: La lista comienza en 0: ";
							cin >> seleccion;
				
							while(seleccion<-1 || seleccion>team1.size()){
								cout << endl << "No hay registros en esa posicion, ingrese una nueva opcion: ";
								cin >> seleccion;
				
							}
				
							delete team1[seleccion];
							team1.erase(team1.begin()+seleccion);
							cout<<"Soldado ha sido eliminado exitosamente" <<endl;	
							cout<<endl;			
						}
						
						break;
					}
					case 2:{
						if (team2.size()==0){
							cout << "No hay soldados en este equipo hasta el momento." << endl << endl;
						}else {
							int seleccion;
							for(int i=0;i<team2.size();i++){
								cout<<i<< ". Nombre: " << team2[i]->getNombre() << endl;
							}
							cout<<"Seleccione el soldado a elimianr: "<<endl;
							cout<<"NOTA: La lista comienza en 0: ";
							cin >> seleccion;
				
							while(seleccion<-1 || seleccion>team1.size()){
								cout << endl << "No hay registros en esa posicion, ingrese una nueva opcion: ";
								cin >> seleccion;
				
							}
							delete team2[seleccion];
							team2.erase(team2.begin()+opcion);
							cout<<"Soldado ha sido eliminado exitosamente" <<endl;	
							cout<<endl;					
						}
						break;
					}
				}
				
				break;
			}
			
			case 3:{//Listar soldados
				if(team1.size()==0){
					cout <<"No hay soldados en el equipo 1 hasta el momento" << endl;
				} else {
					cout<<"Listado de soldados del equipo 1" << endl;
					for(int i=0;i<team1.size();i++){
						cout<<i<< ". Nombre: " << team1[i]->getNombre() << endl;
					}
					cout<<endl;
				}
				if(team2.size()==0){
					cout <<"No hay soldados en el equipo 2 hasta el momento" << endl;
				}else{
					cout <<"Listado de soldados del equipo 2"<<endl;
					for(int i=0;i<team2.size();i++){
						cout<<i<< ". Nombre: " << team2[i]->getNombre() << endl;
					}
				}
				cout << endl;
				
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


