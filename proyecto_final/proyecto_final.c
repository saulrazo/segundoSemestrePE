#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Stats.h" 
#include "Stats.c"


int main(){
	int opt;
	char txt[255];
	printf("Proyecto integrador\n\n");
do{
		switch(menu()){
			
        case 1: 
    	   system("cls");
           printf("\nIntroducir texto (hasta 255 caracteres)\n");
           getchar();
           gets(txt);
           system("cls");
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
            pro(txt);
            break;
        case 4:
        	system("cls");
			printf("\nDesplegar todas las palabras que comienzan con mayúsculas\n"); 
            break;
        case 5:
        	printf("\nDesplegar los verbos en gerundio.\n");
            break;
        case 6:
        	printf("\nBuscar una palabra en el texto.\n");
            break;
        case 7:
        	printf("\nIntercambiar mayúsculas y minúsculas\n");
            break;
        case 8:
            break;
        default:
            printf("Opción no válida\n");
            break;
	}
	}while(opt!=8);
	
	
	
	return 0;
}