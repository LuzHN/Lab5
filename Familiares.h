#include "Contacto.h"

class Familiares : public Contacto{
	protected:

		string RelacionFam;
	public:

		Familiares();
		~Familiares();
		string getRelacionFam();
		void setRelacionFam(string);
};