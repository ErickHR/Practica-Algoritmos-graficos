#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona
{
	private:
		string codigoDeEmpleado;
		unsigned int numeroHorasExtras;
		string fechaIngreso;
		string area;
		string cargo;
	public:
		Empleado(
			string codigoDeEmpleado,
			unsigned int numeroHorasExtras,
			string fechaIngreso,
			string area,
			string cargo
		);
};

#endif
