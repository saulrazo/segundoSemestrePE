#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

struct strAlumno{
    char nombreAlumno[20];
    char apellidoAlumno[20];
    int claveAlumno;
    float calificacionAlumno;
};

int desplegarMenu();
int min(char*);
void mostrarBits(short);
void desplegarMatriz(short[][MAX], short);
void llenarMatriz(short[][MAX], short);
int encontrarValor(short[][MAX],short, short);
void mayusculas(char[], char[], int);
int palabraMes(char[],int);
void desplegarEstructura (struct strAlumno);
struct strAlumno modificarEstructura ();


int main(void) {
int opc, miValor;
short n;
short myMatrix[MAX][MAX];
char laPalabra[20];
struct strAlumno elAlumno, nuevoAlumno;
  
//Llenar los datos de un alumnos
strcpy(elAlumno.nombreAlumno, "Alejandro");
strcpy(elAlumno.apellidoAlumno, "Piza");
elAlumno.claveAlumno=22;
elAlumno.calificacionAlumno=9.9;
  
//Para iniciar llenamos la matriz con numeros aleatorios
  llenarMatriz(myMatrix, MAX);

  do{
    opc=desplegarMenu();
    switch (opc)
      {
        case 1: 
              printf("Teclee el numero del cual quiere obtener los 4 ultimos bits: ");
              scanf("%hu", &n);
              mostrarBits(n>>4); 
              break;
        case 2:          
             desplegarMatriz(myMatrix, MAX);
             break;

        case 3:
             printf("Que valor quiere buscar?: ");
             scanf("%d", &miValor);
             printf("El valor %d se encontro %d veces en la matriz.\n\n", miValor, encontrarValor(myMatrix, MAX,miValor));
             break;
        case 4:
             printf("Teclea la palabra: ");             
             scanf("%s", laPalabra);             
             palabraMes(laPalabra, 20);
             break;
        case 5:
             desplegarEstructura(elAlumno);   
             elAlumno=modificarEstructura();           
             desplegarEstructura(elAlumno);
             break;
        default:
             break;
      }
    
  } while (opc!=6);
  
  
  return 0;
}


int desplegarMenu(){
    int num;

	printf("\n\n| MENU |\n");
	printf("------------------------------------\n1)Obtener ultimos 4 bits de un numero");
    printf("\n2)Desplegar matriz");
    printf("\n3)Buscar valor en matriz");
    printf("\n4)Determinar si la estructura corresponde a un mes");
    printf("\n5)Manejar estructuras");
	printf("\n6)Salir\n------------------------------------\n");
	printf("\nINGRESE UNA OPCIÓN: ");

	scanf("%d", &num);
    return num;
}




void llenarMatriz(short m[][MAX], short f){
    int filas,columnas;
    srand(time(NULL));

    for(filas=0;filas<f; filas++)
      for(columnas=0;columnas<MAX;columnas++){
           m[filas][columnas]=rand()%1000;
        
        }
     }

void desplegarMatriz(short m[][MAX], short f){
    int filas,columnas;

    for(filas=0;filas<f; filas++){
       for(columnas=0;columnas<MAX;columnas++){
           printf("%d ", m[filas][columnas]);  }
       printf("\n");}

}

void mostrarBits(short numt){
 	printf("%d", numt>>3 & 1);
 	printf("%d", numt>>2 & 1);
  	printf("%d", numt>>1 & 1);
  	printf("%d\n", numt & 1);
  	
}

int encontrarValor(short m[][MAX],short f, short valor){
    int filas,columnas,cont=0;

    for(filas=0;filas<f; filas++){
       for(columnas=0;columnas<MAX;columnas++){
            if(valor == (m[filas][columnas])){
                cont++;
            }
        }
    }

    return cont;
}


int min(char* txt){ //CONVIERTE A MINÚSCULAS LA CADENA INGRESADA
    for(int i;txt[i]!='\0';++i){
      txt[i]=tolower(txt[i]);
	}
}

int palabraMes(char* palabra,int longitud){
    char* meses[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    int resultado;
    min(palabra);
    // mayusculas(palabra,palabra_copy,longitud);

    for(int i=0;i<12;i++){
	   resultado = strcmp(palabra,meses[i]);
	      if(resultado==0){
		       printf("La palabra corresponde a un mes del anio");
               break;
           }
          else{
              printf("La palabra NO corresponde a un mes del anio.");
              break;
          }
	}

}


void desplegarEstructura (struct strAlumno elAlumno){
    printf("\n%s",elAlumno.nombreAlumno);
    printf("\n%s",elAlumno.apellidoAlumno);
    printf("\n%d",elAlumno.claveAlumno);
    printf("\n%.2f",elAlumno.calificacionAlumno);


}

struct strAlumno modificarEstructura (){
   struct strAlumno Alumno;
   printf("\n\nRealizar cambios\nNombre: ");
   scanf("%s", Alumno.nombreAlumno);
   printf("\nApellido: ");
   scanf("%s", Alumno.apellidoAlumno);   
   printf("\nClave: ");
   scanf("%d", &(Alumno.claveAlumno));
   printf("\nCalificacion: ");
   scanf("%f", &(Alumno.calificacionAlumno));
  return Alumno;

}