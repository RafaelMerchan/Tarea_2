#include "materia.h"
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

struct estudiante{
  char nombre[50];
  char nivel[50];
  char carrera[50];
  int numMaterias;
  struct materia* materias;
  
  
};

struct estudiante crearEstudiante();

void agregarMateriaEstudiante(struct estudiante e);

void printEstudiante(struct estudiante e);

#endif