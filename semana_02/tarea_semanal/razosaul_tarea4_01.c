/*
TAREA SESIÓN 04: EJERCICIO 01
Por Saul Razo Magallanes
Programación Estructurada
Profesor Alejandro Piza Dávila
30/01/2022

                            -- INDICACIONES ---
1.Declare c, estaEsUnaVariable, q76895 y numero, como variables de tipo entero
2.Solicite al usuario que introduzca un entero; termine la solicitud con dos puntos ( : )
seguido por un espacio y deje el cursor después del espacio
3.Imprima en una el mensaje "Este es un programa en lenguaje C"
4.Imprima en dos líneas el mensaje "Este es un programa en lenguaje C" terminando la primera
línea en la palabra programa
5.Imprima el mensaje "Este es un programa en lenguaje C" dejando cada palabra en una línea diferente
6.Imprima el mensaje "Este es un programa en lenguaje C" separando cada palabra con un tabulador
*/

#include<stdio.h>

int main(void){

    // 1. Declaración de Variables
    int c, estaEsUnaVariable, q76895, numero;
    
    // 2. Solicitud de ingreso de datos
    printf("Introduzca un número entero: ");
    scanf("%d", &numero);
    // 3. Imprimir primer mensaje
    printf("\nEste es un programa en lenguaje C\n\n");
    // 4. Imprimir segundo mensaje
    printf("Este es un programa\nen lenguaje C\n\n");
    // 5. Imprimir tercer mensaje
    printf("Este\nes\nun\nprograma\nen\nlenguaje\nC\n\n");
    // 6. Imprimir cuarto mensaje
    printf("Este\n es\n  un\n   programa\n   en\n   lenguaje\n    C\n\n");
 
    return 0;
}