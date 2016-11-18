#include "Contacto.h"
#include <sstream>

class Familiares : public Contacto{
	protected:

		string RelacionFam;
	public:

		Familiares();
		~Familiares();
		string getRelacionFam();
		void setRelacionFam(string);
};