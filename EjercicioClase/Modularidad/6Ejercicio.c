#include <stdio.h>

void esDigito(char digito);

int main(){

    char n;

    printf("Digite una cosa: ");
    scanf("%c", &n);

    esDigito(n);
}

void esDigito(char digito){
    if (digito >= 65 && digito <= 90 || digito >= 97  && digito <= 122)
    {
        printf("\nSi es un digito");
    }
    else{
        printf("\nNo es un digito.");
    }

}