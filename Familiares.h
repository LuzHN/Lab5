#include "Contacto.h"

class Familiares : Contacto{
	protected:

		string RelacionFam;
	public:

		Familiares();
		~Familiares();
		string getRelacionFam();
		void setRelacionFam(string);
};