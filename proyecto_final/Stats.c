int menu(void){
    int num;

	printf("\n\nMENU\n");
	printf("-----------------\n1)Introducir texto (hasta 255 caracteres)");
    printf("\n2)Desplegar estadísticas");
    printf("\n3)Desplegar los pronombres encontrados");
    printf("\n4)Desplegar todas las palabras que comienzan con mayúsculas");
    printf("\n5)Desplegar los verbos en gerundio.");
    printf("\n6)Buscar una palabra en el texto.");
	printf("\n7)Intercambiar mayúsculas y minúsculas.");
	printf("\n8)Salir\n-----------------\n");




	scanf("%d", &num);
    return num;
}


int min(char* txt){
    for(int i;txt[i]!='\0';++i){
    txt[i]=tolower(txt[i]);
	}
}
int es(char* txt){
	
	min(txt);
	char v[5]={'a','e','i','o','u'};
	int nv;
	int c;
	int es=0;
	int consonantes=0;
	printf("%s\n",txt);
	printf("El numero de caracteres es de: %d\n",strlen(txt));
	for(int x=0;x<strlen(txt);x++){
	if(txt[x]==' '){
		printf("%c",txt[x]);
		es++;
	}
	if(txt[x]=='b'|| txt[x]=='c' || txt[x]=='d' || txt[x]=='f' || txt[x]=='g' || txt[x]=='h' || txt[x]=='j' || txt[x]=='k' || txt[x]=='l' || txt[x]=='m' || txt[x]=='n' || txt[x]=='p' || txt[x]=='q' || txt[x]=='r' || txt[x]=='s' || txt[x]=='t' || txt[x]=='v' || txt[x]=='w' || txt[x]=='x' || txt[x]=='y' || txt[x]=='z')
		{
		consonantes++;
		}
	}
		for ( int Vo = 0; Vo <= 5; Vo++ )
		{
			for ( int i = 0; i < strlen(txt); i++ )
		   {
			if(v[Vo]==txt[i]){
				nv++;
			}
		   }
   		}
   	printf("\nel numero de vocales es: %i",nv);
   	printf("\nel numero de consonantes es: %i",consonantes);
   	printf("\nel numero de palabras es: %i",es+1);
   	printf("\nel numero de espacios es: %i",es);
}
int P(char* pal){
	min(pal);
	const char* arr[]={"yo","tu","el","ella","nosotros","nosotras","ustedes","vosotros","vosotras","ellos","ellas"};
	char *resultado= NULL;
	int pro=0;
	for(int i=0;i<11;i++){
	resultado=strstr(pal,arr[i]);
	if(resultado){
		printf(arr[i]);
		printf("\n");
		pro++;
	}
	}
	printf("\nel numero de pronombres es de: %i\n",pro);
}
int bus(char* pal,char* pal2){
	
	min(pal);
	printf(pal);
	char *resultado= NULL;
	int pro=0;
	resultado=strstr(pal,pal2);
	if(resultado){
		pro++;
	}
	printf("\nla palabra se repite %i veces\n",pro);
}


int minMay(char* txt){ //INTERCAMBIAR MINÑUSCULAS POR MAYÚSCULAS Y VICEVERSA
	printf("Texto original: %s\n",txt);
	printf("Texto Invertido: ");
   for (int i = 0; i < strlen(txt); i++ )
   {
   	if(txt[i]>64&&txt[i]<91){
   		printf("%c",txt[i]+32);
	   }
	else{
	   	   if(txt[i]>96&&txt[i]<122){
	   		 printf("%c",txt[i]-32);
		   }
		   else{
		   	printf("%c",txt[i]);
		   }
	   }
	   }
}