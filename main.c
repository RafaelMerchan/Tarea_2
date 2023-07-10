#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "profesor.h"
#include "estudiante.h"


int main() {
  int numPersonas;
  int tipoPersonas;
  
  do{
    printf("Ingrese el número de personas (mayor a 2):\n");
    scanf("%d", &numPersonas);
  } while(numPersonas < 3); 
  
  do { 
    printf("Qué tipo de personas ingresara?:\n");
    printf("1) Profesor\n");
    printf("2) Estudiante\n");
    printf("3) Ambos (1 profesor y %d estudiantes):\n", numPersonas-1);
    scanf("%d", &tipoPersonas);
  } while ((tipoPersonas < 1) || (tipoPersonas > 3));


  int* listado = malloc(numPersonas * sizeof(listado));
  
  if (tipoPersonas == 1){
    free(listado);
    struct profesor* listado = malloc(numPersonas * sizeof(listado));
    for (int i = 0; i < numPersonas; i++){
      printf("Profesor %d\n", i+1);
      listado[i] = crearProfesor();
    }
    for (int i = 0; i < numPersonas; i++){
      struct profesor p = listado[i];
      printProfesor(p);
    }
    
  } else if (tipoPersonas == 2){
    free(listado);
    struct estudiante* listado = malloc(numPersonas * sizeof(listado));
    for (int i = 0; i < numPersonas; i++){
      printf("Estudiante %d\n", i+1);
      listado[i] = crearEstudiante();
    }
    for (int i = 0; i < numPersonas; i++){
      struct estudiante e = listado[i];
      printEstudiante(e);
    }
    
  } else if (tipoPersonas == 3){
    free(listado);
    struct estudiante* listado = malloc(numPersonas * sizeof(listado));
    struct profesor p = crearProfesor();
    for (int i = 1; i < numPersonas; i++){
      printf("Estudiante %d\n", i);
      listado[i] = crearEstudiante();
    }
    printProfesor(p);
    for (int i = 1; i < numPersonas; i++){
      struct estudiante e = listado[i];
      printEstudiante(e);
    }
  }
  free(listado);
  return 0;
}
