#ifndef MATERIA_H
#define MATERIA_H  

struct materia{
  char nombre[50];
  char paralelo[50];
  int creditos;
};

void printMateria(struct materia materias[], int num);  

#endif