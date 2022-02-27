/*Programa 3:

Utilizando biblioteca de funciones, escribir un programa que reciban una serie de caracteres ASCII, 
terminar de capturar caracteres cuando el programa lo indique y que realicen lo siguiente 
(que imprima 1 si se cumple o 0 si no se cumple cada una de las funciones):

char esmayusc(char c): verificar si es un carácter Mayúscula.
char esminusc(char c): verificar si es un carácter Minúscula.
char esdigito(char c): verifica si es un carácter numérico: 1, 2, 3… 9, 0.
char essimbolo(char c): cualquier otro que no sean los anteriores.
char amayusc(char c): convierte a mayúscula un caracter.
char aminusc(char c): convierte a minúscula un caracter. */

#include <stdio.h>
//FUNCIONES --------------------------------------------------------------------
void opciones(int opcion);
void verficamayusculas(); //opcion1
void verficaminusculas(); //opcion2
void verificanumerico(); //opcion3
void mayuscaracter();//opcion5
void minuscaracter();//opcion6

//FUNCION PRINCIPAL ------------------------------------------------------------
int main() { //AQUI SOLO ES EL MENU PARA IR A CADA FUNCION
	int opcion;
	do{
		printf("\n\n******************************************");
		printf("\nOpciones:");
		
		printf("\n1. Verificar si es un carácter Mayúscula");
		printf("\n2. Verificar si es un carácter Minúscula");
		printf("\n3. Verificar si un caracter es numérico:");
		printf("\n4. Otro"); //ESTE QUEDA PENDIENTE AAAAAA
		printf("\n5. Convierte de mayúscula un caracter");
		printf("\n6. Convierte de minúscula un caracter");
		printf("\n0. Fin");
		printf("\nEscriba su opción: ");
		scanf("%d", &opcion);
		
		if(opcion<0 || opcion>6){
			printf("\n\n******************************************");
			printf("\nOpción no válida...");
			
			printf("\n1. Verificar si es un carácter Mayúscula");
			printf("\n2. Verificar si es un carácter Minúscula");
			printf("\n3. Verificar si un caracter es numérico:");
			printf("\n4. Otro");
			printf("\n5. Convierte de mayúscula un caracter");
			printf("\n5. Convierte de minúscula un caracter");
			printf("\n0. Fin");
			printf("\nEscriba su opción: ");
			scanf("%d", &opcion);
			continue;			
		}
		opciones(opcion);
		
	} while(opcion!=0);
	
	return 0;
}


//FUNCION DE LAS OPCIONES
void opciones(int opcion){
	switch(opcion){
	case 1:
		verficamayusculas();	
		break;
	case 2:
		verficaminusculas();
		break;
	case 3:
		verificanumerico();
		break;
	case 4:
		printf("Qda pendiente");	
		break;
	case 5:
		mayuscaracter();	
		break;
	case 6:
		minuscaracter();
		break;
	case 0:
		break;
	}
}

//FUNCION QUE VERIFICA MAYUSCULAS ----------------------------------------------
void verficamayusculas(){
	char letra;
	printf("\n\n------------------------------------------");
	printf("\n0 = No mayúscula");
	printf("\n1 = Mayúscula");
	printf("\n\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=65 && letra<=90){
		printf("1"); //mayuscula
	}
	else{
		printf("0"); //No es may ni minuscula
	}
	
}

	
	
//FUNCION QUE VERIFICA MINUSCULAS ----------------------------------------------	
void verficaminusculas(){
	char letra;
	printf("\n\n------------------------------------------");
	printf("\n0 = No minuscula");
	printf("\n1 = Minuscula");
	printf("\n\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=67 && letra<=122){
		printf("1"); //minuscula
	}
	else{
		printf("0"); //No es may ni minuscula
	}
}

	
	
//VERIFICA SI ES NUMERICO
void verificanumerico(){
	char numero;
	printf("\n\n------------------------------------------");
	printf("\n0 = No numérico");
	printf("\n1 = Numérico");
	printf("\n------------------------------------------");
	printf("\nEscriba una numero: ");
	scanf(" %c", &numero);
	
	if(numero>=48 && numero<=57){
		printf("1"); //Numerico 0 1 2 ... 9
	}
	else{
		printf("0"); // No numérico
	}
}

	
//CONVERTIR A MAYUSCULA
void mayuscaracter(){
	char letra;
	printf("\n\n------------------------------------------");
	printf("\nConvierte a mayúscula un caracter");
	printf("\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=65 && letra<=90){
		printf("%c", letra); // Se imprime lo mismo, ya era mayus
	}
	if(letra>=97 && letra<=122){
		letra=letra-32;
		printf("%c", letra); //De min a mayus
	}
	else{
		printf("No es una letra"); //No es may ni minuscula
	}
	
}
	
	
//CONVERTIR A MINUSCULA

void minuscaracter(){
	char letra;
	printf("\n\n------------------------------------------");
	printf("\nConvierte a minúscula un caracter");
	printf("\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=97 && letra<=122){
		printf("%c", letra);// Se imprime lo mismo, ya era min
	}
	if(letra>=65 && letra<=90){
		letra=letra+32;
		printf("%c", letra); // De Mayus a min
	}
	else{
		printf("No es una letra"); //No es may ni minuscula
	}
}
