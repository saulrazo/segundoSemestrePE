/*
TAREA SESION 09
Sea i una cadena binaria de 32 bits.      Supongamos que su contenido sigue el estándar IEEE 754.

Qué operaciones a nivel de bits tenemos que realizar para obtener, por separado, los bits del signo, exponente y mantisa?

Ejemplo. Si i = 0xC1F3 0000 (-30.375)

signo = 1  (unsigned char)

exponente = 1000 0011  (unsigned char)

mantisa = 111 0011 0000 0000 0000  (unsigned int)
*/

#include <stdio.h>

int main(void){
    /*
    unsigned char n1 = 0b11001111;
    unsigned char signo, mascara, exponente, mantisa;

    signo = n1 >> 7;
    printf("El signo es: %d", signo);

    mascara = 0b01100000;
    exponente = n1 & mascara;
    exponente >>= 5;
    printf("\nEl exponente es: %d", exponente);

    mascara = 0b00001111;
    mantisa = n1 & mascara;
    printf("\nLa mantisa es: %d", mantisa); */

    unsigned int n1 = 0b11000001111100110000000000000000;
    unsigned int signo, mascara, exponente, mantisa;

    signo = n1 >> 31;
    printf("El signo es : %d", signo);

    mascara   = 0b01111111100000000000000000000000;
    exponente = n1 & mascara;
    exponente >>= 23;
    printf("\nEl exponente es: %d", exponente);

    mascara = 0b00000000011111111111111111111111;
    mantisa = n1&mascara;
    printf("\nLa mantisa es: %d", mantisa);
  

    return 0;
}