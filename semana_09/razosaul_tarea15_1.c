/*
------------------- TAREA 15 --------------------------

Problema 1:  (Tome como referencia 20 pesos por un dolar, y 25 pesos por un Euro.)

Convertidor de divisas:

 [1] Pesos a dólares

 [2] Dólares a pesos

 [3] Pesos a euros

 [4] Euros a pesos

 [0] Salir

Seleccione opción: 1

  Introduce pesos: 2000

 2000 pesos son 100.00 dólares

... presione cualquier tecla para continuar ...

Desplegar el menú otra vez

*/

#include <stdio.h>

int menu(void);
float getQuant(void);

void ped(float);
void dpe(float);
void peu(float);
void eup(float);


int main(void){
  int option;
  float quantity;

  do
  {
    option = menu();
    switch (option)
    {
    case 0: // Finalizar proceso
      printf("Proceso completado...");      
      break;

    case 1: // Pesos a dólares
      printf("Introduce pesos: ");
      quantity = getQuant();
      ped(quantity);
      break;

    case 2: // Dólares a pesos
      printf("Introduce dólares: ");
      quantity = getQuant();
      dpe(quantity);
      break;


    case 3: // Pesos a euros
      printf("Introduce pesos: ");
      quantity = getQuant();
      peu(quantity);
      break;


    case 4: // euros a pesos
      printf("Introduce euros: ");
      quantity = getQuant();
      eup(quantity);
      break;


    default:
      break;
    }
  } while (option!=0);

    return 0;
}


int menu(void){
  int selection;

  printf("\n[1] Pesos a dólares");
  printf("\n[2] Dólares a pesos");
  printf("\n[3] Pesos a euros");
  printf("\n[4] euros a pesos");
  printf("\n[0] Salir");

  printf("\n\nIngrese una opción: ");
  scanf("%d", &selection);
  return selection;

}

float getQuant(void){
  float quantity;

  scanf("%f",&quantity);
  return quantity;
}



void ped(float quantity){
  float result;

  result = quantity/20;
  printf("%.3f pesos son %.3f dólares.\n",quantity,result);

}

void dpe(float quantity){
  float result;

  result = quantity*20;
  printf("%.3f dólares son %.3f pesos.\n",quantity,result);

}

void peu(float quantity){
  float result;

  result = quantity/24;
  printf("%.3f pesos son %.3f euros.\n",quantity,result);

}

void eup(float quantity){
  float result;

  result = quantity*24;
  printf("%.3f euros son %.3f pesos.\n",quantity,result);

}

