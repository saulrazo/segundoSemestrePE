/*
TAREA 16

Utilizando while, break y continue, escriba un programa que pida N números al usuario y sume sólo los positivos.
Si el número capturado es negativo, no se debe contabilizar. Si el número es 0, finaliza de antemano la solicitud de datos.

¿Cuántos números se van a sumar? 3

Escriba el número 1: 5

Escriba el número 2: -3

Escriba el número 2: 6

Escriba el número 3: -2

Escriba el número 3: 7

Sumatoria: 18

*/




#include <stdio.h>

int main(void){
    float cantidadNumeros,numero, total=0.0;
    int contador=0;

    printf("¿Cuántos números se van a sumar?  ");
    scanf("%f",&cantidadNumeros);

    while (contador<cantidadNumeros)
    {
        do
        {
            printf("Ingrese el número %d: ",contador+1);
            scanf("%f",&numero);

        } while (numero<0);
        contador++;
        if(numero==0)
        {continue;} //Funciona de la misma manera con Break y Continue
        total+=numero;
        

    }
    
    printf("\n\n**********************************");
    printf("\nTotal: %.2f",total);
    
}