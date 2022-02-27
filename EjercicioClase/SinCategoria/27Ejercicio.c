/* Construir un programa que escriba en palabras los dos dígitos 
que conforman a un número, máximo de 2 dígitos */
#include <stdio.h>
#include <math.h>

int main(){
    int num, result, tens, unit;
    //char tipo[30];

    printf("Digite el valor del numero, maximo de dos digitos: ");
    scanf("%d", &num);

    if(num >= 10 && num <= 99){
        tens = num / 10;
        unit = num % 10;

        switch(tens){
            case 0:
                printf("Cero");
                break;
            case 1:
                printf("Diez");
                break;
            case 2:
                printf("Veinte");
                break;
            case 3: 
                printf("Treinta");
                break;
            case 4:
                printf("Cuarenta");
                break;
            case 5:
                printf("Cincuenta");
                break;
            case 6:
                printf("Sesenta");
                break;
            case 7:
                printf("Setenta");
                break;
            case 8:
                printf("Ochenta");
                break;
            case 9:
                printf("Noventa");
                break;
            default:
                printf("Este valor no esta contemplado.");
        }

        switch (unit){
        case 0:
            printf("\nCero");
            break;
        case 1:
            printf("\nUno");
            break;
        case 2:
            printf("\nDos");
            break;
        case 3:
            printf("\nTres");
            break;
        case 4:
            printf("\nCuatro");
            break;
        case 5:
            printf("\nCinco");
            break;
        case 6:
            printf("\nSeis");
            break;
        case 7:
            printf("\nSiete");
            break;
        case 8:
            printf("\nOcho");
            break;
        case 9:
            printf("\nNueve");
            break;
        default:
            printf("\nEste valor no esta contemplado.");
        }
    }
    else if(num >= 0 && num <=9){
        unit = num;

        switch (unit){
        case 0:
            printf("Cero");
            break;
        case 1:
            printf("Uno");
            break;
        case 2:
            printf("Dos");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Cuatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Siete");
            break;
        case 8:
            printf("Ocho");
            break;
        case 9:
            printf("Nueve");
            break;
        default:
            printf("Este valor no esta contemplado.");
        }
    }
    else{
        printf("El numero que ingreso es mayor a tres digitos o es negativo.");
    }

    return 0;
}