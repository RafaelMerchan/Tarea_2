#include "estudiante.h"
#include <stdio.h>

struct estudiante crearEstudiante(){
  struct estudiante e;
  int materias;
  printf("Nombre del estudiante\n");
  scanf("%c", e.nombre);
  printf("Nivel del estudiante\n");
  scanf("%c", e.nivel);
  printf("Carrera del estudiante\n");
  scanf("%c", e.carrera);
  printf("Número de materias\n");
  scanf("%d", &e.numMaterias);
  agregarMateriaEstudiante(e);
  return e;
}

void agregarMateriaEstudiante(struct estudiante e){
  e.materias = malloc(e.numMaterias * sizeof(e.materias));
  for (int i = 0; i < e.numMaterias; i++ ){
    struct materia m;
    printf("Nombre de la materia\n");
    scanf("%50c", m.nombre);
    printf("Créditos de la materia\n");
    scanf("%d", &m.creditos);
    struct materia* materias;
    e.materias[i] = m;  
  }
  
}
void printEstudiante(struct estudiante e){
    printf("Estudiante\n");
    printf("Nombre: %s\n", e.nombre);
    printf("Nivel: %s\n", e.nivel);
    printf("Carrera: %s\n", e.carrera);
    printf("Número: %d\n", e.numMaterias);
    printMateria(e.materias, e.numMaterias);
}