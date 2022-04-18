#include <stdio.h>
#include "Stats.h"
#include "Stats.c"

#define menu menu()
#define leer scanf



int main(void){
    int opcion, numt;


    printf("\nBIENVENIDO AL PROGRAMA EXAMEN EXTRA AULICO II...");

    do{
        opcion = menu;
        switch (opcion)
        {

        case 1: //TRIPLETAS

           printf("\nIngrese un valor para operar: ");
           leer("%d",&numt);

           break;

        case 2: // BINARIO
            
            break;

        case 3: // MCD
            
            break;


        case 4:
            printf("Proceso completado...");
            break;
        
        default:
            printf("Opción no válida, intente de nuevo...\n");
            break;
        }


    } while (opcion!=4);


    return 0;
}
