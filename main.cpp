#include <iostream>
#include "Contacto.h"
#include <vector>


using namespace std;

int main(){

	int opcion = 0;

	vector<Contacto*> contactos;

	while(opcion < 6){

		cout << "=================== Menu =======================" <<
		endl << "1. Agregar Contacto" << endl << 
				"2. Listar contactos" << endl << 
				"3. Eliminar Contactos" << endl <<
				"4. Exportar Contactos" << endl <<
				"5. Salir" << endl;

		cin >> opcion;	

		switch(opcion){
			case 1:{ // agregar contacto
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