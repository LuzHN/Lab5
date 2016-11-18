#include "Contacto.h"

class Bloqueados : Contacto{


	protected:
		int nivelodio;

	public:
		int getNivel();
		void setNivel(int);
		Bloqueados();
		~Bloqueados();
};