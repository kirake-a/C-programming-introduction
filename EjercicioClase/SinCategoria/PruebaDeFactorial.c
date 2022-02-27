#include <stdio.h>

int main(){
    int valor, vFactorial, i;

    printf("Digitar el valor: ");
    scanf("%d", &valor);

    for (i = 1; i = valor; i++){
        vFactorial = vFactorial * i;
    }

    printf("El valor factorial del numero digitado es: %d", vFactorial);

    return 0;
}