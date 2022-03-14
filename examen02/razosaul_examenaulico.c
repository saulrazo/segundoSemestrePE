#include <stdio.h>

/*FUNCIONES*/
int menu(void);
void mostrarNumeros(int, int);
void mostrarNum(int); //PARA MOSTRAR UN SOLO NÚMERO RESULTANTE DE LAS SIGUIENTES FUNCIONES

// FUNCIONES OPERATIVAS
void mostrarAnd(int, int);
void mostrarOr(int, int);
void mostrarNot(int);
void division(int,int);
void divisionEntera(int,int);
void modulo(int, int);

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
           do
           {
            printf("Ingrese el primer número entero: ");
            scanf("%d",&num1);
           } while ((num1==0)||(num1>255));

           do
           {
            printf("Ingrese el segundo número entero: ");
            scanf("%d",&num2);
           } while ((num2==0)||(num2>255));

           break;

        case 2:
            mostrarNumeros(num1,num2);
            break;

        case 3:
            mostrarAnd(num1,num2);
            break;

        case 4:
            mostrarOr(num1,num2);
            break;

        case 5:
            mostrarNot(num1);
            break;

        case 6:
            division(num1,num2);
            break;

        case 7:
            divisionEntera(num1,num2);
            break;

        case 8:
            modulo(num1,num2);
            break;


        case 9:
            printf("Proceso completado...");
            break;
        
        default:
            printf("Entrada no válida, intente de nuevo...\n");
            break;
        }


    } while (opcion!=9);



    return 0;
}

// ********************************** FUNCIONES *****************************************



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
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        printf("Los números guardados son:\n\nDECIMAL: (%d), (%d)\n",num1,num2);
        printf("HEXADECIMAL: (%X), (%X)\n",num1,num2);
        printf("BINARIO: ");
        binario(num1);
        printf(", ");
        binario(num2);
        printf("\n");   
    }
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }
    
}

/* FUNCIÓN PARA MOSTRAR RESULTADOS DE FUNCIONES POSTERIORES */
void mostrarNum(num){

        printf("\nDECIMAL: (%d)\n",num);
        printf("HEXADECIMAL: (%X)\n",num);
        printf("BINARIO: ");
        binario(num);
        printf("\n");   
}


/* FUNCIÓN PARA MOSTRAR AND DE LOS NÚMERO ENTEROS INGRESADOS */
void mostrarAnd(num1, num2){
    int resultado;
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        resultado = num1 & num2;
        mostrarNum(resultado);
        
    }  
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }

}

/* FUNCIÓN PARA MOSTRAR OR DE LOS NÚMERO ENTEROS INGRESADOS */
void mostrarOr(num1, num2){
    int resultado;
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        resultado = num1 | num2;
        mostrarNum(resultado);
        
    }  
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }

}

/* FUNCIÓN PARA MOSTRAR NOT DEL PRIMER NÚMERO TECLEADO*/
void mostrarNot(num1){
    int resultado;
    if((num1!=0)&&(num1<=255)){
        resultado = ~num1;
        mostrarNum(resultado);
        
    }  
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }

}


/* FUNCIÓN DE OPERACIÓN DE DIVISIÓN DE NÚMEROS INGRESADOS*/
void division(num1,num2){
    float resultado;
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        resultado = ((float)num1/(float)num2);
        printf("El resultado de la división de %d y %d es: %.2f\n",num1,num2,resultado);
         
    }
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }
    
}

/* FUNCIÓN DE OPERACIÓN DE DIVISIÓN ENTERA DE NÚMEROS INGRESADOS*/
void divisionEntera(num1,num2){
    int resultado;
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        resultado = (num1/num2);
        printf("El resultado de la división entera de %d y %d es: %d\n",num1,num2,resultado);

    }
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }

}

/* FUNCIÓN DE OPERACIÓN DEL MÓDULO DE NÚMEROS INGRESADOS*/
void modulo(num1,num2){
    int resultado;
    if((num1!=0 && num2!=0)&&(num1<=255 && num2<=255)){
        resultado = (num1%num2);
        printf("El resultado del modulo de %d y %d es: %d\n",num1,num2,resultado);
    }
    else{
        printf("Aún no registra números enteros o su entrada está fuera de rango...\n\n");
    }

}


