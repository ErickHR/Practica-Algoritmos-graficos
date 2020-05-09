#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<vector>
using namespace std;
class Persona{
	private :
		string nombre;
		string dni;
    string apellido;
    string fecha;
    string direccion;
    string ciudad;
	public :
		Persona(string nombre,string dni,string apellido,string fecha,string direccion,string ciudad){
			this->nombre=nombre;
			this->dni=dni;
      this->apellido=apellido;
      this->fecha=fecha;
      this->direccion=direccion;
      this->ciudad=ciudad;
		}
		string getNombre(){
			return nombre;
		}
		string getDNI(){
			return dni;
		}
    string getApellido(){
      return apellido;
    }
    string getFecha(){
      return fecha;
    }
    string getDireccion(){
      return direccion;
    }
    string getCiudad(){
      return ciudad;
    }
		void setNombre(string nombre){
			this->nombre=nombre;
		}
    void setDNI(string dni){
			this->dni=dni;
		}
    void setApellido(string apellido){
			this->apellido=apellido;
		}
    void setFecha(string fecha){
			this->fecha=fecha;
		}
    void setDireccion(string direccion){
			this->direccion=direccion;
		}
    void setCuidad(string ciudad){
			this->ciudad=ciudad;
		}
};

class Paciente : Persona{
  private :
    int numeroHistoriaClinica;
    string sexo;
    string grupoSanguineo;
    vector<string> listaMedicamentos;
  public :
		Paciente(string nombre,string dni,
             string apellido,string fecha,string direccion,
             string ciudad,string sexo,string grupoSanguineo,int numeroHistoriaClinica):Persona(nombre,dni,apellido,fecha,direccion,ciudad){
			
		}
};

class Empleado : Persona {

};
class Medico : Persona{

};

int main(){

}
