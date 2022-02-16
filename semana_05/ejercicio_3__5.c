/*
Ejercicio 3
Asi debe funcionar el programa:
  - ¿Cuantos dulces traes? 200
  - ¿Cuantos niños vinieron? 15
  - A cada niño le tocan 13 dulces
  - Te van a sobrar 5 dulces
*/


#include<stdio.h>


int main(void){

    int cantDulces, cantNinos, dulcesRepartir,dulcesSobrantes;


    printf("¿Cuántos dulces traes? ");
    scanf("%d",&cantDulces);
    printf("¿Cuántos niños vinieron? ");
    scanf("%d",&cantNinos);

    dulcesRepartir = cantDulces/cantNinos;
    dulcesSobrantes = cantDulces%cantNinos;

    printf("A cada niño le tocan %d dulces\nTe van a sobrar %d dulces",dulcesRepartir,dulcesSobrantes);


    return 0;
}