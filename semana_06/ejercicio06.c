#include <stdio.h>

int main(void){
    
    float calFinal;
    
    printf("¿Cuál es tu calificación final? (0-10)? ");
    scanf("%f", &calFinal);

    if ((calFinal > 10.0) && (calFinal<0.0)) {
            printf("Calificación inválida");

    }

    else {

        if (calFinal<6.0){
            printf("Reprobaste el curso");
        }

        else{
            printf("Aprobaste el curso");
        }
    }


    return 0;
}