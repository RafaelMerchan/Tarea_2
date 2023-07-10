#include "materia.h"
#ifndef PROFESOR_H
#define PROFESOR_H  

struct profesor{
  char nombre[50];
  char carrera[50];
  int numMaterias;
  struct materia* materias;
  
};

struct profesor crearProfesor();

void agregarMateriaProfesor(struct profesor p);  

void printProfesor(struct profesor p);

#endif