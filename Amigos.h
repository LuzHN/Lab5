#ifndef AMIGOS_H
#define AMIGOS_H
#include "Contacto.h"

class Amigos:Contacto
{
protected:
	int nivel_amigo;
public:
	void setNivelAmigo(int);
	int getNivelAmigo();

	Amigos();
	~Amigos();
};


#endif