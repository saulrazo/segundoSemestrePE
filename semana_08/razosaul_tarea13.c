/*
TAREA 13

Solicitar al usuario número de mes: 1 – 12     Si es febrero, solicitar también el año.

Calcular e imprimir el número de días del mes.

Escriba mes: 7

El mes tiene 31 días.

 

Escriba mes: 2

Escriba año: 2016

El mes tiene 29 días.

 

Escriba mes: 15

Mes no válido
*/

#include <stdio.h>

int main(void){
    int mes,anio;
    

    printf("Ingrese un número (1-12) para conocer los días del mes solicitado: ");
    scanf("%d",&mes);
    switch (mes)
    {
    case 1:
        printf("El mes tiene 31 días.");
        break;

    case 2:
        printf("Vaya...Febrero es un caso especial.\nIngrese un año específico: ");
        scanf("%d",&anio);
        if (anio%4==0 && anio%100!=0 || anio%400==0 ){
            printf("El mes tiene 29 días.");
        }

        else{
            printf("El mes tiene 28 días.");
        }
           

        break;
    
    case 3:
        printf("El mes tiene 31 días.");
        break;

    case 4:
        printf("El mes tiene 30 días.");
        break;

    case 5:
        printf("El mes tiene 31 días.");
        break;

    case 6:
        printf("El mes tiene 30 días.");
        break;

    case 7:
        printf("El mes tiene 31 días.");
        break;

    case 8:
        printf("El mes tiene 31 días.");
        break;

    case 9:
        printf("El mes tiene 30 días.");
        break;

    case 10:
        printf("El mes tiene 31 días.");
        break;

    case 11:
        printf("El mes tiene 30 días.");
        break;

    case 12:
        printf("El mes tiene 31 días.");
        break;

    default:
        printf("Mes no válido.");
        break;
    }


    return 0;
}