/*
TAREA 17

--> Defina una macro Celsius que convierta a grados Celsius un número recibido que representa los grados Fahrenheit.
--> Defina una macro Max que devuelva el mayor de dos números recibidos.
o Utilice el operador ternario.

Utilice las dos macros para calcular el mayor entre 86.7°F convertido a Celsius y el número 29.64.
Fórmula:

Celsius =  ( (f)-32) *  0.5555


*/


#include <stdio.h>
#define celsius(fahrenheit) ((fahrenheit)-32)*0.5555 //MACRO Conversión a Celsius
#define Max(celsius,temptest) if(celsius>temptest) printf("%f",celsius); \
                              else if(celsius<temptest) printf("%f",temptest); \
                              else printf("Ambos son iguales"); \


int main(void){
    float fahrenheit, celsius,temptest;

    printf("\n\nIngrese grados en medición Fahrenheit(ºF): ");
    scanf("%f",&fahrenheit);
    printf("Ingrese una temperatura adicional en medición Celsius(ºC): ");
    scanf("%f",&temptest);

    celsius = celsius(fahrenheit); //Conversión a Celsius
    printf("El mayor de ambas entradas en medición de Celsius(ºC) es: ");
    Max(celsius,temptest);

}

