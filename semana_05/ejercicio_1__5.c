#include<stdio.h>


int main(void){

    int edadPersona1, edadPersona2, edadPersona3;
    float promedio;


    printf("Ingrese la primera edad: ");
    scanf("%d",&edadPersona1);
    printf("Ingrese la segunda edad: ");
    scanf("%d",&edadPersona2);
    printf("Ingrese la tercera edad: ");
    scanf("%d",&edadPersona3);

    promedio = (float)(edadPersona1+edadPersona2+edadPersona3)/3;


    printf("%.1f", promedio);

    
    return 0;
}