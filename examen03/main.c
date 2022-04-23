#include <stdio.h>
#include "Stats.h" 
#include "Stats.c" //Archivos de cabecera

#define menu menu() //Función que presenta las opciones disponibles
#define leer scanf



int main(void){
    int opcion, numt, num1, num2;


    printf("\nBIENVENIDO AL PROGRAMA EXAMEN EXTRA AULICO II...");

    do{
        opcion = menu;
        switch (opcion)
        {

        case 1: //TRIPLETAS
           printf("\nTRIPLETAS");
           printf("\nIngrese un valor para operar: ");
           leer("%d",&numt); //Se representa la MACRO de scanf por "leer"
           tripletas(numt);
           break;

        case 2: // BINARIO
            printf("\nBINARIO");
            printf("\nIngrese un valor para indicar su binario: ");
            leer("%d",&numt);
            printf("\nBINARIO DE (%d): ",numt);
            binario(numt);
            break;

        case 3: // MCD
            printf("\nMÁXIMO CÓMUN DIVISOR MCD");
            printf("\nIngrese el primer valor: ");
            leer("%d",&num1);
            printf("\nIngrese el segundo valor: ");
            leer("%d",&num2);
            printf("\nMÁXIMO COMÚN DIVISOR DE (%d) Y (%d): ",num1,num2);
            printf("%d",mcd(num1, num2));
            break;


        case 4: //Término del DO WHILE si el usuario termina el programa
            printf("Proceso completado...");
            break;
        
        default: //Ingreso de datos no válidos
            printf("Opción no válida, intente de nuevo...\n");
            break;
        }


    } while (opcion!=4);


    return 0;
}
