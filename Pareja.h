#include "Contacto.h"
#include <string>
#include <sstream>

#ifndef PAREJA_H
#define PAREJA_H
#include "Contacto.h"

class Pareja: public Contacto
{
protected:
	string Fecha;
public:
	void setFecha(string);
	string getFecha();
	Pareja();
	~Pareja();
	
};
#endif