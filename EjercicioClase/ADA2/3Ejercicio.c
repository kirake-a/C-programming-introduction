/*Programa 3:

Utilizando biblioteca de funciones, escribir un programa que reciban una serie de caracteres ASCII, 
terminar de capturar caracteres cuando el programa lo indique y que realicen lo siguiente 
(que imprima 1 si se cumple o 0 si no se cumple cada una de las funciones):

char esmayusc(char c): verificar si es un car�cter May�scula.
char esminusc(char c): verificar si es un car�cter Min�scula.
char esdigito(char c): verifica si es un car�cter num�rico: 1, 2, 3� 9, 0.
char essimbolo(char c): cualquier otro que no sean los anteriores.
char amayusc(char c): convierte a may�scula un caracter.
char aminusc(char c): convierte a min�scula un caracter. */

#include <stdio.h>

//FUNCIONES --------------------------------------------------------------------
void opciones(int opcion);
void verficamayusculas(); //opcion1
void verficaminusculas(); //opcion2
void verificanumerico(); //opcion3
void funcionEspecial();
void mayuscaracter();//opcion5
void minuscaracter();//opcion6

//FUNCION PRINCIPAL ------------------------------------------------------------
int main() { //AQUI SOLO ES EL MENU PARA IR A CADA FUNCION
	int opcion;
	do{
		printf("\n\n******************************************");
		printf("\nOpciones:");
		
		printf("\n1. Verificar si es un car�cter May�scula");
		printf("\n2. Verificar si es un car�cter Min�scula");
		printf("\n3. Verificar si un caracter es num�rico:");
		printf("\n4. Funcion especial. Ver un simbolo."); //ESTE QUEDA PENDIENTE AAAAAA
		printf("\n5. Convierte a may�scula un caracter");
		printf("\n6. Convierte a min�scula un caracter");
		printf("\n0. Fin");
		printf("\nEscriba su opci�n: ");
		scanf("%d", &opcion);
		
		if(opcion<0 || opcion>6){
			printf("\n\n******************************************");
			printf("\nOpci�n no v�lida...");
			
			printf("\n1. Verificar si es un car�cter May�scula");
			printf("\n2. Verificar si es un car�cter Min�scula");
			printf("\n3. Verificar si un caracter es num�rico:");
			printf("\n4. Funcion especial. Ver un simbolo.");
			printf("\n5. Convierte de may�scula un caracter");
			printf("\n5. Convierte de min�scula un caracter");
			printf("\n0. Fin");
			printf("\nEscriba su opci�n: ");
			scanf("%d", &opcion);
			continue;			
		}
		//Llaado a la funcion "opciones" para redirigir a nuevas funciones especializadas
		opciones(opcion);
		
	} while(opcion != 0);
	
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
		funcionEspecial();	
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
	printf("\n0 = No may�scula");
	printf("\n1 = May�scula");
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
	printf("\n0 = No num�rico");
	printf("\n1 = Num�rico");
	printf("\n------------------------------------------");
	printf("\nEscriba una numero: ");
	scanf(" %c", &numero);
	
	if(numero>=48 && numero<=57){
		printf("1"); //Numerico 0 1 2 ... 9
	}
	else{
		printf("0"); // No num�rico
	}
}

//Funcion para la verificacion de simbolos
void funcionEspecial(){
	char valor;

	printf("Inserte un simbolo: ");
	scanf("%c", &valor);

	if((valor >= 32 && valor <= 64) || (valor >= 91 && valor <= 96) || (valor >= 123 && valor <= 254)){
		printf("Este es un caracter especial. \nEs el simbolo %c del codigo ASCII.");
	}
	else{
		printf("El caracter digitado no es un simbolo, es una letra o un numero.");
	}
}

//CONVERTIR A MAYUSCULA
void mayuscaracter(){
	char letra;
	printf("\n\n------------------------------------------");
	printf("\nConvierte a may�scula un caracter");
	printf("\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=65 && letra<=90){
		printf("%c", letra); // Se imprime lo mismo, ya era mayus
	}
	if(letra>=97 && letra<=122){
		letra = letra-32;
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
	printf("\nConvierte a min�scula un caracter");
	printf("\n------------------------------------------");
	printf("\nEscriba una letra: ");
	scanf(" %c", &letra);
	
	if(letra>=97 && letra<=122){
		printf("%c", letra);// Se imprime lo mismo, ya era min
	}
	if(letra>=65 && letra<=90){
		letra = letra+32;
		printf("%c", letra); // De Mayus a min
	}
	else{
		printf("No es una letra"); //No es may ni minuscula
	}
}
