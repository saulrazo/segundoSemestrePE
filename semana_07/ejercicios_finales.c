#include <stdio.h>
void Enter();
void imprimeCantidad(float);
char convierteCalif(int, int, int);
int max3(int, int, int);

int main(void){


    printf("Programa con funciones");
    Enter();
    Enter();
    Enter();
    imprimeCantidad(2.5432);
    imprimeCantidad(132.2);
    imprimeCantidad(1500);
    Enter();
    Enter();

    convierteCalif(10, 10, 10);
    printf("Tu calificacion es: %c", convierteCalif(0, 10, 10));
    return 0;
}

void Enter()
{
    printf("\n");
}

void imprimeCantidad(float cant)
{
    printf("Tu cantidad es: $%8.2f", cant);
    Enter();
}

char convierteCalif(int c1, int c2, int c3)
{
    float promedio = (c1 + c2 + c3) / 3.0;

    if (promedio >= 9.0)
        return 'A';
    else if (promedio >= 7.0)
        return 'B';
    else if (promedio >= 5.0)
        return 'C';
    else
        return 'F';
}

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