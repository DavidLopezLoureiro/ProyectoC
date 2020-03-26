#include <stdio.h>
#include <stdlib.h>

#include "Aula.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Asignatura.h"

int main() {

	Profesor felipe;

	felipe.nombre = "Felipe";
	felipe.DNI = "234212";



	Asignatura mate;

	mate.Codigo = 00;
	mate.carrera = "general";
	mate.creditos = 6;
	mate.curso = 1;
	mate.nombre = "mate";
	mate.profe = felipe;



	Aula aula1;

	aula1.codigo = "01";
	aula1.ocupadapor[0][0] = mate;

	return 0;

}
