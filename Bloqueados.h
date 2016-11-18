#include "Contacto.h"
#include <sstream>
class Bloqueados : public Contacto{

	private:
		int nivelodio;

	public:
		int getNivel();
		void setNivel(int);
		Bloqueados();
		~Bloqueados();
};