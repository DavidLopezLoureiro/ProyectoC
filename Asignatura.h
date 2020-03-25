/*
 * Asignatura.h
 *
 *  Created on: 25 mar. 2020
 *      Author: david
 */

#ifndef ASIGNATURA_H_
#define ASIGNATURA_H_



#include "Profesor.h"
#include <stdio.h>

typedef struct{

	char Codigo;
	char nombre;
	int creditos;
	char carrera;
	int curso;
	Profesor profesor;

}Asignatura;


#endif /* ASIGNATURA_H_ */
