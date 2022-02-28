/*
PROBLEMA 2

Codifique un programa en ANSI C que pida 2 números enteros entre 0 y 255.
A continuación genere un tercer número con los primeros 4 bits del primer número
y los últimos 4 bits del segundo número.     Por ejemplo, si el usuario teclea 64
(01000000) y 1 (00000001) el resultado sería 0100 (los primeros 4 bits de 64) + 0001
(los últimos 4 bits de 1), por lo que el resultado sería 65 que es 01000001.

Abajo se muestra una corrida de muestra.

Teclee el primer numero (0-255):64
Teclee el segundo numero (0-255)1
El primer numero es 64 y el segundo numero es 1
El resultado es: 65

El primer numero es: 01000000
El segundo numero es: 00000001
El resultado es:01000001
 */


#include <stdio.h>

int main(void){
    int num1, num2, final, bin, mascara;
    int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;



    printf("Teclee el primer numero (0-255): ");
    scanf("%d",&num1);
    printf("Teclee el segundo numero (0-255): ");
    scanf("%d",&num2);

    //Primer Numero

    mascara = 0b11110000;
    num1 &= mascara;

    //Conversión a binario
    bit1 = num1>>7 & 1;
    bit2 = num1>>6 & 1;
    bit3 = num1>>5 & 1;
    bit4 = num1>>4 & 1;
    bit5 = num1>>3 & 1;
    bit6 = num1>>2 & 1;
    bit7 = num1>>1 & 1;
    bit8 = num1 & 1;

    printf("El primer numero es: %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
    
    
    //Segundo Numero
    mascara = 0b00001111;
    num2&= mascara;
    
    //Conversión a binario
    bit1 = num2>>7 & 1;
    bit2 = num2>>6 & 1;
    bit3 = num2>>5 & 1;
    bit4 = num2>>4 & 1;
    bit5 = num2>>3 & 1;
    bit6 = num2>>2 & 1;
    bit7 = num2>>1 & 1;
    bit8 = num2 & 1;

    printf("\nEl segundo numero es: %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);


    //Resultado
    final = num1 | num2;


    //Conversión a binario
    bit1 = final>>7 & 1;
    bit2 = final>>6 & 1;
    bit3 = final>>5 & 1;
    bit4 = final>>4 & 1;
    bit5 = final>>3 & 1;
    bit6 = final>>2 & 1;
    bit7 = final>>1 & 1;
    bit8 = final & 1;

    printf("\nEl tercer numero es: %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);


    return 0;
}