main:	main.o Amantes.o Amigos.o Bloqueados.o Compa_Clase.o Compa_Trabajo.o Contacto.o Familiares.o Pareja.o
	g++ main.o Amantes.o Amigos.o Bloqueados.o Compa_Clase.o Compa_Trabajo.o Contacto.o Familiares.o Pareja.o -o main

main.o:	main.cpp Amantes.h Amigos.h Bloqueados.h Compa_Clase.h Compa_Trabajo.h Contacto.h Familiares.h Pareja.h
	g++ -c main.cpp

Amantes.o:	Contacto.h Amantes.h Amantes.cpp
	g++ -c Amantes.cpp

Amigos.o:	Contacto.h Amigos.h Amigos.cpp
	g++ -c Amigos.cpp

Bloqueados.o:	Contacto.h Bloqueados.h Bloqueados.cpp
	g++ -c Bloqueados.cpp

Familiares.o:	Contacto.h Familiares.h Familiares.cpp
	g++ -c Familiares.cpp

Pareja.o:	Contacto.h Pareja.h Pareja.cpp
	g++ -c Pareja.cpp

Contacto.o:	Contacto.h Contacto.cpp
	g++ -c Contacto.cpp

Compa_Clase.o:	Contacto.h Compa_Clase.h Compa_Clase.cpp
	g++ -c Compa_Clase.cpp

Compa_Trabajo.o:	Contacto.h Compa_Trabajo.h Compa_Trabajo.cpp
	g++ -c Compa_Trabajo.cpp

clean:
	rm -f *.o main
