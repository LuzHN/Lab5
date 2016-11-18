#include "Contacto.h"

Contacto::Contacto(){
}

string Contacto :: getNombre(){
	return nombre;
}

void Contacto :: setNombre(string pnombre){
	nombre = pnombre;
}

string Contacto :: getNumero(){
	return numero;
}

void Contacto :: setNumero(string pnumero){
	numero = pnumero;
}

string Contacto :: getCorreo(){
	return correo;
}

void Contacto :: setCorreo(string pcorreo){
	correo = pcorreo;
}

string  Contacto :: toString(){

}

Contacto::~Contacto(){
	
}

