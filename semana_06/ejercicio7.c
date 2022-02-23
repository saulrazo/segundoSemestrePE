#include<stdio.h>

int main(void){

    float cal1, cal2, cal3;

    printf("Calificación 01: ");
    scanf("%f", &cal1);
    printf("Calificación 02: ");
    scanf("%f", &cal2);
    printf("Calificación 03: ");
    scanf("%f", &cal3);

    if (cal1>cal2){
        if (cal1>cal3){
            printf("La calificación más alta fue: %.2f", cal1);
        }
        else{
            printf("La calificacióin más alta fue: %.2f", cal3);
        }
    }

    else{
        if (cal2>cal3){
            printf("La calificacióin más alta fue: %.2f", cal2);
        }
        else{
            printf("La calificacióin más alta fue: %.2f", cal3);
        }
    }








    return 0;
}