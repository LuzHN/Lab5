#include <iostream>
#include "Contacto.h"
#include "Amigos.h"
#include "Pareja.h"
#include "Amantes.h"
#include "Bloqueados.h"
#include "Compa_Clase.h"
#include "Compa_Trabajo.h"
#include "Familiares.h"

#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>



using namespace std;

int main(){

	int opcion = 0;

	vector<Contacto*> contactos;
	stringstream ss;

	while(opcion != 5){

		cout << endl << "=================== Menu =======================" <<
		endl << "1. Agregar Contacto" << endl << 
				"2. Listar contactos" << endl << 
				"3. Eliminar Contactos" << endl <<
				"4. Exportar Contactos" << endl <<
				"5. Salir" << endl;

		cin >> opcion;	

		switch(opcion){
			case 1:{ // agregar contacto

				

				string nombre = "";
				string numero = "";
				string correo = "";

				cout << "Ingrese nombre de contacto:  " ;
				cin >> nombre;

				cout << "Ingrese numero de contacto:  ";
				cin >> numero;

				cout << "Ingrese correo de contacto:  ";
				cin >>  correo;



				int opcioncontactos = 0;
				cout << endl << "=================== ¿Que tipo de contacto? =======================" <<
				endl << "1. Amigos" << endl << 
					"2. Pareja" << endl << 
					"3. Compañeros de trabajo" << endl <<
					"4. Compañeros de clase" << endl <<
					"5. Familiares" << endl <<
					"6. Amantes" << endl <<
					"7. Bloqueados" << endl << 
					"8. Regresar al menú" << endl;
				cin >> opcioncontactos;

				if(opcioncontactos == 1){
					Contacto* cont = new Amigos();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					//cont -> setTipo("Amigos");

					cout << endl << "Ingrese nivel de amigo: ";
					int nivel = 0;
					cin >> nivel;
					if(nivel < 0 || nivel > 100){
						cout << endl << "Valor de nivel de amigo no válido";
					}else{
						if( (dynamic_cast<Amigos*> (cont)) != NULL){
							Amigos* amigos = dynamic_cast<Amigos*> (cont);

							amigos -> setNivelAmigo(nivel);

							contactos.push_back(amigos);
						}
					}
				}
				else if(opcioncontactos == 2){
					Contacto* cont = new Pareja();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese fecha que empezaron a salir: ";
					string fecha;
					cin>>fecha;
					if( (dynamic_cast<Pareja*> (cont)) != NULL){
						Pareja* pareja = dynamic_cast<Pareja*> (cont);
						pareja -> setFecha(fecha);
						contactos.push_back(pareja);
					}
				}
				else if(opcioncontactos == 3){
					Contacto* cont = new Compa_Trabajo();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese Departamento donde trabajan: ";
					string departamento;
					cin>>departamento;
					if( (dynamic_cast<Compa_Trabajo*> (cont)) != NULL){
						Compa_Trabajo* trabajo = dynamic_cast<Compa_Trabajo*> (cont);
						trabajo -> setDepartamento(departamento);
						contactos.push_back(trabajo);
					}
				}
				else if(opcioncontactos == 4){
					Contacto* cont = new Compa_Clase();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese que clase llevaron: ";
					string clases;
					cin>>clases;
					if( (dynamic_cast<Compa_Clase*> (cont)) != NULL){
						Compa_Clase* clase = dynamic_cast<Compa_Clase*> (cont);
						clase -> setClase(clases);
						contactos.push_back(clase);
					}
				}
				else if(opcioncontactos == 5){
					Contacto* cont = new Familiares();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese relacion Familiar: ";
					string relacion;
					cin>>relacion;
					if( (dynamic_cast<Familiares*> (cont)) != NULL){
						Familiares* Familiar = dynamic_cast<Familiares*> (cont);
						Familiar -> setRelacionFam(relacion);
						contactos.push_back(Familiar);
					}
				}
				else if(opcioncontactos == 6){
					Contacto* cont = new Amantes();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese Horario de la sexo servidora: ";
					string horario;
					cin>>horario;
					if( (dynamic_cast<Amantes*> (cont)) != NULL){
						Amantes* amante = dynamic_cast<Amantes*> (cont);
						amante -> setHorarioDisp(horario);
						contactos.push_back(amante);
					}
				}
				else if(opcioncontactos == 7){
					Contacto* cont = new Bloqueados();
					cont -> setNombre(nombre);
					cont -> setNumero(numero);
					cont -> setCorreo(correo);
					cout << endl << "Ingrese nivel de odio: ";
					int nivel;
					cin>>nivel;
					if( (dynamic_cast<Bloqueados*> (cont)) != NULL){
						Bloqueados* bloqueado = dynamic_cast<Bloqueados*> (cont);
						bloqueado -> setNivel(nivel);
						contactos.push_back(bloqueado);
					}
				} 
				else if(opcioncontactos == 8){

				}

				break;
			}
			case 2:{ //listar contacto
				ss.str("");
				
				cout << endl;
				ss << "Amigos: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Amigos*> (contactos[j]) != NULL){
						Amigos* am = dynamic_cast <Amigos*> (contactos[j]);
						ss << endl << "  " <<  "Nombre: " <<  am -> getNombre() << " ; Correo: " << am -> getCorreo() << " ; Numero: " << am ->getNumero() 
						<< " ; Nivel Amigo: " << am -> getNivelAmigo();
						ss << endl;
					}

				}

				ss << endl << "Pareja: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Pareja*> (contactos[j]) != NULL){
						Pareja* par = dynamic_cast <Pareja*> (contactos[j]);
						ss << endl << "  " <<  "Nombre: " <<  par -> getNombre() << " ; Correo: " << par -> getCorreo() << " ; Numero: " << par ->getNumero() 
						<< " ; Fecha: " << par -> getFecha();
						ss << endl;
					}

				}

				ss << endl << "Compañeros de Trabajo: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Compa_Trabajo*> (contactos[j]) != NULL){
						Compa_Trabajo* trab = dynamic_cast <Compa_Trabajo*> (contactos[j]);
						ss << endl << "  " << "Nombre: " <<  trab -> getNombre() << " ; Correo: " << trab -> getCorreo() << " ; Numero: " << trab ->getNumero() 
						<< " ; Dept: " << trab -> getDepartamento();
						ss << endl;
					}

				}

				ss << endl << "Compañeros de Clase: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Compa_Clase*> (contactos[j]) != NULL){
						Compa_Clase* clase = dynamic_cast <Compa_Clase*> (contactos[j]);
						ss << endl << "  " << "Nombre: " <<  clase -> getNombre() << " ; Correo: " << clase -> getCorreo() << " ; Numero: " << clase ->getNumero() 
						<< " ; Clase: " << clase -> getClase();
						ss << endl;
					}

				}

				ss << endl <<  "Familiares: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Familiares*> (contactos[j]) != NULL){
						Familiares* fams = dynamic_cast <Familiares*> (contactos[j]);
						ss << endl << "  " << "Nombre: " <<  fams -> getNombre() << " ; Correo: " << fams -> getCorreo() << " ; Numero: " << fams ->getNumero() 
						<< " ; Relacion de Familia: " << fams -> getRelacionFam();
						ss << endl;
					}

				}

				ss << endl << "Amantes: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Amantes*> (contactos[j]) != NULL){
						Amantes* amores = dynamic_cast <Amantes*> (contactos[j]);
						ss << endl << "  " << "Nombre: " <<  amores -> getNombre() << " ; Correo: " << amores -> getCorreo() << " ; Numero: " << amores ->getNumero() 
						<< " ; Horario Disponible: " << amores -> getHorarioDisp();
						ss << endl;
					}

				}

				ss << endl << "Bloqueados: " << endl;

				for (int j = 0; j < contactos.size(); ++j){
					
					if( dynamic_cast <Compa_Clase*> (contactos[j]) != NULL){
						Bloqueados* blocked = dynamic_cast <Bloqueados*> (contactos[j]);
						ss << endl << "  " << "Nombre: " <<  blocked -> getNombre() << " ; Correo: " << blocked -> getCorreo() << " ; Numero: " << blocked ->getNumero() 
						<< " ; Nivel de Odio: " << blocked -> getNivel();
						ss << endl;
					}

				}
				

				cout << ss.str();

				break;
			}
			case 3:{ //eliminar contacto
				for (int i = 0; i < contactos.size(); ++i)
				{
					cout << "Posicion: "<<i<<" ; Nombre: " << contactos[i] -> getNombre() << endl;
				}

				int posicion = 0;
				cout<< "Ingrese poscion a borrar:	";
				cin >> posicion;

				if(posicion < 0 || posicion > contactos.size()){
					cout << "Posicion no valida";
				}else{
					contactos.erase(contactos.begin() + posicion);
					cout<<endl<<"contacto borrado"<<endl;
				}

				break;
			}
			case 4:{ //exportar contactos
				ofstream texto;
				texto.open("Contactos.txt");
				texto << ss.str();
				texto.close();
				break;
			}
			case 5:{ //salir

				cout << endl << "Saliendo...";
				break;
			}
			default:{

				cout << "Valor no válido.";
			}
		}

	}

	


}