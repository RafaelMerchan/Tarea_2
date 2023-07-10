#include "materia.h"
#include <stdio.h>


void printMateria(struct materia* materias, int num){
  for (int i = 0; i < num; i++){
    struct materia m = materias[i];
    printf("Materia: %s \n", m.nombre);
    //if (m.paralelo != NULL){
      printf("Paralelo: %s \n", m.paralelo);
   /* }
    if (m.creditos != NULL){*/
      printf("Creditos: %d \n", m.creditos);
    }  
  }
  
//}  