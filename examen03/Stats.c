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


void binario(int numt){
    if(numt>1){
        binario(numt/2);
    }
    printf("%d",numt%2);

}