/*
b) Codifique un programa que pida un número entero al usuario.    
Revise los 3 bits menos significativos (los de la derecha) y si los 3 son unos, 
imprima en pantalla "La cadena de bits termina con 3 UNOs".
En caso contrario imprima "La cadena de bits NO termina con 3 UNOs".
*/


#include <stdio.h>


int main(void){

    int numero, mascara, tresBits;

    printf("Ingrese un número entero: ");
    scanf("%d",&numero);

    mascara  = 0b111;
    tresBits = (int)(numero & mascara);

    if (tresBits==7){
        printf("La cadena de bits termina con 3 UNOs");
    }

    else{
        printf("La cadena de bits NO termina con 3 UNOs");
    }


    return 0;
}