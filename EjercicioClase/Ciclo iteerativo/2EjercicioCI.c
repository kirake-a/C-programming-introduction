/* Dado el sueldo de n trabajadores, considerese un aumento del 15% a cada uno de ellos, si el sueldo es inferior
a $800. Imprimia el sueldo con el aumento incorporado si es que corresponde. */
#include <stdio.h>

int main(){

    float salary_increase, your_salary, percentage_increase;

    percentage_increase = 15;
    percentage_increase = percentage_increase / 100;

    do{
        printf("\nDigite su salario actual. Evaluaremos si es candidato a un aumento: ");
        scanf("%f", &your_salary);

        if(your_salary <= 800 && your_salary != 0){
            salary_increase = your_salary + (your_salary * percentage_increase);

            printf("Aumento APROBADO.");
            printf("\nSu sueldo era de: $%f", your_salary);
            printf("\nSu sueldo ahora es de: $%f", salary_increase);
        }
        else if(your_salary > 800){
            printf("Su perfil no es aplicable para un aumento salarial.");
        }

        printf("\nSi desea finalizar digite 0");

    } while (your_salary != 0);

    return 0;
}