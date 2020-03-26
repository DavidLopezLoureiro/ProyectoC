/*
 * Aula.h
 *
 *  Created on: 25 mar. 2020
 *      Author: david
 */

#ifndef AULA_H_
#define AULA_H_

#include "Asignatura.h"
#include "Profesor.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct{

	char codigo;
	Asignatura ocupadapor[5][6];

}Aula;

#endif /* AULA_H_ */
