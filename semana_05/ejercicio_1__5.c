/*
Ejercicio 1.

Solicitar al usuario su velocidad actual (km/h) y la distancia (km)  (Utilizar  números enteros para estos datos)

Imprimir el tiempo que tardará en llegar en minutos y segundos.
Así debe funcionar el programa:
  Velocidad actual (km/h): 130

  Distancia a recorrer (km): 100

  Llegarás a tu destino en 46 minutos y 9 segundos
  
*/


#include<stdio.h>

int main(void){

    int velocidadActual, distancia, minutos, segundos;
    float tiempo;

    printf("Ingrese su velocidad actual en km/h: ");
    scanf("%d",&velocidadActual);
    printf("Ingrese la distancia a recorrer en km: ");
    scanf("%d",&distancia);

    tiempo   = ((float)distancia / (float)velocidadActual)*60;
    minutos  = tiempo;
    segundos = ((float)tiempo - minutos)*60;


    printf("Llegarás a tu destino en %d minutos y %d segundos.", minutos, segundos);

    
    return 0;
}