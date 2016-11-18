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


using namespace std;

int main(){

	int opcion = 0;

	vector<Contacto*> contactos;

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
					cont -> setTipo("Amigos");

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

				}
				else if(opcioncontactos == 3){

				}
				else if(opcioncontactos == 4){

				}
				else if(opcioncontactos == 5){

				}
				else if(opcioncontactos == 6){

				}
				else if(opcioncontactos == 7){

				} 
				else if(opcioncontactos == 8){

				}

				break;
			}
			case 2:{ //listar contacto

				for (int i = 0; i < contactos.size(); ++i){
					
					if( dynamic_cast <Amigos*>(contactos[i]) != NULL){

						Amigos* am = dynamic_cast <Amigos*>(contactos[i]);

					}	
				}

				break;
			}
			case 3:{ //eliminar contacto

				break;
			}
			case 4:{ //exportar contactos

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