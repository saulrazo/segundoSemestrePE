/*
~~~~~ TAREA 17 ~~~~~~~

Calcular el monto que se obtendrá al finalizar cada año
por una inversión a N años, con tasas de interés anual del: 3, 3.5, 4, 4.5 y 5%.

Ejemplo:

Monto a invertir: 1000

Años de la inversión: 3

Tasa: 3%

   Año 1, monto = $1030.00

   Año 2, monto = $1060.90

   Año 3, monto = $1092.73

Tasa: 3.5%

   Año 1, monto = $1035.00

   …

Tasa: 5%

   Año 1, monto = $1050.00

   Año 2, monto = $1102.50

   Año 3, monto = $1157.63

 

Para cualquier tasa: M x (1+  Tasa⁄100)
*/

#include <stdio.h>

void intRate(float,int);

int main(void){
    float quant;
    int lap;

    printf("Monto a invertir: ");
    scanf("%f",&quant);
    printf("Años de la inversión: ");
    scanf("%d",&lap);
    intRate(quant,lap);
    
    return 0;
}

void intRate(float quant, int lap){
    int count,year;
    float rate=3,totalQuant;

    for (count=0;count<5;count++){
      printf("\nTasa: %.1f", rate);

        for(year=1;year<lap+1;year++){
            totalQuant = quant*(1+((rate/100)*year));
            printf("\nAño %d, monto = %.3f ",year,totalQuant);

     
        }
      rate+=0.5;
      printf("\n");
    }

}