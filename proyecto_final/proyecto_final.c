#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "Stats.h" 
#include "Stats.c"


int main(){
	int opt;
	char txt[255];
	char pal[255];
	char txtO[255];
	printf("BIENVENIDO AL PROYECTO INTEGRADO\n\n");
do{
		switch(menu()){
        case 1: 
    	   system("cls");
           printf("\nIntroducir texto (hasta 255 caracteres)\n");
           getchar();
           gets(txt);
           system("cls");
           strcpy(txtO,txt);
		   printf("Texto almacenado con exito!!\n\n");
           break;
        case 2:
        	system("cls");
            printf("\nDesplegar estadísticas\n");
            es(txt);
            break;
        case 3:
        	system("cls");
            printf("\nDesplegar los pronombres encontrados\n");
            P(txt);
            break;
        case 4: //
        	system("cls");
			printf("\nDesplegar todas las palabras que comienzan con mayúsculas\n"); 
            mayusStart(txt);
            break;
        case 5: //
        	system("cls");
        	printf("\nDesplegar los verbos en gerundio.\n");
            gerundWords(txt);
            break;
        case 6:
        	system("cls");
        	printf("\nBuscar una palabra en el texto.\n");
        	printf("Ingresa la palabra a buscar: ");
        	getchar();
			gets(pal);
			bus(txt,pal);
            break;
        case 7: 
        	system("cls");
        	printf("\nIntercambiar mayúsculas y minúsculas\n");
        	minMay(txtO);
            break;

        default:
        	system("cls");
            printf("Opción no válida\n");
            break;
	}
	}while(opt!=8);
	return 0;
}