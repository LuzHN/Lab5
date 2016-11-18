#include "Contacto.h"

class Amantes : public Contacto{
	protected:
		string HorarioDisp;

	public:
		Amantes();
		~Amantes();

		string getHorarioDisp();
		void setHorarioDisp(string);
		
};