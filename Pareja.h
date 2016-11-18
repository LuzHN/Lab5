#include "Contacto.h"
#include <string>

#ifndef PAREJA_H
#define PAREJA_H
#include "Contacto.h"

class Pareja:Contacto
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