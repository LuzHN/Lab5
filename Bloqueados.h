#include "Contacto.h"

class Bloqueados : public Contacto{


	protected:
		int nivelodio;

	public:
		int getNivel();
		void setNivel(int);
		Bloqueados();
		~Bloqueados();
};