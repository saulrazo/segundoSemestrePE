/*
PROBLEMA 1:

Corrija el código fuente que se presenta a continuación para que el programa
resultante pida 3 calificaciones y obtenga el promedio de ellas, imprimiendo
al final el promedio en formato float con 2 números decimales.
Ojo, si el promedio es  9.33, hay que imprimir tal cual y no 9.00.
*/



#include <stdio.h>

int main(void) {
  int calif1, calif2, calif3;
  float promedio;
  
  printf("Teclee la calificacion 1: ");
  scanf("%d", &calif1);
  printf("Teclee la calificacion 2: ");
  scanf("%d", &calif2);
  printf("Teclee la calificacion 3: ");
  scanf("%d", &calif3);

  promedio = (float)(calif1 + calif2 + calif2) / 3;

  printf("Tu promedio de calificaciones es: %.2f", promedio);
  
  return 0;
}