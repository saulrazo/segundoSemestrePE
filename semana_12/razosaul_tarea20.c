/*
TAREA 20
Implementara una función recursiva que devuelva el factorial de un número entero positivo.
Si no es positivo, el factorial es 1.

Así se debería usar:

int f = factorial(6);   // f = 720

int f = factorial(0);   // f = 1
*/


#include <stdio.h>

int factorial(int);

int main(void){
    int num, fact=1;

    printf("Ingrese un número para devolver su factorial: ");
    scanf("%d",&num);
    printf("%d",factorial(num));

    return 0;
}

int factorial(num){

    if (num<=1){
        return 1;
    }

    else{
        return num*factorial(num-1);
    }

}