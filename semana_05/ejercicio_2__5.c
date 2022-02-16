/*
Ejercicio 2

Así debe funcionar el programa:
  ¿Cuánto dinero traes? 1000

  ¿Cuánto cuesta el producto? 129.75

  Unidades que vas a comprar: 7

  Lo que vas a gastar:   $  908.25

  Lo que te va a sobrar: $   91.75

*/

#include<stdio.h>

int main(void){

    float dinero, costoProducto, totalGasto, dineroRestante;
    int unitComprar;

    printf("¿Cuánto dinero traes? ");
    scanf("%f",&dinero);
    printf("¿Cuánto cuesta el producto? ");
    scanf("%f",&costoProducto);
     printf("Unidades que vas a comprar: ");
    scanf("%d",&unitComprar);

    totalGasto = costoProducto*unitComprar;
    dineroRestante = dinero-totalGasto;

    printf("Lo que vas a gastar: $%.2f\nLo que te va a sobrar: $%.2f ",totalGasto,dineroRestante);

    
    return 0;
}