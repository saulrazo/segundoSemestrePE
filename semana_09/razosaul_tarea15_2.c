/*
------------------- TAREA 15 --------------------------

2. Crea una función potencia() que reciba dos número enteros positivos: b, e.
Devuelve el resultado (entero) de multiplicar b por sí mismo e veces.
Si b = 6, e = 4, devuelve el resultado de: 6 x 6 x 6 x 6 = 1296
Resolver este problema con el ciclo for.
El contador controlará el número de repeticiones (multiplicaciones).
Identificar valor inicial, final e incremento del contador.
El acumulador almacenará el resultado del algoritmo.
Identificar valor inicial e incremento del acumulador.

*/


#include <stdio.h>

int potencia(int, int);

int main(void){
    int numero, exponente, resultado;

    printf("Ingrese su numero: ");
    scanf("%d",&numero);
    printf("Ingrese su exponente: ");
    scanf("%d",&exponente);

    resultado = potencia(numero, exponente);
    printf("Resultado: %d",resultado);

    return 0;
}


int potencia(num, exp){
    int cont, acumulador = num;

    for(cont=1;cont<exp;cont++){
        acumulador*=num;
    }
    return acumulador;
}