#ifndef COMPA_CLASE_H
#define COMPA_CLASE_H
#include "Contacto.h"

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