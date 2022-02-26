/* Programa 2:

Se necesita un programa que ayude a los ni�os a practicar las operaciones aritm�ticas fundamentales: 
sumar, restar, multiplicar y dividir. Se ofrecer� un men� de opciones para escoger lo que desee hacer 
(no usar biblioteca de funciones a excepci�n de stdio.h):

Te puedo ayudar a:
1. Sumar
2. Restar
3. Multiplicar
4. Dividir
5. Resultados
0. Fin
Opci�n: _

Suma: se piden dos n�meros y el resultado obtenido por el ni�o, la PC realiza el c�lculo y 
se comparan ambos resultados. Se muestra un mensaje indicando si est� correcto o incorrecto. 
Se le debe permitir comparar ambos resultados para verificar y retroalimentar. Las dem�s operaciones 
siguen un proceso similar. Implementa el tema de funciones. */

#include <stdio.h>
//FUNCIONES
int fsuma(float num1, float num2);
int frestar(float num1, float num2);
int fmultiplicar(float num1, float num2);
int fdividir(float num1, float num2);
void fresultados(float correcto);


//FUNCION PRINCIPAL
int main() {

	int opcion;
	float num1, num2, correcto;

	opcion = 1;
	correcto = 0;

	/* El proceso do-while nos ayuda a volver a recorrer el programa de manera indeterminada, es decir, solo acaba cuando el usuario lo requiera */
	do{
		printf("\n------------------------\n");
		printf("Te puedo ayudar a:");
		printf("\n1. Sumar");	
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n5. Resultados");
		printf("\n0. Fin\n");
		printf("------------------------");
		printf("\nEscriba su opci�n: ");
		scanf("%d", &opcion);
		
		if(opcion<0 || opcion>5){
			
			printf("\nOPCION NO VALIDA\n------------------------\n");
			printf("Te puedo ayudar a:");
			printf("\n1. Sumar");	
			printf("\n2. Restar");
			printf("\n3. Multiplicar");
			printf("\n4. Dividir");
			printf("\n5. Resultados");
			printf("\n0. Fin\n");
			printf("------------------------");
			printf("\nEscriba su opci�n: ");
			scanf("%d", &opcion);
			continue;
		}
		if(opcion == 0){
			break;
		}
		if(opcion == 5){
			fresultados(correcto);
			break;
		}
		
		/*Conociendo lo que quiere hacer el usuario ya podemos pedir valor a evaluar */
		printf("------------------------\n");
		printf("Escribe el primer n�mero: ");
		scanf("%f", &num1);
		printf("Escribe el segundo n�mero: ");
		scanf("%f", &num2);
		
		switch(opcion){
		case 1:
			correcto = fsuma(num1, num2);
			break;
		case 2:
			correcto = frestar(num1, num2);
			break;
		case 3:
			correcto = fmultiplicar(num1, num2);
			break;
		case 4:
			correcto = fdividir(num1, num2);
			break;
		}
		
	} while(opcion != 0);

	return 0;
}

//FUNCION DE LA SUMA
int fsuma(float num1, float num2){
	float operacion, resultado;

	printf("------------------------\n");

	operacion = num1+num2;

	printf("\nEscribe el resultado de %f + %f: ", num1, num2);
	scanf("%f", &resultado);
	
	//Evaluacion para darle resultados al usuario y que se pueda este autoevaluar. La misma logica para todas las funciones...
	if(resultado == operacion){
		printf("�CORRECTO!\n");
	}
	else{
		printf("Incorrecto :c\n");

		fresultados(operacion);
	}
	
	return(operacion);
	
}

//FUNCION DE LA RESTA
int frestar(float num1, float num2){
	float operacion, resultado;

	printf("------------------------\n");

	operacion = num1-num2;

	printf("\nEscribe el resultado de %f - %f: ", num1, num2);
	scanf("%f", &resultado);
	
	if(resultado == operacion){
		printf("�CORRECTO!\n");
	}
	else{
		printf("Incorrecto :c\n");

		fresultados(operacion);
	}
	
	return(operacion);
}

//FUNCION DE LA MULIPLICACI�N
int fmultiplicar(float num1, float num2){
	float operacion, resultado;

	printf("------------------------\n");

	operacion = num1*num2;

	printf("\nEscribe el resultado de %f * %f: ", num1, num2);
	scanf("%f", &resultado);
		
	if(resultado == operacion){
		printf("�CORRECTO!\n");
	}
	else{
		printf("Incorrecto :c\n");

		fresultados(operacion);
	}
	
	return(operacion);
}

//FUNCION DE LA DIVISION
int fdividir(float num1, float num2){
	float operacion, resultado;

	printf("------------------------\n");

	operacion = num1/num2;

	printf("\nEscribe el resultado de %f / %f: ", num1, num2);
	scanf("%f", &resultado);
	
	if(resultado == operacion){
		printf("�CORRECTO!\n");
	}
	else{
		printf("Incorrecto :c\n");

		fresultados(operacion);
	}
	
	return(operacion);
}
	
	
//FUNCION DE LOS RESULTADOS
void fresultados(float correcto){
	
	printf("\n-------------------------------------------------");
	printf("\nLa respuesta correcta al proceso anterior era: %.3f", correcto);
	printf("\n-------------------------------------------------\n");
}



