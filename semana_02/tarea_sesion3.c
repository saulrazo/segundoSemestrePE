#include <stdio.h>
#include <math.h>
 
int main(void){
 
 float estaturaPersona = 1.80;
 long int poblacionZmg = 4797000;
 unsigned int longitudPalabra = 10;
 unsigned char estadoCivil[] = "casado";
 long double masaPlanetaria = 5.972 * pow(10,24);
 double masaPlanetaria2 = masaPlanetaria;
 float cantidadCentavos = 0.93;
 signed int resultadoResta = 10;
 signed char teclaPresionada = 'a';
 
 printf("Estatura de la persona: %.2f\n", estaturaPersona);
 printf("Población de la ZMG: %ld\n", poblacionZmg);
 printf("Longitud de la palabra: %d caracteres\n", longitudPalabra);
 printf("Estado civil: %s\n", estadoCivil);
 printf("Masa planetaria: %Lf\n", masaPlanetaria);
 printf("Masa planetaria con notación científica: %g \n", masaPlanetaria2);
 printf("Cantidad de centavos: %.2f\n", cantidadCentavos);
 printf("Resultado de la resta de enteros: %d\n", resultadoResta);
 printf("Tecla presionada por el usuario: %c\n", teclaPresionada);
 
 return 0;
}
