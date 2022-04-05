#include <stdio.h>
void Ulam(int num);


int main(void){
    int num;
    printf("Ingrese un número para ejecutar serie Ulam: ");
    scanf("%d",&num);
    Ulam(num);


    return 0;
}


void Ulam(int num){

    if (num<=1){
        printf("%d ",num);
        return;
    }

    
    else if ((num%2)==0){ 
        printf("%d ",num); 
        Ulam((num/2));
        }

    else{
        printf("%d ",num); 
        Ulam((num*3+1));
        }


}