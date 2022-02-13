#include<stdio.h>

int main(void){


  printf("El tamaño de un char es %lu\n", sizeof(char));
  printf("El tamaño de un entero corto es %lu\n", sizeof(short int));
  printf("El tamaño de un entero es %lu\n", sizeof(int));
  printf("El tamaño de un entero largo es %lu\n", sizeof(long int));
  printf("El tamaño de un entero muy largo es %lu\n", sizeof(long long));
  printf("El tamaño de un float es %lu\n", sizeof(float));
  printf("El tamaño de un dobule es %lu\n", sizeof(double));
  printf("El tamaño de un long dobule es %lu\n", sizeof(long double));



  return 0;
}