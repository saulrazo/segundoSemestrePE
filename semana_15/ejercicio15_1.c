#include <stdio.h>
#include <string.h>

void toUpperCase(char s2[],char s1[]);
void reverseString(char s1[]);

int main(void){
    char s1[20] = "mesa azul";
    char s2[20];
    char s3[20];
    int lenght;

    toUpperCase(s2,s1);
    printf("\n%s",s2);
    lenght = strlen(s2);
    printf("\n%d",lenght);
    reverseString(s1);
    printf("\n%s",s1);
    

    return 0;
}




void toUpperCase(char s2[],char s1[])
{
char actual=0; 
while (s1[actual]!=0)
{
if( s1[actual]>=97 && s1[actual]<=122)
s2[actual]=s1[actual]-32;
else
s2[actual]=s1[actual];
actual++;
}
}


void reverseString(char s1[])
{   
    
    int lenght = strlen(s1);
    int i;
    for (i = 0; i < strlen(s1) / 2; i++)
    {
        char temporal = s1[i];
        s1[i] = s1[lenght - i - 1];
        s1[lenght - i - 1] = temporal;
    }
}


