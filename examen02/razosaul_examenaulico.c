#include <stdio.h>

/*FUNCIONES*/
int menu(void);
void mostrarNumeros(int, int);
void mostrarNum(int); //PARA MOSTRAR UN SOLO NÚMERO RESULTANTE DE LAS SIGUIENTES FUNCIONES

// FUNCIONES OPERATIVAS
void mostrarAnd(int, int);
void mostrarOr(int, int);
void mostrarNot(int);
void imprimeBinario(int);
float division(int,int);
int divisionEntera(int,int);
int modulo(int, int);

/* FUNCIÓN BINARIO*/
void binario(int);


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
            mostrarAnd(num1,num2);
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
    printf("\n****************************************************");
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

/* CONVERTIR A BINARIO INT DE 8 BITS*/
void binario(num){
    int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
    bit1 = num>>7 & 1;
    bit2 = num>>6 & 1;
    bit3 = num>>5 & 1;
    bit4 = num>>4 & 1;
    bit5 = num>>3 & 1;
    bit6 = num>>2 & 1;
    bit7 = num>>1 & 1;
    bit8 = num & 1;

    printf("(%d%d%d%d%d%d%d%d)",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
}


/* FUNCIÓN PARA MOSTRAR NÚMEROS */
void mostrarNumeros(num1,num2){
    if(num1>0 && num2>0){
        printf("Los números guardados son:\n\nDECIMAL: (%d), (%d)\n",num1,num2);
        printf("HEXADECIMAL: (%X), (%X)\n",num1,num2);
        printf("BINARIO: ");
        binario(num1);
        printf(", ");
        binario(num2);
        printf("\n");   
    }
    else{
        printf("Aún no registra números enteros o su entrada es menor a 1...\n\n");
    }
    
}

void mostrarNum(num){

        printf("\nDECIMAL: (%d)\n",num);
        printf("HEXADECIMAL: (%X)\n",num);
        printf("BINARIO: ");
        binario(num);
        printf("\n");   
}


void mostrarAnd(num1, num2){
    int resultado;
    if(num1>0 && num2>0){
        resultado = num1 & num2;
        mostrarNum(resultado);
        
    }  
    else{
        printf("Aún no registra números enteros o su entrada es menor a 1...\n\n");
    }

}



