/*
TAREA 12
--Implemente una función max3 que devuelva el mayor entre tres números enteros recibidos.
--Implemente una función avg3 que devuelva el promedio de tres números enteros recibidos.
--Implemente una función median que devuelva la mediana de tres números enteros recibidos:
el número que estaría en la mitad si estuvieran ordenados.
--Utilice los 3 métodos para calcular x como: el promedio de el mayor de tres números dados
por el usuario y la mediana de los mismos.
- Ejemplo. Si los números son: 1, 2, 3, x = promedio(3, 2) = 2.5
*/



#include <stdio.h>
int max3(int, int, int);
float avg3(int, int, int);
int median(int, int, int);


int main(void){
    int num1, num2, num3,max, mediana;
    float promedio, x;

    printf("CÁLCULO DE EL PROMEDIO DE EL MAYOR DE TRES ENTEROS Y SU MEDIANA");
    printf("\nIngrese el primer número:");
    scanf("%d",&num1);
    printf("\nIngrese el segundo número:");
    scanf("%d",&num2);
    printf("\nIngrese el tercer número:");
    scanf("%d",&num3);

    max      = max3(num1,num2,num3);
    promedio = avg3(num1,num2,num3);
    mediana  = median(num1,num2,num3);

    x = (float)(max + mediana)/2;

    printf("%.2f",x);


    

    return 0;
}


/* ----- FUNCIONES ---- */

/* Cálculo del máximo de tres números*/
int max3(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}

/* Cálculo de promedio de tres números*/
float avg3(int a, int b, int c){
    return ((float)(a+b+c)/3);

}


/* Cálculo de mediana de tres números*/
int median(int a, int b, int c){
    int d = 0;

    if (a == max3(a,b,c)){
        return (max3(d,b,c));


    }

    else{
        if (b == max3(a,b,c))
        {
            return (max3(a,d,c));
            
        }

        else{

            return (max3(a,b,d));

        }
        
    }

}