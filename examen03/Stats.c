int menu(void){
    int num;

    printf("\n\n****************************************************");
    printf("\n1)Tripletas");
    printf("\n2)Binario");
    printf("\n3)Máximo común divisor recursivo");
    printf("\n4)Salir");

    printf("\n\nTeclee la opción deseada (1-4): ");
    scanf("%d", &num);
    return num;
}

void tripletas(int numt){
    int num1,num2,num3;
    for(num1=0;num1<50;num1++){
        for(num2=0;num2<50;num2++){
            for(num3=0;num3<50;num3++){ //Ingresa en tres ciclos para determinar todas las combinaciones de las tripletas
                if (((num1+num2+num3)!= 0) && (((num1+num2+num3)%numt)==0)){ //Ratifica que si la suma de los números es 0, no se procede
                    printf("\n%d - %d - %d",num1,num2,num3);}} //Se contemplan todos los múltiplos en cada ciclo con un módulo
        }
    }    
}

void binario(int numt){
    if(numt>1){
        binario(numt/2); //Se crea recursividad y se empieza a imprimir desde el 1 final, pues aun quedan ciclos sin cerrar, haciendo que se invierta el orden
    }
    printf("%d",numt%2);

}

int mcd(int num1, int num2){
    if (num2==0){ //Algoritmo Euclidiano
        return num1;
    }

    else{
        return mcd(num2,(num1%num2)); 
    }
}