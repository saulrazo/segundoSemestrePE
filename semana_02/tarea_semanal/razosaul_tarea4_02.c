/*
TAREA SESIÓN 04: EJERCICIO 01
Por Saul Razo Magallanes
Programación Estructurada
Profesor Alejandro Piza Dávila
30/01/2022

                            -- INDICACIONES ---
Escriba instrucciones (o comentarios) que logren lo siguiente:
1.Indique que el programa calculará el producto de tres enteros
2.Declare x, y, z y resultado como variables de tipo entero
3.Pida al usuario que introduzca tres enteros
4.Asigne los valores 4, 5 y 6 a las variables x, y y z
5.Calcule el producto de los valores contenidos en las variables x, y y z y asigne el resultado a la variable resultado.
6.Imprima en la pantalla "El producto es " seguido del valor de la variable resultado.
7.Devuelva un valor desde main que indique que el programa ha terminado correctamente.
*/

#include<stdio.h>

int main(void){

    // CÁLCULO DEL PRODUCTO DE TRES NÚMEROS ENTEROS

    // 1. Declaración de Variables
    int x, y, z, resultado;
    
    // 2. Solicitud de ingreso de datos
    // Primer número
    printf("Introduzca un primer número: ");
    scanf("%d",&x);
    //Segundo número
    printf("Introduzca un segundo número: ");
    scanf("%d",&y);
    //Tercer número
    printf("Introduzca un tercer número: ");
    scanf("%d",&z);

    //Proceso del programa
    resultado = x*y*z;

    //Salida
    printf("El producto es: %d", resultado);
    
   
 
    return 0;
}