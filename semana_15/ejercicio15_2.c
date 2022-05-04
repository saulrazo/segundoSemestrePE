#include <stdio.h>
#include <string.h>

#define MAX 30

void reverseString(char s1[]);

int main(void){
    char s1[MAX];
    printf("Ingrese una cadena de texto a invertir: ");
    fgets(s1,MAX,stdin); // (CADENA,N. CARACTERES, SITIO DE GUARDADO)
    reverseString(s1);
    printf("%s",s1);
    

    return 0;
}


void reverseString(char s1[])
{   
    int cont,length = strlen(s1), halfLength=length/2;
    char aux;
    
     /*Determina las repeticiones del ciclo de acuerdo a 
     cuántos cambios de posición se realizan, los cuales se
    relacionan con la mitad de la longitude de la cadena*/

    for (cont = 0; cont < halfLength; cont++)
    {
        aux = s1[cont]; //Guarda el valor a intercambiar en una variable auxiliar
        s1[cont] = s1[length - cont - 1]; //Realiza el cambio en cuyo caso de la primera con la última, segunda con penúltima...
        s1[length - cont - 1] = aux; //Asigna en cuyo caso al último espacio el valor del auxiliar que correspondía al otro extremo de la palabra.
    }
}


