#include <stdio.h>
#include <math.h>

//FUNCIONES

void trescifras(int numero);
void doscifras(int numero);
void unacifra(int numero);
void armstrong(int unidades, int decenas, int centenas, int numero);

//FUNCION PRINCIPAL
int main() {
	
	
	int numero;
	printf("Programa que determina números Armstrong\n");
	printf("Escribe un número: ");
	scanf("%d", &numero);
	
	if(numero>=100 && numero<1000){
		trescifras(numero);	
	}
	else if(numero>=10 && numero<100){
		doscifras(numero);	
	}
	else if(numero>=0 && numero<10){
		unacifra(numero);	
	}
	if(numero<0 || numero>999){
		printf("Número no válido");
	}
	
	return 0;
}


//FUNCION PARA LAS TRES CIFRAS

void trescifras(int numero){
	
	int centenas, decenas, unidades;
	centenas=numero/100;
	decenas=numero-(centenas*100);
	decenas=decenas/10;
	unidades= numero-(centenas*100)-(decenas*10);
	armstrong(unidades, decenas, centenas, numero);

}
	
//FUNCION PARA DOS CIFRAS
void doscifras(int numero){
		
	int centenas, decenas, unidades;
	centenas==0;
	decenas=numero/10;
	unidades= numero-(decenas*10);
	armstrong(unidades, decenas, centenas, numero);
		
	
		
//FUNCION PARA UNA CIFRA
void unacifra(int numero){
	
	int unidades, decenas, centenas;
	unidades==numero;
	decenas==0;
	centenas==0;
	armstrong(unidades, decenas, centenas, numero);
	
//FUNCION ARMSTRONG

void armstrong(int unidades, int decenas, int centenas, int numero){
	
	int suma;
	suma=pow(centenas,3)+pow(decenas,3)+pow(unidades,3);
	if(suma==numero){
		printf("\n%d si es un número Armstrong", numero);
	}
	else{
		printf("\n%d no es un número Armstrong", numero);
	}
}