#include <stdio.h>

/*FUNCIONES*/
int menu (void);
void mostrarNumeros(int, int);
void mostrarAnd(int, int);
void mostrarOr(int, int);
void mostrarNot(int);
void imprimeBinario(int);
float division(int,int);
int divisionEntera(int,int);
int modulo(int, int);


int main(void){
    int opcion, num1=0, num2=0;
    printf("\nBIENVENIDO AL PROGRAMA...");

    do{
        opcion = menu();
        switch (opcion)
        {

        case 1:
            printf("Ingrese el primer número entero: ");
            scanf("%d",&num1);
            printf("Ingrese el segundo número entero: ");
            scanf("%d",&num2);
            break;

        case 2:
            mostrarNumeros(num1,num2);
            break;

        case 3:
            
            break;

        case 4:
            
            break;

        case 5:
            
            break;

        case 6:
            
            break;

        case 7:
            
            break;

        case 8:
            
            break;


        case 9:
            printf("Proceso completado...");
            break;
        
        default:
            break;
        }


    } while (opcion!=9);



    return 0;
}






/* FUNCIÓN MENU */
int menu(void){
    int num;
    printf("\n1)Capturar numeros");
    printf("\n2)Mostrar numeros (Decimal, Binario y Hexadecimal)");
    printf("\n3)Mostrar resultado de AND");
    printf("\n4)Mostrar resultado de OR");
    printf("\n5)Mostrar resultado de NOT del primer numero");
    printf("\n6)Mostrar resultado de división");
    printf("\n7)Mostrar resultado de división entera");
    printf("\n8)Mostrar resultado del módulo");
    printf("\n9)Salir");

    printf("\n\nIngrese una opción (1-9): ");
    scanf("%d", &num);
    return num;
}

/* FUNCIÓN PARA MOSTRAR NÚMEROS */
void mostrarNumeros(num1,num2){
    if(num1>0 && num2>0){
        printf("Los números guardados son: %d y %d\n\n",num1,num2);
    }
    else{
        printf("Aún no registra números enteros o su entrada es menor a 1...\n\n");
    }
    
}

