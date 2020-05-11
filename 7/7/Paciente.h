#ifndef PACIENTE_H
#define PACIENTE_H

#include<vector>

#include "Persona.h"

using namespace std;

class Paciente : public Persona
{
	private:
		int numeroHistoriaClinica;
	    string sexo;
	    string grupoSanguineo;
	    vector<string> listaMedicamentos;
	public:
		Paciente(string nombre,string dni,string apellido,string fecha,string direccion,string ciudad,string sexo,string grupoSanguineo,int numeroHistoriaClinica);
		
};

#endif
