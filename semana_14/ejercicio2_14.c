#include <stdio.h>
void ordenaArreglo(int[], int );
void printArray(int[], int );
int estaOrdenado(int[], int );

int main(void){

    int num = 10;
    int arr[] = {1,4,5,9,6,2,5,2,4,10};
    printArray(arr,num);
    printf("\n");
    printf("%d",estaOrdenado(arr,num));
    ordenaArreglo(arr, num);
    printf("\n");
    printArray(arr,num);
    printf("\n");
    printf("%d",estaOrdenado(arr,num));
    

    return 0;

}


void printArray(int arreglo[], int cuantos)
{
int cont;
for(cont=0;cont<cuantos; cont++)
{
printf("%d",arreglo[cont]);
}
}



void ordenaArreglo(int arr[], int num)
{
int i, menor, indice, temp, vuelta;



for(vuelta=0;vuelta<num-1;vuelta++)
{
menor=arr[vuelta];
indice=vuelta;
for (i=vuelta; i<num; i++)
{
if (arr[i]<menor)
{
menor=arr[i];
indice=i;
}
}
//HACER EL INTERCAMBIO
temp=arr[vuelta];
arr[vuelta]=menor;
arr[indice]=temp;
}}


int estaOrdenado(int arr[], int num)
{
int i, ordenado=1;



for(i=0;i<num-1; i++)
{
if(arr[i] > arr[i+1])
{
ordenado=0;
break;
}
}



return ordenado;

}