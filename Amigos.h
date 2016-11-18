#ifndef AMIGOS_H
#define AMIGOS_H
#include "Contacto.h"
#include <sstream>
class Amigos: public Contacto
{
protected:
	int nivel_amigo;
public:
	Amigos();
	~Amigos();
	void setNivelAmigo(int);
	int getNivelAmigo();
	virtual string toString();
	
};


#endif