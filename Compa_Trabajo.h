#ifndef COMPA_TRABAJO_H
#define COMPA_TRABAJO_H
#include "Contacto.h"

class Compa_Trabajo: public Contacto
{
protected:
	string Departamento;
public:
	Compa_Trabajo();
	void setDepartamento(string);
	string getDepartamento();
	~Compa_Trabajo();
	
};

#endif