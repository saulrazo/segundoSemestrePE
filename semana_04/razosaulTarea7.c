/*
TAREA SESIÓN 07
Por Saul Razo Magallanes
13/02/2022

Desarrolle en Ansi C un programa que pida al usuario teclear 3
números enteros (n1, n2 y n3) y en base a los numeros tecleados
por el usuario, desplegar el promedio de los 3, el residuo de dividir
el primero entre el tercero, el primer número incrementado en 1 (utilizando ++)
y el segundo número incrementado en 5 (utilizando +=).    El programa debe quedar
similar a la corrida mostrada abajo:

Teclee el primer numero:40
Teclee el segundo numero:30
Teclee el tercer numero:37

El promedio es:  35.67
El residuo de dividir el primer numero entre el tercero da: 3
El primer numero incrementado en 1 da: 41
El segundo numero incrementado en 5 da: 35
*/


#include<stdio.h>

int main(void){

    int primerNumero,segundoNumero,tercerNumero,residuoUnoTres;
    float sumaNum,promedioTotal;
    

    printf("Ingrese su primer número: ");
    scanf("%d",&primerNumero);
    printf("Ingrese su segundo número: ");
    scanf("%d",&segundoNumero);
    printf("Ingrese su tercer número: ");
    scanf("%d",&tercerNumero);
    

    sumaNum          = (primerNumero+segundoNumero+tercerNumero);
    promedioTotal    = sumaNum/3;
    residuoUnoTres   = primerNumero%tercerNumero;
    primerNumero    += 1;
    segundoNumero   += 5;


    printf("\nTAREA 07\n"
    "El promedio total es: %.2f\n"
    "El residuo de dividir el primer número entre el tercero es:%d\n"
    "El resultado del primer número con un incremento de 1 es:%d\n"
    "El resultado del segundo número con un incremento de 5 es:%d\n",
    promedioTotal,residuoUnoTres,primerNumero,segundoNumero);

    return 0;
}