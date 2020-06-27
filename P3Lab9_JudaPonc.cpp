#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include "Soldados.h"
#include "soldadoSoporte.h"
#include "soldadoAsalto.h "
#include <random>
#include <time.h>
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
		cout<<"1. Crear soldado(opcion 4 ya incluida aqui)"<<endl;
		cout<<"2. Eliminar soldados"<<endl;
		cout<<"3. Listar soldados"<<endl;
		cout<<"4. Guardar soldados(en la opcion 1)"<<endl;
		cout<<"5. Cargar soldados(no funciona :("<<endl;
		cout<<"6. Simulación"<<endl;
		cout<<"7 Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{// crear soldado
				int option2;
				char nombre [20];
    			char vida[5];
    			char fuerza [5];
    			char velocidad[5];
    			char fuerzaExtra[5];
    			char blindaje[5];
    			char camuflaje[5];
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
								DatosAsaltos dAsaltos;
    							ofstream binaryFile("team1.dat",ios::app|ios::binary);
    						 	strcpy(dAsaltos.nombre,nombre);
    							strcpy(dAsaltos.vida,vida);
    							strcpy(dAsaltos.fuerza,fuerza);
    							strcpy(dAsaltos.velocidad,velocidad);
    							strcpy(dAsaltos.fuerzaExtra,fuerzaExtra);
    
    							binaryFile.write((char*)&dAsaltos,sizeof(DatosAsaltos));
    						
    							binaryFile.close();
    							//cout<<"aqui llegaa";
   								string _nombre = dAsaltos.nombre;
    							string _vida=dAsaltos.vida;
    							string _fuerza = dAsaltos.fuerza;
    							string _velocidad= dAsaltos.velocidad;
    							string _fuerzX= dAsaltos.fuerzaExtra;
								team1.push_back(new soldadoAsalto(_nombre,stoi(_vida),stoi(_fuerza),stoi(_velocidad),stoi(_fuerzX)));
								cout<<"Soldado de asalto ha sido creado y escrito en el archivo exitosamente en el equipo 1"<<endl;
								break;
							}
							
							case 2:{// agregar al equipo 2
								DatosAsaltos dAsaltos;
    							ofstream binaryFile("team2.dat",ios::app|ios::binary);
    						 	strcpy(dAsaltos.nombre,nombre);
    							strcpy(dAsaltos.vida,vida);
    							strcpy(dAsaltos.fuerza,fuerza);
    							strcpy(dAsaltos.velocidad,velocidad);
    							strcpy(dAsaltos.fuerzaExtra,fuerzaExtra);
    
    							binaryFile.write((char*)&dAsaltos,sizeof(DatosAsaltos));
    							binaryFile.close();
   								string _nombre = dAsaltos.nombre;
    							string _vida=dAsaltos.vida;
    							string _fuerza = dAsaltos.fuerza;
    							string _velocidad= dAsaltos.velocidad;
    							string _fuerzX= dAsaltos.fuerzaExtra;
								team2.push_back(new soldadoAsalto(_nombre,stoi(_vida),stoi(_fuerza),stoi(_velocidad),stoi(_fuerzX)));
								cout<<"Soldado de asalto ha sido creado y escrito en el archivo exitosamente en el equipo 2"<<endl;
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
								DatosSoporte dSoporte;
    							ofstream binaryFile("team1.dat",ios::app|ios::binary);
    						 	strcpy(dSoporte.nombre,nombre);
    							strcpy(dSoporte.vida,vida);
    							strcpy(dSoporte.fuerza,fuerza);
    							strcpy(dSoporte.blindaje,blindaje);
    							strcpy(dSoporte.camuflaje,camuflaje);
    
    							binaryFile.write((char*)&dSoporte,sizeof(DatosSoporte));
    							binaryFile.close();
   								string _nombre = dSoporte.nombre;
    							string _vida=dSoporte.vida;
    							string _fuerza = dSoporte.fuerza;
    							string _blindaje= dSoporte.blindaje;
    							string _camu= dSoporte.camuflaje;
								team1.push_back(new soldadoSoporte(_nombre,stoi(_vida),stoi(_fuerza),stoi(_blindaje),stoi(_camu)));
								cout<<"Soldado de soporte ha sido creado y escrito en el archivo exitosamente en el equipo 1"<<endl;
								break;
							}
							
							case 2:{// agregar al equipo 2
								DatosSoporte dSoporte;
    							ofstream binaryFile("team2.dat",ios::app|ios::binary);
    						 	strcpy(dSoporte.nombre,nombre);
    							strcpy(dSoporte.vida,vida);
    							strcpy(dSoporte.fuerza,fuerza);
    							strcpy(dSoporte.blindaje,blindaje);
    							strcpy(dSoporte.camuflaje,camuflaje);
    
    							binaryFile.write((char*)&dSoporte,sizeof(DatosSoporte));
    							binaryFile.close();
   								string _nombre = dSoporte.nombre;
    							string _vida=dSoporte.vida;
    							string _fuerza = dSoporte.fuerza;
    							string _blindaje= dSoporte.blindaje;
    							string _camu= dSoporte.camuflaje;
								team2.push_back(new soldadoSoporte(_nombre,stoi(_vida),stoi(_fuerza),stoi(_blindaje),stoi(_camu)));
								cout<<"Soldado de soporte ha sido creado y escrito en el archivo exitosamente en el equipo 2"<<endl;
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
				cout<<"Esta en la opcion 1"<<endl;
				break;
			}
			
			case 5:{// Cargar soldados
				int subMenu;
				cout<<endl<<"1.Cargar Equipo#1"<<endl<<"2.Cargar Equipo#2"<<endl<<"Elija la Opcion:";
				cin >> subMenu;
				size_t tempSize=0;
				Soldados* padre1 = NULL;
				if(subMenu == 1){
					ifstream file("team1.dat",ios::binary);
					for(int i = 0;i<team1.size();i++){
						 
						file.read((char*)&tempSize, sizeof(size_t));
						padre1 = (Soldados*) malloc(tempSize);
						file.read((char*)padre1,tempSize);
						team1.push_back(padre1);
					}
					file.close();
				}else if(subMenu == 2){
					ifstream f_ile("team2.dat",ios::binary);
					for(int i = 0;i<team2.size();i++){
						f_ile.read((char*)&tempSize, sizeof(size_t));
						padre1 = (Soldados*) malloc(tempSize);
						f_ile.read((char*)padre1,tempSize);
						team2.push_back(padre1);
					}
					f_ile.close();
				}		
				break;
			}
			
			case 6:{//simulacion
				int muertesTeam1=0,muertesTeam2=0;
				if(team1.size()==0 || team2.size() == 0){
					cout <<"Los equipos no tienen integrantes suficientes para combatir" << endl << endl;
				}else {
					do{
						int random1 = rand() % team1.size();
						int random2 = rand() % team2.size();
						soldadoAsalto* t1 = dynamic_cast<soldadoAsalto*>(team1[random1]);
						soldadoAsalto* t2 = dynamic_cast<soldadoAsalto*>(team2[random2]);
						bool controlTeam1 = true; 
						bool controlTeam2 = true;
						if(t1==0 ){
							controlTeam1 = false;	
						}if(t2==0){
							controlTeam2 = false;
						}
						int turnos=0;
						if(turnos%2==0){
							team2[random2]->PVida(controlTeam1,team1[random1]->Ataque(controlTeam2));
							team1[random1]->PVida(controlTeam2,team2[random2]->Ataque(controlTeam1));
							turnos++;
						}else{
							team1[random1]->PVida(controlTeam2,team2[random2]->Ataque(controlTeam1));
							team2[random2]->PVida(controlTeam1,team1[random1]->Ataque(controlTeam2));
							turnos++;
						}
					
						if(team2[random2]->getPvida()<=0){
							delete team2[random2];
							team2.erase(team2.begin()+random2);
							muertesTeam2++;
						}
						if(team1[random1]->getPvida()<=0){
							delete team1[random1];
							team1.erase(team1.begin()+random1);
							muertesTeam1++;
						}
						cout<<endl;
						cout<<"Cantidad de soldados vivos del team 1: " << team1.size() << endl;
						cout<<"Cantidad de soldados vivos del team 2: " << team2.size() << endl;
						cout <<"Muertes del equipo 1: " << muertesTeam1 << endl;
						cout<<"Muertes del equipo2 : " << muertesTeam2 << endl;
						if(team1.size()==0 || team2.size()==0)
							break;
					}while(true);
					if(team1.size()==0 && team2.size()!=0){
						cout << "Ha ganado el equipo 2" << endl << endl;
					}else if(team2.size()==0 && team1.size()!=0){
						cout << "Ha ganado el equipo 1" << endl << endl;
					}else {
						cout << "hubo un empate" << endl << endl;
					}
				}
				
				cout<<endl;
				break;
				}
			}
		
		
	}while(opcion!=7);
	return 0;
}




