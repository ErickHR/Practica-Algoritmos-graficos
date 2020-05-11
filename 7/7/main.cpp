#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<vector>

#include "Paciente.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Paciente p1( "nombre", "dni", "fecha", "fecha", "direccion", "ciudad", "grupoSanguineo", "grupoSanguineo", 5);
	cout<<p1.getNombre();
	return 0;
}
