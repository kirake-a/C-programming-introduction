/* Calcular la cantidad de segundo que estan incluidos en el numero de horas,
minutos y segundo ingresados por el usuario */

#include <stdio.h>

int main(){
    //The variables
    int horas, minutos, seg, t1, t2, t3, total;

    //Asking for values for the variables
    printf("Digite el numero de horas: ");
    scanf("%i", &horas);
    printf("Digite el numero de minutos: ");
    scanf("%i", &minutos);
    printf("Digite el numero de segundo: ");
    scanf("%i", &seg);

    //The process
    t1 = horas * 3600;
    t2 = minutos * 60;
    t3 = seg * 1;

    total = t1 + t2 + t3;

    //Output
    printf("El equivalente en segundos es: %i", total);

    return 0;
}