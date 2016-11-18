#include "Contacto.h"

class Amantes : Contacto{
	protected:
		string HorarioDisp;

	public:
		Amantes();
		~Amantes();

		string getHorarioDisp();
		void setHorarioDisp(string);
		
};