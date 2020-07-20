#include <iostream>
#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

class Persona
{
	private :
	    	string nombre;
            	string apellido;
	    	string dni;
	    	string fecha;
	    	string direccion;
	    	string ciudad;
		
	public:
		Persona(string nombre,string dni,string apellido,string fecha,string direccion,string ciudad);
		
		string getNombre();
		string getApellido();
		string getDni();
		string getFecha();
		string getDireccion();
		string getCiudad();
		
		void setNombre();
		void setApellido();
		void setDni();
		void setFecha();
		void setDireccion();
		void setCiudad();
		
	protected:
};

#endif
