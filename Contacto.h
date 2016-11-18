#ifndef Contacto_h
#define Contacto_h

#include <iostream>
#include <sstream>
using namespace std;

class Contacto{

	protected:
		string nombre;
		string numero;
		string correo;
		string tipo;

	public:
		Contacto();
		~Contacto();
		virtual string getNombre();
		virtual void setNombre(string);

		virtual string getNumero();
		virtual void setNumero(string);

		virtual string getCorreo();
		virtual void setCorreo(string);

		virtual string toString();
};









#endif