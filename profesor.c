#include "profesor.h"
#include <stdio.h>

struct profesor crearProfesor(){
  struct profesor p;
  printf("Nombre del profesor\n");
  scanf("%s", p.nombre);
  printf("Nombre de la carrera\n");
  scanf("%s", p.carrera);
  printf("Número de materias\n");
  scanf("%d", &p.numMaterias);
  agregarMateriaProfesor(p);
  return p;
}

void agregarMateriaProfesor(struct profesor p){
  p.materias = malloc(p.numMaterias * sizeof(p.materias));
  for (int i = 0; i < p.numMaterias; i++ ){
    struct materia m;
    printf("Nombre de la materia\n");
    scanf("%s", m.nombre);
    printf("Paralelo de la materia\n");
    scanf("%s", m.paralelo);
    p.materias[i] = m;  
  }
}
void printProfesor(struct profesor p){
    printf("Profesor\n");
    printf("Nombre del profesor: %s\n", p.nombre);
    printf("Carrera del profesor: %s\n", p.carrera);
    printf("Número de materias: %d\n", p.numMaterias);
    printMateria(p.materias, p.numMaterias);
}
