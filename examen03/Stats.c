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
    int i,j,k;
    for(i=0;i<50;i++){
        for(j=0;j<50;j++){
            for(k=0;k<50;k++){
                if (((i+j+k)%numt)==0){
                    printf("(%d - %d - %d) ",i,j,k);}}
        }
    }    
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