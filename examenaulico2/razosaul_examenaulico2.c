#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 8

void fillMatrix(int[][MAX], int);
void showMatrix(int[][MAX], int);
void orderMatrix(int[][MAX], int);
void promRows(int[][MAX], int);
float promMatrix(int[][MAX], int);
int menu(void);



int main(){
    int matrix[MAX][MAX], opcion;

    printf("\nBIENVENIDO AL PROGRAMA EXAMEN ÁULICO II...");
    fillMatrix(matrix, MAX);

    do{ 
        opcion = menu();
        switch (opcion)
        {
            
       
        case 1: //IMPRIMIR CON NÚMEROS ALEATORIOS
           printf("La matriz con números aleatorios es:\n");
           showMatrix(matrix, MAX);
           break;

        case 2: // PROMEDIO TOTAL
            printf("\nEl promedio total de la matriz es: %.2f",promMatrix(matrix, MAX));
            break;

        case 3: // IMPRIMIR MATRIZ ORDENADA
            orderMatrix(matrix, MAX);
            printf("\nLa matriz con las filas ordenadas es:\n");
            showMatrix(matrix, MAX);
            break;

        case 4: // IMPRIMIR PROMEDIO DE FILAS
            promRows(matrix, MAX);
            break;


        case 5: //Término del DO WHILE si el usuario termina el programa
            printf("Proceso completado...");
            break;
        
        default: //Ingreso de datos no válidos
            printf("Opción no válida, intente de nuevo...\n");
            break;
        }


    } while (opcion!=5);


    return 0;
}

int menu(void){
    int num;

    printf("\n\n****************************************************");
    printf("\n1)IMPRIMIR MATRIZ CON NÚMEROS ALEATORIOS");
    printf("\n2)PROMEDIO TOTAL DE LA MATRIZ");
    printf("\n3)IMPRIMIR MATRIZ CON FILAS ORDENADAS");
    printf("\n4)IMPRIMIR PROMEDIO DE FILAS");
    printf("\n5)Salir");

    printf("\n\nTeclee la opción deseada (1-4): ");
    scanf("%d", &num);
    return num;
}




void fillMatrix(int m[][MAX], int f)
{
int filas,columnas;
srand(time(NULL));



for(filas=0;filas<f; filas++)
for(columnas=0;columnas<MAX;columnas++)
{
m[filas][columnas]=rand()%1000;
}

}



void showMatrix(int m[][MAX], int f)
{
int filas,columnas;

for(filas=0;filas<f; filas++)
{
for(columnas=0;columnas<MAX;columnas++)
{
printf("%d ", m[filas][columnas]);
}
printf("\n");
}
}



void promRows(int m[][MAX], int f)
{
int filas,columnas;
float promedio=0;

for(filas=0;filas<f; filas++)
{
for(columnas=0;columnas<MAX;columnas++)
{
promedio+= m[filas][columnas];
}
promedio = promedio/((float)(MAX));
printf("\nEl promedio de la fila %d es: %.2f",filas,promedio);
promedio = 0;
}
}





float promMatrix(int m[][MAX], int f){

int filas,columnas;
float promedio=0;

for(filas=0;filas<f; filas++)
for(columnas=0;columnas<MAX;columnas++)
{ 
 promedio+= m[filas][columnas];
 
}
promedio = (float)(promedio/(MAX*MAX));
return promedio;
 
}





void orderMatrix(int m[][MAX], int f){
  int filas,columnas, pasada, temp, menor, indice, suma=0;

  for(filas=0;filas<f; filas++)    
    for(columnas=0;columnas<MAX-1;columnas++)
      {
      menor=m[filas][columnas];
      indice=columnas;
      for(pasada=columnas;pasada<MAX;pasada++)
      {
         if(m[filas][pasada]<menor)
         {
           menor=m[filas][pasada];
           indice=pasada;           
         }
      }
      temp=m[filas][columnas];
      m[filas][columnas]=menor;
      m[filas][indice]=temp;
     }
}
