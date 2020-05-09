#include <iostream>
using namespace std;
class Persona{
	private :
		string nombre;
		int id;
	public :
		Persona(string nombre,int id){
			this->nombre=nombre;
			this->id=id;
		}
		string getNombre(){
			return nombre;
		}
		int getID(){
			return id;
		}
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		void toString(){
			cout<<id<<"\t";
			if(nombre.length()<8){
				cout<<nombre<<"\t\t";
			}else{
				cout<<nombre<<"\t";
			}
		}
};
class Alumno : public Persona{
	private :
    string code;
	public :
		Alumno(string nombre,int id,string code):Persona(nombre,id){
      this->code = code;
		}
		
		string getCode(){
			return code;
		}
		
		void setCode(string code){
			this->code = code;
		}
		void toString(){
			cout<<"\n";
			Persona::toString();
			cout<<code<<" $\n";
		}
		
		
};
int main() {
  Alumno alumno = Alumno("Erick",30,"12334");
  alumno.toString();
}