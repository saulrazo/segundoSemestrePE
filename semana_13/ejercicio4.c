#include <stdio.h>

float average(float, float);

int main(void) {

int cuantos, cont, acum=0;

printf("Cuantos numeros quieres capturar (maximo 10): ");
scanf("%d",&cuantos);

int miArreglo[cuantos];


for (cont=0; cont<cuantos; cont++)
{
printf("Teclea el valor del elmento %d: ", cont);
scanf("%d", &miArreglo[cont]);
}


for(cont=0;cont<cuantos; cont++)
{
  acum+=miArreglo[cont];
}


printf("El promedio es %.2f",average(acum,cuantos));


return 0;
}


float average(float acum, float cuantos){
    float average = acum/cuantos;
    return average;

}