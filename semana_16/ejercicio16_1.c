/*
ORDENAR DOS PALABRAS
- SE INTERCAMBIAN CONTENIDOS SI LA PALABRA 1 ES MAYOR A LA SEGUNDA
*/


#include <stdio.h>
#include <string.h>


void sort(char [],char []);

int main(void){
    char string1[] = "Hola";
    char string2[] = "Adios";
    char string3[] = "Mundo";

    sort(string1, string2);
    printf("Las cadenas son: %s, %s",string1,string2);
    sort(string2, string3);
    printf("\nLas cadenas son: %s, %s",string2,string3);



    return 0;
}


void sort(char s1[],char s2[]){
    char s3[20];

    if(strcmp(s1,s2)>0){
        strcpy(s3,s1);
        strcpy(s1,s2);
        strcpy(s2,s3);
    }

}



