#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void fillMatrix(int[][MAX], int);
void showMatrix(int[][MAX], int);
int findLargest(int[][MAX], int);
int findLowest(int[][MAX], int);


int main(){
    int matrix[MAX][MAX];

    fillMatrix(matrix, MAX);
    showMatrix(matrix, MAX);
    printf("%d\n%d",findLargest(matrix, MAX),findLowest(matrix, MAX));
    
    return 0;
}




void fillMatrix(int m[][MAX], int f)
{
int filas,columnas;
srand(time(NULL));



for(filas=0;filas<f; filas++)
for(columnas=0;columnas<MAX;columnas++)
{
m[filas][columnas]=rand()%1000;
}

}



void showMatrix(int m[][MAX], int f)
{
int filas,columnas;

for(filas=0;filas<f; filas++)
{
for(columnas=0;columnas<MAX;columnas++)
{
printf("%d ", m[filas][columnas]);
}
printf("\n");
}
}


int findLargest(int m[][MAX], int f)
{
int filas,columnas, elMayor;
elMayor=m[0][0];

for(filas=0;filas<f; filas++)
{
for(columnas=0;columnas<MAX;columnas++)
{
if (m[filas][columnas] > elMayor)
elMayor=m[filas][columnas];
}
}
return elMayor;
}


int findLowest(int m[][MAX], int f)
{
int filas,columnas, elMenor;
elMenor=m[0][0];

for(filas=0;filas<f; filas++)
{
for(columnas=0;columnas<MAX;columnas++)
{
if (m[filas][columnas] < elMenor)
elMenor=m[filas][columnas];
}
}
return elMenor;
}