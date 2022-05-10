int menu(void){
    int num;

	printf("\nMENU\n");
	printf("-----------------\n1)Introducir texto (hasta 255 caracteres)\n2)Desplegar estadísticas\n3)Desplegar los pronombres encontrados\n4)Desplegar todas las palabras que comienzan con mayúsculas\n5)Desplegar los verbos en gerundio.\n6)Buscar una palabra en el texto.\n7)Intercambiar mayúsculas y minúsculas.\n8)Salir\n-----------------\n");
    scanf("%d", &num);
    return num;
}



int es(char* txt){
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

int pro(char* txt){
	int Pr;
	char p[11]={'yo', 'tu', 'el', 'ella', 'nosotros','nosotras','ustedes', 'vosotros', 'vosotras', 'ellos','ellas'};
		for ( int pr = 0; pr <= 5; pr++ )
		{
			for ( int i = 0; i < strlen(txt); i++ )
		   {
			if(p[pr]==txt[i]){
				printf("%c\n",txt[i]);
				Pr++;
			}
		   }
   		}
   	printf("\nel numero de pronombres encontrados: %i",Pr);
	
}
