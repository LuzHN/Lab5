#ifndef COMPA_CLASE_H
#define COMPA_CLASE_H
#include "Contacto.h"
#include <sstream>
class Compa_Clase: public Contacto
{
protected:
	string Clase;
public:
	void setClase(string);
	string getClase();
	Compa_Clase();
	~Compa_Clase();
};

#endif