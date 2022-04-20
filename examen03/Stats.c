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
    
}

void binario(int numt){
    if(numt>1){
        binario(numt/2);
    }
    printf("%d",numt%2);

}

int mcd(int num1, int num2){
    if (num2==0){
        return num1;
    }

    else{
        return mcd(num2,(num1%num2));
    }
}