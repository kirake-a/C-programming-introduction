/* Hacer un prograa que tenga un menu con las siguientes opciones:
1. Escriba una funcion en la que se introduzcan 10 enteros y que cuente cuantos de estos enteros son pares y cuandos son impares.

2. Escriba una funcion que tome un valor entero de tres digitos y regrese el numero con los digitos invertidos. Por ejemplo, dado
numero 169, la funcion debera regresar 961 */

#include <stdio.h>

void enteros10();
int invertirNumero();
void printF1(int cont_par, int cont_impar);
void printF2(int result);

int main(){

    int opcion, num_inverso;

    do{
        printf("\n\nSeleccione la opcion que desea realizar: ");
        printf("\n1. Determinar 10 enteros, pares e impares.");
        printf("\n2. Invertir los digitos de un numero.");
        printf("\n0. Finalizar el programa.");
        printf("\n\nSeleccione su opcion: ");
        scanf(" %d", &opcion);

        if(opcion < 0 || opcion > 3){
            printf("\n\nOpcion invalida, digite de nuevo...\n");

            printf("\n\nSeleccione la opcion que desea realizar: ");
            printf("\n1. Determinar 10 enteros, pares e impares.");
            printf("\n2. Invertir los digitos de un numero.");
            printf("\n0. Finalizar el programa.");
            printf("\n\nSeleccion su opcion nuevamente: ");
            scanf(" %d", &opcion);

            continue;
        }
        
        if(opcion == 1){
            enteros10();
        }
        else if(opcion == 2){
            num_inverso = invertirNumero();
            printF2(num_inverso);
        }

    }while(opcion != 0);

    return 0;
}

void enteros10(){

    int i, valor, contador_par = 0,contador_impar = 0, comprobar;

    for (i = 0; i < 10; i++){
        printf("Inserte al numero %d: ", i+1);
        scanf(" %d", &valor);

        comprobar = valor % 2;

        if(comprobar == 0){
            contador_par += 1;
        }
        else{
            contador_impar += 1;
        }
    }

    printF1(contador_par, contador_impar);
}

void printF1(int cont_par, int cont_impar){
    printf("\nEn total hay %d numeros pares.", cont_par);
    printf("\nEn total hay %d numeros impares.", cont_impar);
}

int invertirNumero(){
    int num, result, centenas, moddecenas, decenas, unidades;

    do{
        printf("Inserte un numero de 3 digitos: ");
        scanf(" %d", &num);

        if(num < 100 || num > 999){
            printf("\n\nValor incorrecto...");
        }

        centenas = num / 100;
        moddecenas = num % 100;
        decenas = moddecenas / 10;
        unidades = moddecenas % 10;

        result = centenas + (decenas * 10) + (unidades * 100);

    } while (num < 99 || num >= 1000);

    return result;
}

void printF2(int result){
    printf("El nuevo numero es: %d", result);
}