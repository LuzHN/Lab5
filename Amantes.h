#include "Contacto.h"
#include <sstream>

class Amantes : public Contacto{
	protected:
		string HorarioDisp;

	public:
		Amantes();
		~Amantes();
		string getHorarioDisp();
		void setHorarioDisp(string);
};