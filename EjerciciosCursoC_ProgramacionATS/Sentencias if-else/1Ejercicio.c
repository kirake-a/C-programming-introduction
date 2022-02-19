/*Comprobar si un numer odigitado por el usuario es positivo
o negativo */
#include <stdio.h>

int main(){
    //The variables
    float number;

    //Asking for values for variables
    printf("Digite un numero a comprobar: ");
    scanf("%f", &number);

    //The process & the output
    if(number >= 1){
        printf("Este numero es positivo.");
    }
    else if(number <= -1){
        printf("este es un numero negativo.");
    }
    else{
        printf("El numero digitado es 0.");
    }

    return 0;
}