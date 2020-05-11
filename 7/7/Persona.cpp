#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona(string nombre,string dni,string apellido,string fecha,string direccion,string ciudad)
{
	this->nombre   	= nombre;
	this->apellido 	= apellido;
	this->dni 	   	= dni;
	this->ciudad   	= ciudad;
	this->direccion = direccion;
	this->fecha 	= fecha;
}

string Persona::getNombre(){
	return this->nombre;
}
string Persona::getApellido(){
	return this->apellido;
}
string Persona::getDni(){
	return this->dni;
}
string Persona::getFecha(){
	return this->fecha;
}
string Persona::getDireccion(){
	return this->direccion;
}
string Persona::getCiudad(){
	return this->ciudad;
}


void setNombre(string nombre){
	this->nombre = nombre;
}

void setApellido(string apellido){
	this->apellido = apellido;
}

void setDni(string dni){
	this->dni = dni;
}

void setFecha(string fecha){
	this->fecha = fecha
}

void setDireccion(string direccion){
	this->direccion = direccion;
}

void setCiudad(string ciudad){
	this->ciudad = ciudad
}

		

