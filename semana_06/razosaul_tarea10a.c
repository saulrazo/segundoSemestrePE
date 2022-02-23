/*
a) En el código que se presenta abajo se declara una variable entera (de 32 bits) llamada cuatroLetras.

Separe en 4 bloques de 8 bits esta cadena de bits e imprima cada uno de estos como un char.
Al final los cuatro caracteres formarán una palabra que hay que imprimir en pantalla.
Utilice máscaras y operadores de corrimiento de bits para resolver este problema.

#include <stdio.h>
int main(void) {
int cuatroLetras=0b01001000011011110110110001100001;
  return 0;
}
*/

#include <stdio.h>

int main(void){

    unsigned int cuatroLetras = 0b01001000011011110110110001100001;
    unsigned int mascara,letraUno, letraDos, letraTres, letraCuatro;

    letraUno = cuatroLetras>>24;
    printf("%c", letraUno);


    mascara = 0b00000000111111110000000000000000;
    letraDos = cuatroLetras & mascara;
    letraDos >>= 16;
    printf("%c", letraDos);


    mascara = 0b00000000000000001111111100000000;
    letraTres = cuatroLetras & mascara;
    letraTres >>= 8;
    printf("%c", letraTres);

    mascara = 0b00000000000000000000000011111111;
    letraCuatro = cuatroLetras & mascara;
    printf("%c", letraCuatro);
    
    return 0;
}