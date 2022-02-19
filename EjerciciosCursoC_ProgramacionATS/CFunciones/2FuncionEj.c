#include <stdio.h>

//Prototipado de la funcion a usar
int sumarDosNumeros();

int main(){

    //Definiendo a suma, para ser usada en la funcion propia
    float sum;

    /*Aqui se declara la nueva funcion y se espera el retorno 
    de la variable sum */
    sum = sumarDosNumeros(sum);
    printf("\nLa suma con retorno de los dos numeros es: %.3f", sum);

    // La funcion main() ya no regresa nada --> return 0;
    return 0;
}

/* Notese como llamammos a la copia de suma en esta funcion, pero ahora con int, 
y la retornamos como s, pero para la funcion misma, que esta anidada en main() */
int sumarDosNumeros(int s){
    float n1, n2;

    printf("\nDigite los el valor 1: ");
    scanf("%f", &n1);
    printf("\nDigite al valor 2: ");
    scanf("%f", &n2);

    s = n1 + n2;

    return s;
}